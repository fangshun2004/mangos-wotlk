/*
 * This file is part of the CMaNGOS Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include "Entities/CreatureSettings.h"
#include "Entities/Creature.h"
#include "AI/BaseAI/CreatureAI.h"

static_assert(std::is_enum_v<CreatureStaticFlags>, "Not enum type");

CreatureSettings::CreatureSettings(Creature* owner) : m_flags(CreatureStaticFlags(0)), m_flags2(CreatureStaticFlags2(0)), m_flags3(CreatureStaticFlags3(0)), m_flags4(CreatureStaticFlags4(0)), m_owner(owner)
{
}

void CreatureSettings::ResetStaticFlags(CreatureStaticFlags staticFlags, CreatureStaticFlags2 staticFlags2, CreatureStaticFlags3 staticFlags3, CreatureStaticFlags4 staticFlags4)
{
    m_flags = staticFlags;
    m_flags2 = staticFlags2;
    m_flags3 = staticFlags3;
    m_flags4 = staticFlags4;

    // Check if visibility distance different
    if (HasFlag(CreatureStaticFlags::LARGE_AOI))
        m_owner->GetVisibilityData().SetVisibilityDistanceOverride(VisibilityDistanceType::Large);
    if (HasFlag(CreatureStaticFlags3::GIGANTIC_AOI))
        m_owner->GetVisibilityData().SetVisibilityDistanceOverride(VisibilityDistanceType::Gigantic);
    if (HasFlag(CreatureStaticFlags3::INFINITE_AOI))
        m_owner->GetVisibilityData().SetVisibilityDistanceOverride(VisibilityDistanceType::Infinite);

    if (HasFlag(CreatureStaticFlags::UNINTERACTIBLE))
        m_owner->SetFlag(UNIT_FIELD_FLAGS, UNIT_FLAG_UNINTERACTIBLE);
    if (HasFlag(CreatureStaticFlags::IMMUNE_TO_PC))
        m_owner->SetImmuneToPlayer(true);
    if (HasFlag(CreatureStaticFlags::IMMUNE_TO_NPC))
        m_owner->SetImmuneToNPC(true);

    if (HasFlag(CreatureStaticFlags2::NO_OWNER_THREAT))
        m_owner->DisableThreatPropagationToOwner();
    if (HasFlag(CreatureStaticFlags2::HIDE_BODY))
        m_owner->SetFlag(UNIT_FIELD_FLAGS_2, UNIT_FLAG2_HIDE_BODY);
    if (HasFlag(CreatureStaticFlags3::DO_NOT_FADE_IN))
        m_owner->SetFlag(UNIT_FIELD_FLAGS_2, UNIT_FLAG2_DO_NOT_FADE_IN);
    if (HasFlag(CreatureStaticFlags3::SPELL_CLICK_FOR_PARTY_ONLY))
        m_owner->SetFlag(UNIT_FIELD_FLAGS_2, UNIT_FLAG2_SPELL_CLICK_IN_GROUP);
    if (HasFlag(CreatureStaticFlags3::CANNOT_TURN))
        m_owner->SetFlag(UNIT_FIELD_FLAGS_2, UNIT_FLAG2_CANNOT_TURN);

    if (HasFlag(CreatureStaticFlags4::NO_BIRTH_ANIM))
        m_owner->SetUpdateFlag(UPDATEFLAG_NO_BIRTH_ANIM, true);
}

void CreatureSettings::SetFlag(CreatureStaticFlags flag)
{
    m_flags |= flag;
    updateFlag(flag, true);
}

void CreatureSettings::SetFlag(CreatureStaticFlags2 flag)
{
    m_flags2 |= flag;
    updateFlag(flag, true);
}

void CreatureSettings::SetFlag(CreatureStaticFlags3 flag)
{
    m_flags3 |= flag;
    updateFlag(flag, true);
}

void CreatureSettings::SetFlag(CreatureStaticFlags4 flag)
{
    m_flags4 |= flag;
    updateFlag(flag, true);
}

void CreatureSettings::RemoveFlag(CreatureStaticFlags flag)
{
    m_flags &= ~flag;
    updateFlag(flag, false);
}

void CreatureSettings::RemoveFlag(CreatureStaticFlags2 flag)
{
    m_flags2 &= ~flag;
    updateFlag(flag, false);
}

void CreatureSettings::RemoveFlag(CreatureStaticFlags3 flag)
{
    m_flags3 &= ~flag;
    updateFlag(flag, false);
}

void CreatureSettings::RemoveFlag(CreatureStaticFlags4 flag)
{
    m_flags4 &= ~flag;
    updateFlag(flag, false);
}

bool CreatureSettings::HasFlag(CreatureStaticFlags flag) const
{
    return bool(m_flags & flag);
}

bool CreatureSettings::HasFlag(CreatureStaticFlags2 flag) const
{
    return bool(m_flags2 & flag);
}

bool CreatureSettings::HasFlag(CreatureStaticFlags3 flag) const
{
    return bool(m_flags3 & flag);
}

bool CreatureSettings::HasFlag(CreatureStaticFlags4 flag) const
{
    return bool(m_flags4 & flag);
}

void CreatureSettings::updateFlag(CreatureStaticFlags flag, bool apply)
{
    switch (flag)
    {
        case CreatureStaticFlags::UNKILLABLE:
            if (apply)
                if (UnitAI* ai = m_owner->AI())
                    static_cast<CreatureAI*>(ai)->ResetDeathPrevented();
            break;
        case CreatureStaticFlags::NO_MELEE_FLEE:
            m_owner->AI()->SetMeleeEnabled(!apply);
            break;
        case CreatureStaticFlags::SESSILE:
            m_owner->AI()->SetAIImmobilizedState(apply);
            break;
        default:
            break;
    }
}

void CreatureSettings::updateFlag(CreatureStaticFlags2 /*flag*/, bool /*apply*/)
{
}

void CreatureSettings::updateFlag(CreatureStaticFlags3 /*flag*/, bool /*apply*/)
{
}

void CreatureSettings::updateFlag(CreatureStaticFlags4 flag, bool apply)
{
    if (flag == CreatureStaticFlags4::NO_BIRTH_ANIM)
        m_owner->SetUpdateFlag(UPDATEFLAG_NO_BIRTH_ANIM, apply);
}

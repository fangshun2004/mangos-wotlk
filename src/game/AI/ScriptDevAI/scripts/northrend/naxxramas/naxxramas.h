/* This file is part of the ScriptDev2 Project. See AUTHORS file for Copyright information
 * This program is free software licensed under GPL version 2
 * Please see the included DOCS/LICENSE.TXT for more information */

#ifndef DEF_NAXXRAMAS_H
#define DEF_NAXXRAMAS_H

enum
{
    MAX_ENCOUNTER               = 16,

    // A few instance-script related texts
    SAY_THADDIUS_GREET          = -1533029,

    // Background screams in Instance if Thaddius still alive, four of them from 8873 to 8876
    SOUND_SCREAM1               = 8873,

    // Kel'Thuzad
    SAY_KELTHUZAD_CAT_DIED      = -1533089,
    // Kel'Thuzad's taunts after killing Wing Bosses
    SAY_KELTHUZAD_TAUNT1        = -1533090,
    SAY_KELTHUZAD_TAUNT2        = -1533091,
    SAY_KELTHUZAD_TAUNT3        = -1533092,
    SAY_KELTHUZAD_TAUNT4        = -1533093,
    // Dialogues with Lich King
    SAY_SAPP_DIALOG1            = -1533084,
    SAY_SAPP_DIALOG2_LICH       = -1533085,
    SAY_SAPP_DIALOG3            = -1533086,
    SAY_SAPP_DIALOG4_LICH       = -1533087,
    SAY_SAPP_DIALOG5            = -1533088,
    // Horsemen dialogue texts
    SAY_BLAU_TAUNT1             = -1533045,
    SAY_BLAU_TAUNT2             = -1533046,
    SAY_BLAU_TAUNT3             = -1533047,             // NYI - requires additiona research
    SAY_RIVE_TAUNT1             = -1533071,
    SAY_RIVE_TAUNT2             = -1533072,
    SAY_RIVE_TAUNT3             = -1533073,             // NYI - requires additiona research
    SAY_KORT_TAUNT1             = -1533052,
    SAY_KORT_TAUNT2             = -1533053,
    SAY_KORT_TAUNT3             = -1533054,             // NYI - requires additiona research
    SAY_ZELI_TAUNT1             = -1533059,
    SAY_ZELI_TAUNT2             = -1533060,
    SAY_ZELI_TAUNT3             = -1533061,             // NYI - requires additiona research

    TYPE_ANUB_REKHAN            = 0,
    TYPE_FAERLINA               = 1,
    TYPE_MAEXXNA                = 2,

    TYPE_NOTH                   = 3,
    TYPE_HEIGAN                 = 4,
    TYPE_LOATHEB                = 5,

    TYPE_RAZUVIOUS              = 6,
    TYPE_GOTHIK                 = 7,
    TYPE_FOUR_HORSEMEN          = 8,

    TYPE_PATCHWERK              = 9,
    TYPE_GROBBULUS              = 10,
    TYPE_GLUTH                  = 11,
    TYPE_THADDIUS               = 12,

    TYPE_SAPPHIRON              = 13,
    TYPE_KELTHUZAD              = 14,

    TYPE_UNDYING_FAILED         = 15,                       // Achievements Undying and Immortal, needs to be saved to database

    MAX_SPECIAL_ACHIEV_CRITS    = 6,

    TYPE_ACHIEV_SAFETY_DANCE    = 0,
    TYPE_ACHIEV_KNOCK_YOU_OUT   = 1,
    TYPE_ACHIEV_HUNDRED_CLUB    = 2,
    TYPE_ACHIEV_SHOCKING        = 3,
    TYPE_ACHIEV_SPORE_LOSER     = 4,
    TYPE_ACHIEV_GET_ENOUGH      = 5,

    MAX_HEIGAN_TRAP_AREAS       = 4,

    NPC_ANUB_REKHAN             = 15956,
    NPC_FAERLINA                = 15953,
    NPC_FAERLINA_WORSHIPPER     = 16506,
    NPC_FAERLINA_FOLLOWER       = 16505,
    NPC_CORPSE_SCARAB           = 16698,
    NPC_CRYPT_GUARD             = 16573,

    NPC_THADDIUS                = 15928,
    NPC_STALAGG                 = 15929,
    NPC_FEUGEN                  = 15930,
    NPC_TESLA_COIL              = 16218,
    NPC_NAXXRAMAS_TRIGGER       = 16082,
    NPC_TOXIC_TUNNEL            = 16400,

    NPC_ZELIEK                  = 16063,
    NPC_THANE                   = 16064,
    NPC_BLAUMEUX                = 16065,
    NPC_RIVENDARE               = 30549,

    NPC_SAPPHIRON               = 15989,
    NPC_KELTHUZAD               = 15990,
    NPC_THE_LICHKING            = 16980,
    NPC_MR_BIGGLESWORTH         = 16998,
    NPC_LIVING_POISON           = 16027,

    NPC_OBEDIENCE_CRYSTAL       = 29912,
    NPC_DEATHKNIGHT_UNDERSTUDY  = 16803,

    NPC_OLDWORLD_TRIGGER        = 15384,

    // Gothik
    NPC_GOTHIK                  = 16060,
    NPC_SUB_BOSS_TRIGGER        = 16137,                    // summon locations
    NPC_UNREL_TRAINEE           = 16124,
    NPC_UNREL_DEATH_KNIGHT      = 16125,
    NPC_UNREL_RIDER             = 16126,
    NPC_SPECT_TRAINEE           = 16127,
    NPC_SPECT_DEATH_KNIGHT      = 16148,
    NPC_SPECT_RIDER             = 16150,
    NPC_SPECT_HORSE             = 16149,

    // Heigan
    NPC_DISEASED_MAGGOT         = 16056,
    NPC_ROTTING_MAGGOT          = 16057,
    NPC_EYE_STALK               = 16236,

    // Gluth
    NPC_ZOMBIE_CHOW_N           = 16360,
    NPC_ZOMBIE_CHOW_H           = 30303,
    NPC_GLUTH                   = 15932,

    // Kel'Thuzad
    NPC_SOLDIER_FROZEN          = 16427,
    NPC_UNSTOPPABLE_ABOM        = 16428,
    NPC_SOUL_WEAVER             = 16429,
    NPC_GUARDIAN                = 16441,

    // Arachnid Quarter
    GO_ARAC_ANUB_DOOR           = 181126,                   // encounter door
    GO_ARAC_ANUB_GATE           = 181195,                   // open after boss is dead
    GO_ARAC_FAER_WEB            = 181235,                   // encounter door
    GO_ARAC_FAER_DOOR           = 194022,                   // after faerlina, to outer ring
    GO_ARAC_MAEX_INNER_DOOR     = 181197,                   // encounter door
    GO_ARAC_MAEX_OUTER_DOOR     = 181209,                   // right before maex

    // Plague Quarter
    GO_PLAG_SLIME01_DOOR        = 181198,                   // not used
    GO_PLAG_SLIME02_DOOR        = 181199,                   // not used
    GO_PLAG_NOTH_ENTRY_DOOR     = 181200,                   // encounter door
    GO_PLAG_NOTH_EXIT_DOOR      = 181201,                   // exit, open when boss dead
    GO_PLAG_HEIG_ENTRY_DOOR     = 181202,
    GO_PLAG_HEIG_EXIT_DOOR      = 181203,                   // exit, open when boss dead
    GO_PLAG_LOAT_DOOR           = 181241,                   // encounter door

    // Military Quarter
    GO_MILI_GOTH_ENTRY_GATE     = 181124,                   // used while encounter is in progress
    GO_MILI_GOTH_EXIT_GATE      = 181125,                   // exit, open at boss dead
    GO_MILI_GOTH_COMBAT_GATE    = 181170,                   // used while encounter is in progress
    GO_MILI_HORSEMEN_DOOR       = 181119,                   // encounter door

    GO_CHEST_HORSEMEN_NORM      = 181366,                   // four horsemen event, DoRespawnGameObject() when event == DONE
    GO_CHEST_HORSEMEN_HERO      = 193426,

    // Construct Quarter
    GO_CONS_PATH_EXIT_DOOR      = 181123,
    GO_CONS_GLUT_EXIT_DOOR      = 181120,
    GO_CONS_THAD_DOOR           = 181121,                   // Thaddius enc door
    GO_CONS_NOX_TESLA_FEUGEN    = 181477,
    GO_CONS_NOX_TESLA_STALAGG   = 181478,

    // Frostwyrm Lair
    GO_KELTHUZAD_WATERFALL_DOOR = 181225,                   // exit, open after sapphiron is dead
    GO_KELTHUZAD_EXIT_DOOR      = 181228,
    GO_KELTHUZAD_TRIGGER        = 181444,
    GO_KELTHUZAD_WINDOW_1       = 181402,
    GO_KELTHUZAD_WINDOW_2       = 181403,
    GO_KELTHUZAD_WINDOW_3       = 181404,
    GO_KELTHUZAD_WINDOW_4       = 181405,

    // Eyes
    GO_ARAC_EYE_RAMP            = 181212,
    GO_PLAG_EYE_RAMP            = 181211,
    GO_MILI_EYE_RAMP            = 181210,
    GO_CONS_EYE_RAMP            = 181213,

    GO_ARAC_EYE_BOSS            = 181233,
    GO_PLAG_EYE_BOSS            = 181231,
    GO_MILI_EYE_BOSS            = 181230,
    GO_CONS_EYE_BOSS            = 181232,

    // Portals
    GO_ARAC_PORTAL              = 181575,
    GO_PLAG_PORTAL              = 181577,
    GO_MILI_PORTAL              = 181578,
    GO_CONS_PORTAL              = 181576,

    AREATRIGGER_FROSTWYRM       = 4120,                     // not needed here, but AT to be scripted
    AREATRIGGER_KELTHUZAD       = 4112,
    AREATRIGGER_GOTHIK          = 4116,
    AREATRIGGER_THADDIUS_DOOR   = 4113,
    AREATRIGGER_FROSTWYRM_TELE  = 4156,

    // Achievement related
    ACHIEV_CRIT_SAFETY_DANCE_N  = 7264,                     // Heigan, achievs 1996, 2139
    ACHIEV_CRIT_SAFETY_DANCE_H  = 7548,
    ACHIEV_CRIT_KNOCK_YOU_OUT_N = 7265,                     // Faerlina, achievs 1997, 2140
    ACHIEV_CRIT_KNOCK_YOU_OUT_H = 7549,
    ACHIEV_CRIT_HUNDRED_CLUB_N  = 7567,                     // Sapphiron, achievs 2146, 2147
    ACHIEV_CRIT_HUNDRED_CLUB_H  = 7568,
    ACHIEV_CRIT_TOGETHER_N      = 7600,                     // Four Horsemen, achievs 2176, 2177
    ACHIEV_CRIT_TOGETHER_H      = 7601,
    ACHIEV_CRIT_SHOCKING_N      = 7604,                     // Thaddius, achievs 2178, 2179
    ACHIEV_CRIT_SHOCKING_H      = 7605,
    ACHIEV_CRIT_SPORE_LOSER_N   = 7612,                     // Loatheb, achievs 2182, 2183
    ACHIEV_CRIT_SPORE_LOSER_H   = 7613,
    ACHIEV_CRIT_GET_ENOUGH_N    = 7614,                     // Kel'Thuzad, achievs 2184, 2185
    ACHIEV_CRIT_GET_ENOUGH_H    = 7615,

    // 'The Immortal'(25m) or 'Undying'(10m) - (achievs 2186, 2187)
    ACHIEV_CRIT_IMMORTAL_KEL    = 7616,
    ACHIEV_CRIT_IMMOORTAL_LOA   = 13236,
    ACHIEV_CRIT_IMMOORTAL_THAD  = 13235,
    ACHIEV_CRIT_IMMOORTAL_MAEX  = 13234,
    ACHIEV_CRIT_IMMOORTAL_HORSE = 13233,
    ACHIEV_CRIT_UNDYING_KEL     = 7617,
    ACHIEV_CRIT_UNDYING_HORSE   = 13237,
    ACHIEV_CRIT_UNDYING_MAEX    = 13238,
    ACHIEV_CRIT_UNDYING_LOA     = 13239,
    ACHIEV_CRIT_UNDYING_THAD    = 13240,

    // Timed achievement criterias
    ACHIEV_START_PATCHWERK_ID   = 10286,
    ACHIEV_START_MAEXXNA_ID     = 9891,
};

struct GothTrigger
{
    bool bIsRightSide;
    bool bIsAnchorHigh;
};

static const float aSapphPositions[4] = {3521.48f, -5234.87f, 137.626f, 4.53329f};

struct SpawnLocation
{
    float m_fX, m_fY, m_fZ, m_fO;
};

// Used in Construct Quarter for the deadly blobs continuously spawning in Patcherk corridor
static const SpawnLocation aLivingPoisonPositions[6] =
{
    {3128.692f, -3119.211f, 293.346f, 4.725505f},
    {3154.432f, -3125.669f, 293.408f, 4.456693f},
    {3175.614f, -3134.716f, 293.282f, 4.244928f},
    {3128.709f, -3157.404f, 293.3238f, 4.725505f},
    {3145.881f, -3158.563f, 293.3216f, 4.456693f},
    {3157.736f, -3164.859f, 293.2874f, 4.244928f},
};

class instance_naxxramas : public ScriptedInstance
{
    public:
        instance_naxxramas(Map* pMap);
        ~instance_naxxramas() {}

        void Initialize() override;

        bool IsEncounterInProgress() const override;

        void OnPlayerEnter(Player* pPlayer) override;
        void OnCreatureCreate(Creature* pCreature) override;
        void OnObjectCreate(GameObject* pGo) override;

        void OnCreatureRespawn(Creature* creature) override;

        void OnPlayerDeath(Player* pPlayer) override;
        void OnCreatureDeath(Creature* pCreature) override;

        void SetData(uint32 uiType, uint32 uiData) override;
        uint32 GetData(uint32 uiType) const override;

        void SetSpecialAchievementCriteria(uint32 uiType, bool bIsMet);
        bool CheckAchievementCriteriaMeet(uint32 uiCriteriaId, Player const* pSource, Unit const* pTarget, uint32 uiMiscValue1 /* = 0*/) const override;

        const char* Save() const override { return m_strInstData.c_str(); }
        void Load(const char* chrIn) override;

        void Update(const uint32 diff) override;

        // Heigan
        void DoTriggerHeiganTraps(Creature* pHeigan, uint32 uiAreaIndex);

        // goth
        bool IsInRightSideGothikArea(Unit* pUnit);

        // Gluth
        const GuidVector& GetGluthTriggers() const { return m_gluthTriggers; }

        // thaddius
        void GetThadTeslaCreatures(GuidList& lList) const { lList = m_lThadTeslaCoilList; };

        // kel
        void SetChamberCenterCoords(float fX, float fY, float fZ);
        void GetChamberCenterCoords(float& fX, float& fY, float& fZ) const
        { fX = m_fChamberCenterX; fY = m_fChamberCenterY; fZ = m_fChamberCenterZ; }
        void DoTaunt();

    protected:
        uint32 m_auiEncounter[MAX_ENCOUNTER];
        bool m_abAchievCriteria[MAX_SPECIAL_ACHIEV_CRITS];
        std::string m_strInstData;

        GuidList m_lThadTeslaCoilList;

        std::unordered_map<ObjectGuid, GothTrigger> m_mGothTriggerMap;
        GuidList m_alHeiganTrapGuids[MAX_HEIGAN_TRAP_AREAS];
        GuidVector m_heiganBackroomAdds;
        GuidVector m_corpseScarabs;

        float m_fChamberCenterX;
        float m_fChamberCenterY;
        float m_fChamberCenterZ;

        uint32 m_uiSapphSpawnTimer;
        uint32 m_uiTauntTimer;
        uint32 m_uiHorsemenAchievTimer;
        uint8 m_uiHorseMenKilled;
        uint32 m_uiLivingPoisonTimer;
        uint32 m_uiScreamsTimer;
        uint32 m_despawnKTTriggerTimer;

        DialogueHelper m_dialogueHelper;

        GuidVector m_gluthTriggers;
};

#endif

#ifndef ZNPCTYPES_H
#define ZNPCTYPES_H

enum en_NPCTYPES
{
    NPC_TYPE_UNKNOWN,
    NPC_TYPE_BASIC = 'NT00',
    NPC_TYPE_COMMON,
    NPC_TYPE_AMBIENT = 'NTS0',
    NPC_TYPE_VILLAGER,
    NPC_TYPE_ROBOT,
    NPC_TYPE_BOSS,
    NPC_TYPE_TEST,
    NPC_TYPE_BADGUY,
    NPC_TYPE_JELLYPINK = 'NTA0',
    NPC_TYPE_JELLYBLUE,
    NPC_TYPE_KINGNEPTUNE,
    NPC_TYPE_MIMEFISH,
    NPC_TYPE_COW,
    NPC_TYPE_TIKI_WOOD = 'NTT0',
    NPC_TYPE_TIKI_LOVEY,
    NPC_TYPE_TIKI_QUIET,
    NPC_TYPE_TIKI_THUNDER,
    NPC_TYPE_TIKI_STONE,
    NPC_TYPE_FISH = 'NTF0',
    NPC_TYPE_FISH_MALE,
    NPC_TYPE_FISH_FEMALE,
    NPC_TYPE_FISH_ELDER,
    NPC_TYPE_FISH_ELDESS,
    NPC_TYPE_FISH_BOY,
    NPC_TYPE_FISH_GIRL,
    NPC_TYPE_BALLOONBOY,
    NPC_TYPE_GARY,
    NPC_TYPE_SQUIDWARD,
    NPC_TYPE_SQUIDWARD_MUSIC,
    NPC_TYPE_SQUIDWARD_BANDAID,
    NPC_TYPE_DUTCHMAN_NSB,
    NPC_TYPE_SANDYBIKINI,
    NPC_TYPE_SANDYNPC,
    NPC_TYPE_PATNPC,
    NPC_TYPE_BOBNPC,
    NPC_TYPE_PLANKNPC,
    NPC_TYPE_MRKRABS,
    NPC_TYPE_MSPUFFS,
    NPC_TYPE_LARRY,
    NPC_TYPE_BUBBUDDY,
    NPC_TYPE_NEWSFISH,
    NPC_TYPE_NEWSFISHTV,
    NPC_TYPE_MOTORIST,
    NPC_TYPE_MERMANCHAIR,
    NPC_TYPE_MERMAN,
    NPC_TYPE_BARNACLEBOY,
    NPC_TYPE_WORM,
    NPC_TYPE_HAMMER = 'NTR0',
    NPC_TYPE_HAMSPIN,
    NPC_TYPE_TARTAR,
    NPC_TYPE_GLOVE,
    NPC_TYPE_MONSOON,
    NPC_TYPE_SLEEPY,
    NPC_TYPE_ARFDOG,
    NPC_TYPE_ARFARF,
    NPC_TYPE_CHUCK,
    NPC_TYPE_TUBELET,
    NPC_TYPE_TUBESLAVE,
    NPC_TYPE_SLICK,
    NPC_TYPE_FODDER,
    NPC_TYPE_FODBOMB,
    NPC_TYPE_FODBZZT,
    NPC_TYPE_CHOMPER,
    NPC_TYPE_CRITTER,
    NPC_TYPE_DUPLOTRON = 'NTD0',
    NPC_TYPE_KINGJELLY = 'NTH0',
    NPC_TYPE_DUTCHMAN,
    NPC_TYPE_PRAWN,
    NPC_TYPE_BOSSSANDY = 'NTB0',
    NPC_TYPE_BOSSPAT,
    NPC_TYPE_BOSS_SB1,
    NPC_TYPE_BOSSBOBBY,
    NPC_TYPE_BOSSPLANKTON,
    NPC_TYPE_BADGUYMEDIUM = 'NBG0',
    NPC_TYPE_NOMORE,
    NPC_TYPE_FORCE = 0x7fffffff
};

struct xFactory;

void zNPCTypes_StartupTypes();
void zNPCTypes_ShutdownTypes();
void zNPCTypes_RegisterTypes(xFactory* fac);

#endif
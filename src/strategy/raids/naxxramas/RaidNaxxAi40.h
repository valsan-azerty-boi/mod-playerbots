/*
 * Cast intended Naxxramas 40 struct for mod-individual-progression Naxx classes
 */

#ifndef _PLAYERBOT_RAIDNAXXAI40_H
#define _PLAYERBOT_RAIDNAXXAI40_H

#include "EventMap.h"
#include "CreatureAIImpl.h"
#include "ObjectGuid.h"
#include "ScriptMgr.h"
#include "ScriptedCreature.h"
#include "SpellInfo.h"
#include <list>

struct BossAiHeigan40 : BossAI
{
    InstanceScript* pInstance;
    EventMap events;
    uint8 currentPhase{};
    uint8 currentSection{};
    bool moveRight{};
    GuidList portedPlayersThisPhase;
};

struct BossAiGrobbulus40 : BossAI
{
    EventMap events;
    SummonList summons;
    InstanceScript* pInstance;
    uint32 dropSludgeTimer{};
};

struct BossAiGluth40 : BossAI
{
    EventMap events;
    SummonList summons;
    InstanceScript* pInstance;
};

struct BossAiThaddius40 : BossAI
{
    InstanceScript* pInstance;
    EventMap events;
    SummonList summons;
    uint32 summonTimer{};
    uint32 reviveTimer{};
    uint32 resetTimer{};
    bool ballLightningEnabled;
};

struct BossAiRazuvious40 : BossAI
{
    EventMap events;
    SummonList summons;
    InstanceScript* pInstance;
};

struct BossAiFourhorsemen40 : BossAI
{
    EventMap events;
    InstanceScript* pInstance;
    uint8 horsemanId;
    bool doneFirstShieldWall;
};

struct BossAiLoatheb40 : BossAI
{
    InstanceScript* pInstance;
    uint8 doomCounter;
    EventMap events;
    SummonList summons;
};

struct BossAiSapphiron40 : BossAI
{
    EventMap events;
    InstanceScript* pInstance;
    uint8 iceboltCount{};
    uint32 spawnTimer{};
    GuidList blockList;
    ObjectGuid currentTarget;
};

struct BossAiKelthuzad40 : BossAI
{
    EventMap events;
    SummonList summons;
    InstanceScript* pInstance;
    bool _justSpawned;
};

#endif

#include "RaidAq40Strategy.h"

#include "Strategy.h"

void RaidAq40Strategy::InitTriggers(std::vector<TriggerNode*>& triggers)
{
    triggers.push_back(new TriggerNode("aq40 should use resistance buffs",
                        { NextAction("aq40 use resistance buffs", ACTION_RAID) }
    ));

    triggers.push_back(new TriggerNode("aq40 has emperor aggro",
                        { NextAction("aq40 move from other emperor", ACTION_EMERGENCY) }
    ));

    triggers.push_back(new TriggerNode("aq40 warlock tank emperor",
                        { NextAction("searing pain", ACTION_RAID) }
    ));

    triggers.push_back(new TriggerNode("aq40 mage frostbolt viscidus", // would be rank 1, ideally.. supplying "frostbolt(rank 1)" seems to not work
                        { NextAction("frostbolt", ACTION_RAID) }
    ));

    triggers.push_back(new TriggerNode("aq40 melee viscidus",
                        { NextAction("aq40 melee viscidus", ACTION_RAID + 1) }
    ));

    triggers.push_back(new TriggerNode("aq40 emperor fight",
                        { NextAction("aq40 decide emperor action", ACTION_RAID) }
    ));

    triggers.push_back(new TriggerNode("aq40 ouro burrowed",
                        { NextAction("aq40 ouro burrowed flee", ACTION_RAID) }
    ));

    triggers.push_back(new TriggerNode("aq40 cthun1 started",
                        { NextAction("aq40 cthun1 get positioned", ACTION_RAID) }
    ));

    triggers.push_back(new TriggerNode("aq40 cthun2 started",
                        { NextAction("aq40 cthun2 get positioned", ACTION_RAID) }
    ));
}

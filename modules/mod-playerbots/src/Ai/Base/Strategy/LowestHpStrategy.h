/*
 * Created By Baggles
 * Sets up the strategy for the lowest HP target. This is used by DPS to focus down the lowest HP targets and/or totems.
 */ 

#ifndef _PLAYERBOT_LOWESTHPSTRATEGY_H
#define _PLAYERBOT_LOWESTHPSTRATEGY_H

#include "Strategy.h"

class PlayerbotAI;

class LowestHpStrategy : public Strategy
{
public:
    LowestHpStrategy(PlayerbotAI* botAI); // Constructor defined in .cpp
    std::string const getName() override { return "lowest"; }
    void InitTriggers(std::vector<TriggerNode*>& triggers) override;
};

#endif
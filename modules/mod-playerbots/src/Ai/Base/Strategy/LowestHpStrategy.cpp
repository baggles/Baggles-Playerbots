/*
 * Created By Baggles
 * Sets up the strategy for the lowest HP target. This is used by DPS to focus down the lowest HP targets and/or totems.
 */

#include "LowestHpStrategy.h"
#include "PlayerbotAI.h"

// Define the constructor here
LowestHpStrategy::LowestHpStrategy(PlayerbotAI* botAI) : Strategy(botAI) {}

// Define the trigger mapping here or in your InitTriggers function
void LowestHpStrategy::InitTriggers(std::vector<TriggerNode*>& triggers)
{
    // This tells the bot: when the "lowest" strategy is active, 
    // and if the "low health target" trigger is met, perform the "attack" action.
    triggers.push_back(
        new TriggerNode("often",{ NextAction("attack least hp target", 50.0f) } )
    );
}

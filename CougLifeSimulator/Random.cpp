#include "Random.h"
#pragma once

RandomLifeEvents::RandomLifeEvents()
{
	mLevel = 0;
	mLifeEvent = false;
	mLuck = 0;
}

RandomLifeEvents::~RandomLifeEvents()
{

}

RandomLifeEvents::RandomLifeEvents(RandomLifeEvents & copy)
{
	mLuck = copy.getLuck();
	mLevel = copy.getLevel();
	mLifeEvent = copy.getLifeEvent();
}

int RandomLifeEvents::getLevel()
{
	return mLevel;
}

int RandomLifeEvents::getLuck()
{
	return mLuck;
}

bool RandomLifeEvents::getLifeEvent()
{
	return mLifeEvent;
}

void RandomLifeEvents::setLevel(int level)
{
	mLevel = level;
}

void RandomLifeEvents::setLuck(int luck)
{
	mLuck = luck;
}

void RandomLifeEvents::setLifeEvent(bool eventType)
{
	mLifeEvent = eventType;
}



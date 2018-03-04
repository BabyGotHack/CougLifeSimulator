#include "Random.h"
#pragma once

RandomLifeEvents::RandomLifeEvents()
{
	mLifeEvent = false;
}

RandomLifeEvents::~RandomLifeEvents()
{

}

RandomLifeEvents::RandomLifeEvents(RandomLifeEvents & copy)
{
	mLifeEvent = copy.getLifeEvent();
}

int RandomLifeEvents::randomLifeEventGenerator()
{
	int choice = 0;

	choice = rand() % 10 + 1;

	switch (choice)
	{
	case 1: cout << "Pop Quiz" << endl;
		return -3;
		break;
	case 2: cout << "Snow Storm" << endl;
		return -5;
		break;
	case 3: cout << "Party" << endl;
		return 3;
		break;
	case 4: cout << "Free Food" << endl;
		return 5;
		break;
	case 5: cout << "Hit by a Car" << endl;
		return -10;
		break;
	case 6: cout << "Hit by a School Vehicle" << endl;
		return 5;
		break;
	case 7: cout << "Made a friend" << endl;
		return 1;
		break;
	case 8: cout << "Breakup" << endl;
		return -5;
		break;
	case 9: cout << "Aces Test" << endl;
		return 5;
		break;
	case 10: cout << "Fails Test" << endl;
		return -5;
		break;
	}
}

int ChoiceGenerator()
{
	int choice = 0;

	choice = rand() % 5 + 1;

	switch (choice)
	{
	case 1: cout << "Go to Class 1. No and 2. Yes" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			return -3;
			break;
		case 2:
			return 3;
			break;
		default:
			return 0;
			break;
		}
		break;
	case 2: cout << "Do Homework 1. No and 2. Yes" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			return -3;
			break;
		case 2:
			return 3;
			break;
		default:
			return 0;
			break;
		}
		break;
	case 3: cout << "Go to the 1. Party or 2. Study" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			return 3;
			break;
		case 2:
			return -3;
			break;
		default:
			return 0;
			break;
		}
		break;
	case 4: cout << "1. Pizza or 2. Salad" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			return 1;
			break;
		case 2:
			return -1;
			break;
		default:
			return 0;
			break;
		}
		break;
	case 5: cout << "" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			return -3;
			break;
		case 2:
			return 3;
			break;
		default:
			return 0;
			break;
		}
		break;
	}
}



bool RandomLifeEvents::getLifeEvent()
{
	return mLifeEvent;
}

void RandomLifeEvents::setLifeEvent(bool eventType)
{
	mLifeEvent = eventType;
}




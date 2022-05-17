#include <iostream>
#include <list>
#include "Floor.h"
using namespace std;


//constructor
Floor::Floor(int call, int m)
{
    turn=0;
    angerLevel=0;
    currentFloor=1;
    targetFloor=0;

}
//deconstructor
Floor::~Floor()
{
	Floor.clear();
	
}
bool Floor::addPerson(Floor * human)
{
	const int targetFloor = human->targetFloor();
	
		
		if(turn)
		{
			if(targetFloor > currentFloor)
			{
				Floor.push_back(human);
				return 1;
			}
		}	
		else
		{
			if(targetFloor < currentFloor)
			{
				Floor.push_back(human);
				return 1;
			}
		}
	return 0;
}

bool Floor::removePeople()
{
	list<Floor*>::iterator killer;
	if(Floor.size() == 0)
	{ 	
		return 0;
	}
	else
	{
		for(killer=Floor.begin(); killer != Floor.end(); killer++)
		{
			if(currentFloor == (*killer)->targetFloor())
			{
				
				Floor.erase(killer);
				killer--;
			}
		}
	return 1;
	}
return 0;
}
void Floor::resetRequests() {

	while (!targetFloor.empty()) {

		targetFloor.pop();

	}

}
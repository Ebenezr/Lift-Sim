#include <iostream>
#include <list>
#include "Elevator.h"
using namespace std;


//constructor
Elevator::Elevator(int call, int m)
{
    turn=0;
    angerLevel=0;
    currentFloor=1;
    targetFloor=0;

}
//deconstructor
Elevator::~Elevator()
{
	Elevator.clear();
	
}
bool Elevator::addPerson(Elevator * human)
{
	const int targetFloor = human->targetFloor();
	
		
		if(turn)
		{
			if(targetFloor > currentFloor)
			{
				Elevator.push_back(human);
				return 1;
			}
		}	
		else
		{
			if(targetFloor < currentFloor)
			{
				Elevator.push_back(human);
				return 1;
			}
		}
	return 0;
}

bool Elevator::removePeople()
{
	list<Elevator*>::iterator killer;
	if(Elevator.size() == 0)
	{ 	
		return 0;
	}
	else
	{
		for(killer=Elevator.begin(); killer != Elevator.end(); killer++)
		{
			if(currentFloor == (*killer)->targetFloor())
			{
				
				Elevator.erase(killer);
				killer--;
			}
		}
	return 1;
	}
return 0;
}
void Elevator::resetRequests() {

	while (!targetFloor.empty()) {

		targetFloor.pop();

	}

}
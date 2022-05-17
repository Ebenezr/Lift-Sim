#include <iostream>
#include <list>
#include "Person.h"
using namespace std;


//constructor
Person::Person(int call, int m)
{
    turn=0;
    angerLevel=0;
    currentFloor=1;
    targetFloor=0;

}
//deconstructor
Person::~Person()
{
	person.clear();
	
}
bool Person::addPerson(Person * human)
{
	const int targetFloor = human ->targetFloor();
	
		
		if(turn)
		{
			if(targetFloor > currentFloor)
			{
				person.push_back(human);
				return 1;
			}
		}	
		else
		{
			if(targetFloor < currentFloor)
			{
				person.push_back(human);
				return 1;
			}
		}
	return 0;
}

bool Person::removePeople()
{
	list<Person*>::iterator killer;
	if(Person.size() == 0)
	{ 	
		return 0;
	}
	else
	{
		for(killer=person.begin(); killer != person.end(); killer++)
		{
			if(currentFloor == (*killer)->targetFloor())
			{
				
				person.erase(killer);
				killer--;
			}
		}
	return 1;
	}
return 0;
}
void Person::resetRequests() {

	while (!targetFloor.empty()) {

		targetFloor.pop();

	}

}
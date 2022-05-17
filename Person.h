#ifndef ELEVATOR_HPP
#define ELEVATOR_HPP
#include <iostream>
#include <list>

using namespace std;

class Person 
{
private:
	int turn;
    int angerLevel;
    int currentFloor;
    int targetFloor;
public:
	Person(int callsign, int max);
	~Person();

	list <Person*> person;
	bool addPerson(Person * human);
	bool removePeople();
    void resetRequests();
};
#endif
#ifndef ELEVATOR_HPP
#define ELEVATOR_HPP
#include <iostream>
#include <list>

using namespace std;

class Elevator 
{
private:
	int turn;
    int angerLevel;
    int currentFloor;
    int *targetFloor;
public:
	Elevator(int callsign, int max);
	~Elevator();

	list <Elevator*> person;
	bool addPerson(Elevator * human);
	bool removePeople();
    void resetRequests();
};
#endif
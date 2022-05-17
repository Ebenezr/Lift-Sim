#ifndef ELEVATOR_HPP
#define ELEVATOR_HPP
#include <iostream>
#include <list>

using namespace std;

class Floor 
{
private:
	int turn;
    int angerLevel;
    int currentFloor;
    int targetFloor;
public:
	Floor(int callsign, int max);
	~Floor();

	list <Floor*> Floor;
	bool addPerson(Floor * human);
	bool removePeople();
    void resetRequests();
};
#endif
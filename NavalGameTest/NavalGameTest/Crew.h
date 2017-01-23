//in Crew.h
#ifndef __CREW_H_INCLUDED__   // if CREW.h hasn't been included yet...
#define __CREW_H_INCLUDED__   //   #define this so the compiler knows it has been included

#include "Body.cpp";

class Crew
{
public:
	Body crew[16];
	Crew();

	void addToCrew();
	void removeFromCrew();

private:
	
};

#endif 
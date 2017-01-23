//in Ship.cpp

#include "Body.cpp";
#include <string>

using namespace std;

class Ship//Creates a ship object 
{
public:
	Ship(string name_)
	{
		name = name_;
	}

	//Getters
	string getName() { return name; }
	int getCannons() { return cannons; }
	int getCrewSize() { return crewSize; }

	//Setters
	void setName(string newName) { name = newName; }
	void setCannons(int num) { cannons = num; }
	void setCrewSize(int num) { crewSize = num; }
	//Body[] getCrew();

private:
	string name;
	int cannons;
	int crewSize;
};

class DreadNought : public Ship // Type of ship
{
public:
	DreadNought(string name_) : Ship(name_)
	{
		Ship::setCannons(160);
		Ship::setCrewSize(240);
	}
};

class Dingy : public Shiptype of ship
{
public:
	Dingy(string name_) : Ship(name_)
	{
		Ship::setCannons(0);
		Ship::setCrewSize(5);
	}
};
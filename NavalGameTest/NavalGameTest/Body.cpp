#include<string>
#include "DevilFruit.cpp"

using std::string;

class Body {
public:
	Body(string name_, int age_, int sex_) : name(name_), age(age_), sex(sex_)
	{}


private:
	string name;
	int age;
	int sex;
	DevilFruit fruit;
};
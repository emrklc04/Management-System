#pragma once
#include "Person.h"
#include <vector>
#include <ostream>

class Mitarbeiter: public Person
{
public:
	Mitarbeiter(int id, std::string name, double hourlyWage);
	void print() override;

private:
	std::vector<int> shiftIds;

};


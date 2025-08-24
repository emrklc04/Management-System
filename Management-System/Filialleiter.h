#pragma once
#include "Person.h"

class Filialleiter: public Person
{
public:
	Filialleiter(int id, std::string name, double hourlyWage, std::string region);
	void print() override;
	std::string getRegion() const;

private:
	std::string region;
};


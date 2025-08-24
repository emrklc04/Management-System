#pragma once
#include "TimeUtil.h"
#include <iostream>

class Person
{
public:
	Person(int id, std::string name, double hourlyWage);
	virtual void print() = 0;

	std::string getName() const;
	int getId() const;	
	double getHourlyWage() const;
	std::string getRole() const;


protected:
	int id;
	std::string name;
	double hourlyWage;
	std::string role;
};


#include "Person.h"

Person::Person(int id, std::string name, double hourlyWage)
	: id(id), name(name), hourlyWage(hourlyWage) {}


int Person::getId() const {
	return id;
}

std::string Person::getName() const {
	return name;
}

double Person::getHourlyWage() const {
	return hourlyWage;
}

std::string Person::getRole() const {
	return role;
}

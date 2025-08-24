#include "Mitarbeiter.h"

Mitarbeiter::Mitarbeiter(int id, std::string name, double hourlyWage)
	: Person(id, name, hourlyWage) {
	role = "Mitarbeiter";
}


void Mitarbeiter::print() {
	std::cout << "Name: " << getName() << ", role: " << getRole() << ", Id: " << getId() << ", hourly wage : " << getHourlyWage() << std::endl;	  
}

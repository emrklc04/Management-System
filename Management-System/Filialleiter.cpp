#include "Filialleiter.h"

Filialleiter::Filialleiter(int id, std::string name, double hourlyWage, std::string region)
	: Person(id, name, hourlyWage), region(region) {
	role = "Filialleiter";
}

std::string Filialleiter::getRegion() const {
	return region;
}

void Filialleiter::print() {
	std::cout << "Name: " << getName() << ", role: " << getRole() << ", Id: " << getId() << ", hourly wage : " << getHourlyWage() << ", region: " << getRegion() << std::endl;
}
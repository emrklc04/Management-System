#include "TimeUtil.h"
#include <sstream>
#include <iomanip>
#include <iostream>

Time parseHHMM(const std::string& s) {
	std::istringstream iss(s);
	int h, m;
	char sep;

	if (!(iss >> h >> sep >> m) || sep != ':' || h < 0 || h > 23 || m < 0 || m > 59) {
		throw std::invalid_argument("Uhrzeit-Format HH:MM ungültig: " + s);
	}

	return Time{ h, m };
}

Date parseDDMMYY(const std::string& d) {
	std::istringstream iss(d);
	int day, month, year;
	char sep;

	if (!(iss >> day >> sep >> month >> sep >> year) || sep != '.' || day < 0 || day > 31 || month < 0 || month > 12 || year > 2025) {
		throw std::invalid_argument("Datum-Format DD.MM.YY ungueltig: " + d);
	}

	return Date{ day, month, year };
}

int duration(const Period& p) {
	int startMin = p.start.toMinutes();
	int endMin = p.end.toMinutes();
	if (startMin >= endMin) {
		throw std::invalid_argument("Startzeit muss vor Endzeit liegen");
	}
	return endMin - startMin;
}

void printDate(Date day){
	std::cout << day.day << "." << day.month << "." << day.year;
}
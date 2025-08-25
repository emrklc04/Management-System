#pragma once
#include <string>
#include <stdexcept>

struct Time {
	int h{};
	int m{};
	int toMinutes() const { return h * 60 + m; }
};

struct Period {
	Time start;
	Time end;
};

struct Date {
	int day;
	int month;
	int year;
};

Time parseHHMM(const std::string& s); 
int duration(const Period& p);
Date parseDDMMYY(const std::string& d);

void printDate(Date day);
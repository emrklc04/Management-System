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

Time parseHHMM(const std::string& s); 
int duration(const Period& p);


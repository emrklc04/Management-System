#include "TimeUtil.h"
#include <sstream>
#include <iomanip>

Time parseHHMM(const std::string& s) {
	std::istringstream iss(s);
	int h, m;
	char sep;

	if (!(iss >> h >> sep >> m) || sep != ':' || h < 0 || h > 23 || m < 0 || m > 59) {
		throw std::invalid_argument("Uhrzeit-Format HH:MM ungültig: " + s);
	}

	return Time{ h, m };
}

int duration(const Period& p) {
	int startMin = p.start.toMinutes();
	int endMin = p.end.toMinutes();
	if (startMin >= endMin) {
		throw std::invalid_argument("Startzeit muss vor Endzeit liegen");
	}
	return endMin - startMin;
}


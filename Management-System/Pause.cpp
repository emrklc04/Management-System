#include "Pause.h"

Pause::Pause(Period& p) 
	: p(p) {}

int Pause::durationMinutes() const {
	int startMin = p.start.toMinutes();
	int endMin = p.end.toMinutes();
	if (startMin >= endMin) {
		throw std::invalid_argument("Startzeit muss vor Endzeit liegen");
	}
	return endMin - startMin;
}
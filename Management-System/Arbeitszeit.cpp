#include "Arbeitszeit.h"

Arbeitszeit::Arbeitszeit(Period& arbeitszeit)
	: arbeitszeit(arbeitszeit) {}

int Arbeitszeit::nettoMinutes() const {
	int pauseMinutes = 0;
	for (auto p : pausen) {
		pauseMinutes += p.durationMinutes();
	}
	return duration(arbeitszeit) - pauseMinutes;
}

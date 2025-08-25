#include "Arbeitszeit.h"

Arbeitszeit::Arbeitszeit(int id, Date day, int mitarbeiterId, Period& arbeitszeit)
	: id(id), day(day), mitarbeiterId(mitarbeiterId), arbeitszeit(arbeitszeit) {}

int Arbeitszeit::nettoMinutes() const {
	int pauseMinutes = 0;
	for (auto p : pausen) {
		pauseMinutes += p.durationMinutes();
	}
	return duration(arbeitszeit) - pauseMinutes;
}

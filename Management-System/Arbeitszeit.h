#pragma once
#include "TimeUtil.h"
#include <vector>
#include "Pause.h"

class Arbeitszeit
{
public:
	Arbeitszeit(Period& arbeitszeit);
	int nettoMinutes() const;

private:
	int id;
	int mitarbeiterId;
	Date day;
	Period arbeitszeit;
	std::vector<Pause> pausen;
};


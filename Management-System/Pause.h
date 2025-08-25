#pragma once
#include "TimeUtil.h"

class Pause
{
public:
	Pause(Period& p);
	int durationMinutes() const;

private:
	Period p;
};


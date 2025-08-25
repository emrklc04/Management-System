#pragma once
#include "Mitarbeiter.h"
#include "Filialleiter.h"

class Kassa
{
public:
	Kassa(int mitarbeiterId, Date day, double betrag, std::string notiz);
	void print() const;

private:
	int mitarbeiterId;
	Date day;
	double betrag;
	std::string notiz;
};


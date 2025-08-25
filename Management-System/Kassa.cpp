#include "Kassa.h"

Kassa::Kassa(int mitarbeiterId, Date day, double betrag, std::string notiz)
	: mitarbeiterId(mitarbeiterId), day(day), betrag(betrag), notiz(notiz) {}

void Kassa::print() const {
	std::cout << "MitarbeiterId: " << mitarbeiterId << ", day: ";
	printDate(day);
	std::cout << ", betrag: " << betrag << ", notiz : " << notiz << std::endl;
}

#include <iostream>
#include "TimeUtil.h"
#include "Mitarbeiter.h"
#include "Filialleiter.h";
#include "Pause.h"
#include "Arbeitszeit.h"
#include <iostream>

int main()
{
    try {
        Time t1 = parseHHMM("08:00");
        Time t2 = parseHHMM("09:00");
        Time t3 = parseHHMM("06:00");
        Time t4 = parseHHMM("14:00");

        Period p2{ t3, t4 };
        Period p{ t1, t2 };
        Pause pause(p);
        Arbeitszeit arbeitszeit(p2);
        std::cout << "Dauer: " << duration(p) << " Minuten\n";

        Mitarbeiter* hans = new Mitarbeiter(1, "hans zimmer", 1000);

        hans->print();

        Filialleiter* franz = new Filialleiter(2, "franz kafka", 2000, "Gaenserndorf");

        franz->print();

        std::cout << "Pause: " << pause.durationMinutes() << std::endl;
        std::cout << "Gesamtarbeitsminuten: " << arbeitszeit.nettoMinutes() << std::endl;

    }
    catch(const std::exception& e){
        std::cerr << "Fehler: " << e.what() << std::endl;
    }
}


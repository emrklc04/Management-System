#include <iostream>
#include "TimeUtil.h"
#include <iostream>

int main()
{
    try {
        Time t1 = parseHHMM("08:00");
        Time t2 = parseHHMM("09:00");

        Period p{ t1, t2 };
        std::cout << "Dauer: " << duration(p) << " Minuten\n";
    }
    catch(const std::exception& e){
        std::cerr << "Fehler: " << e.what() << std::endl;
    }
}


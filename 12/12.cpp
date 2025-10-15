#include <iostream>
#include <windows.h>

int main() 
{
    SetConsoleOutputCP(1251);
    
    //Задача 2

   /* int starthours, startminutes, startseconds;
    int endhours, endminutes, endseconds;

    std::cout << "Введите время начала поездки (часы минуты секунды): ";
    std::cin >> starthours >> startminutes >> startseconds;

    std::cout << "Введите время окончания поездки (часы минуты секунды): ";
    std::cin >> endhours >> endminutes >> endseconds;

    int start = starthours * 3600 + startminutes * 60 + startseconds;
    int end = endhours * 3600 + endminutes * 60 + endseconds;

    int duration = end - start;

    if (duration < 0) {
        std::cout << "\nВремя окончания не может быть раньше времени начала.";
        return 1;
    }

    int durationminutes = (duration + 59) / 60;

    int costminute = 2;
    int totalcost = durationminutes * costminute;

    std::cout << "\nДлительность поездки: " << durationminutes << " минут(ы).\n";
    std::cout << "\nОбщая стоимость: " << totalcost << " гривен.\n";
    */

    //Задача 3

     double distance, fuel100km;
     double benzene1, benzene2, benzene3;

     std::cout << "Введите расстояние поездки (км): ";
     std::cin >> distance;

     std::cout << "Введите расход бензина на 100 км: ";
     std::cin >> fuel100km;

     std::cout << "Введите стоимость первого вида бензина (гривен): ";
     std::cin >> benzene1;

     std::cout << "Введите стоимость второго вида бензина (гривен): ";
     std::cin >> benzene2;

     std::cout << "Введите стоимость третьего вида бензина (гривен): ";
     std::cin >> benzene3;

     double cost1 = (distance * fuel100km / 100) * benzene1;
     double cost2 = (distance * fuel100km / 100) * benzene2;
     double cost3 = (distance * fuel100km / 100) * benzene3;

     std::cout << "Стоимость для первого вида бензина: " << benzene1 << " руб.\n";
     std::cout << "Стоимость для второго вида бензина: " << benzene2 << " руб.\n";
     std::cout << "Стоимость для третьего вида бензина: " << benzene3 << " руб.\n";



    return 0;
}

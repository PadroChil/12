#include <iostream>
#include <windows.h>

int main() 
{
    SetConsoleOutputCP(1251);
    
    std::cout << "Задача 1\n";
     double rast, time, speed;
     while (true)
     {
         std::cout << "\nВведите растояние до аэропорта  ";
         std::cin >> rast;
         if (rast <= 0)
         {
             break;
         }

         std::cout << "\nВведите время за которое нужно добраться до аэропорта (в часах)  ";
         std::cin >> time;
         if (time == 0)
         {
             break;
         }
         speed = rast / time;


         std::cout << "\nСкорость с которой нужно ехать равна " << speed << "км/ч\n";
         if (true)
         {
             break;
         }
     }
         
     std::cout << "Задача 2\n";

    int starthours, startminutes, startseconds;
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
    

    std::cout << "Задача 3\n";

     float distance, fuel100km;
     float benzene1, benzene2, benzene3;

	 while (true)
	 {


		 std::cout << "Введите расстояние поездки (км): ";
		 std::cin >> distance;
         if (distance <= 0)
         {
             std::cout << "Ошибка!" << "\n";
             continue;
         }

		 std::cout << "Введите расход бензина на 100 км: ";
		 std::cin >> fuel100km;
         if (fuel100km <= 0)
         {
             std::cout << "Ошибка!" << "\n";
             continue;
         }

		 std::cout << "Введите стоимость первого вида бензина: ";
		 std::cin >> benzene1;

		 std::cout << "Введите стоимость второго вида бензина: ";
		 std::cin >> benzene2;

		 std::cout << "Введите стоимость третьего вида бензина: ";
		 std::cin >> benzene3;

		 float cost1 = (distance * fuel100km / 100) * benzene1;
		 float cost2 = (distance * fuel100km / 100) * benzene2;
		 float cost3 = (distance * fuel100km / 100) * benzene3;


         std::cout << "Стоимость 1 топлива на " << distance << " км: " << cost1 << "\n";
         std::cout << "Стоимость 2 топлива на " << distance << " км: " << cost2 << "\n";
         std::cout << "Стоимость 3 топлива на " << distance << " км: " << cost3 << "\n";
         break;
	 }


    return 0;
}



#include <iostream>
/*С начала суток прошло n секунд.Определить:
а) сколько полных часов прошло с начала суток;
б) сколько полных минут прошло с начала очередного часа;
в) сколько полных секунд прошло с начала очередной минуты.*/
//Перевод в целые часы
int Task2_6a(int timeSec) {
    return timeSec / 3600;
}

//Перевод сколько полных минут прошло с очередного часа
static int Task2_6b(int timeSec) {
    return (timeSec - Task2_6a(timeSec) * 3600) / 60;
}

//Сколько прошло с начало новой минуты в секундах
static int Task2_6c(int timeSec) {
    return timeSec - (timeSec / 60) * 60;
}
int main()
{
 
    std::cout << "Number of hours: " << Task2_6a(7200) << std::endl;
    std::cout << "Number of minutes: " << Task2_6b(3720) << std::endl;
    std::cout << "Number of seconds: " << Task2_6c(3602) << std::endl;
    return 0;
}

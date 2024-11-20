
#include <iostream>
#include <sstream>
/*
а) произведение всех целых чисел от 8 до 15; 
б) произведение всех целых чисел от a до 20 (значение a вводится с клавиату
ры; 1 <= a <= 20); 
в) произведение всех целых чисел от 1 до b (значение b вводится с клавиату
ры; 1 <= b <= 20); 
г) произведение всех целых чисел от a до b (значения a и b вводятся 
с клавиатуры; b >= a).
*/
int Task5_28a() {
    int result = 1;
    for (int i = 8;i <= 15; i++) {
        result *= i;
    }
    return result;
}
int Task5_28b() {
    std::cout << "Enter a: ";

    std::string aString = "";
    std::cin >> aString;
    int a = std::stoi(aString);
    if (a > 20 || a < 1) {
        return -1;
    }
    int result = 1;
    for (int i = a; i <= 20;i++)
    {
        result *= i;
    }
    return result;
}
int Task5_28c() {
    std::cout << "Enter b: ";
    std::string bString = "";
    std::cin >> bString;
    int b = std::stoi(bString);
    if (b > 20 || b < 1) {
        return -1;
    }
    int result = 1;
    for (int i = 1; i <= b;i++)
    {
        result *= i;
    }
    return result;

}
int main()
{
    int resultA = Task5_28a();
    std::cout <<"Result a: " << resultA << std::endl;
    int resultB = Task5_28b();
    std::cout << "Result b: " << resultB << std::endl;
    int resultC = Task5_28c();
    std::cout <<"Result c: " << resultC << std::endl;
    return 0;
}


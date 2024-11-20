
#include <iostream>
#include <sstream>
/*
 Даны цифры двух целых чисел: двузначного a2a1 a1,  и однозначного b, где a1 —число единиц, 
a2 — число десятков. Получить цифры числа, равного сумме 
заданных чисел (известно, что это число двузначное). Слагаемое — двузнач
ное число и число-результат не определять; условный оператор не использо
вать. */

static int Task2_34(int a2, int a1, int b) {
    int result1 = (a1 + b);
    int result2 = a2 + result1 / 10;
    std::cout << "Units num: " << result1%10 << std::endl;
    std::cout << "Dozen num: " << result2 << std::endl;

    return result2 * 10 + result1%10;

}
int main()
{
    std::string a2String, a1String, bString;
   
    std::cout << "Enter a2: ";
    std::cin >> a2String;
    int a2 = stoi(a2String);

    std::cout << "Enter a1: ";
    std::cin >> a1String;
    int a1 = stoi(a1String);
    
    std::cout << "Enter b: ";
    std::cin >> bString;
    int b = stoi(bString);

    int result = Task2_34(a2, a1, b);
    std::cout << result << "\n" << std::endl;
    return 0;
}




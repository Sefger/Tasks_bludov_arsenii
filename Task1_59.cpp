
//Составить программу обмена значениями двух переменных величин. 
#include <iostream>
static void Task1_59(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}
int main()
{
    int a = 10;
    int b = 16;
    std::cout <<"a = " << a << " " << "b = " << b << std::endl;
    Task1_59(a, b);
    std::cout << "a = " << a << " " << "b = " << b << std::endl;
    return 0;
}

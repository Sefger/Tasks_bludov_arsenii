#include <iostream>
#include <stdexcept>
#include <sstream>
/*
    Вычислить сумму 1 + 1/2 + 1/3 + 1/4 ... 1/n .*/
double Task5_32(int n) {
    double result = 1;
    for (double i = 2;i <= n; i++) {
        result += 1 / i;

    }
    return result;
}
//я не понял как сделать ввод из теминала 
int main(int argc, char* argv)
{
    int n = argv[1];
    double result = Task5_32(n);
    std::cout << "Result is: " << result <<std::endl;
    return 0;
}

// Вычислить сумму от 1 + 1/2 + 1/3 + ...1/n
#include <iostream>
#include <stdexcept>
#include <sstream>
static double Task5_32(int n) {
    double result = 1;
    for (double i = 2;i <= n; i++) {
        result += 1 / i;

    }
    return result;
}

int main(int argc, char* argv[])
{
   /* for (int i = 0; i < argc; i++) {
        std::cout << i << " = " << argv[i]<<std::endl;
    }*/
    int n = std::stoi(argv[1]);
    
    
    double result = Task5_32(n);
    std::cout << "Result is: " << result <<std::endl;
   
    return 0;
}

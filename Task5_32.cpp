#include <iostream>

double Task5_32(int n) {
    double result = 1;
    for (double i = 2;i <= n; i++) {
        result += 1 / i;

    }
    return result;
}
int main()
{
    int n = 5000;
    double result = Task5_32(n);
    std::cout << "Result is: " << result <<std::endl;
    return 0;
}


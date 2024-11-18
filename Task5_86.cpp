

#include <iostream>
static int Task5_86(int n) {
    int result = 1;
    int lastValue = 1;
    for (int i = 2; i <= n; i++) {
        lastValue += 2;
        result += lastValue;


    }
    return result;
    
}
int main()
{
    int n = 327;
    int result = Task5_86(n);
    std::cout << "Result is: " << result << std::endl;
    return 0;
}


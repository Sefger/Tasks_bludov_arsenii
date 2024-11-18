

#include <iostream>

static int Task2_34(int a2, int a1, int b) {
    int result1 = (a1 + b);
    int result2 = a2 + result1 / 10;
    std::cout << "Units num: " << result1%10 << std::endl;
    std::cout << "Dozen num: " << result2 << std::endl;

    return result2 * 10 + result1%10;

}
int main()
{
    int result = Task2_34(9, 9, 9);
    std::cout << result << "\n" << std::endl;
    
}


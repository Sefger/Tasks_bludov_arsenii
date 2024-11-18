

#include <iostream>
static double f(double x) {
    if (-2.4 < x && x < 5.7) {
        return x * x;
    }
    return 4;
}
int main()
{
    double x = -2.4;

    std::cout << "x = "<<x<<" \ty = " << f(x);
}




#include <iostream>
#include <vector>;
static std::vector<double> Task4_13(double a, double b, double c) {
    
    double D = (b * b - 4 * a * c);

    std::vector<double> result = {};
    if (D < 0) {

        return result;
    }
    double Dsqr = sqrt(D);
    result.push_back((-b - Dsqr) / 2 * a);
    result.push_back((-b + Dsqr) / 2 * a);
    return result;


}
int main()
{
    double a = 1;
    double b = -5;
    double c = 6;
    std::vector<double> result = Task4_13(a, b, c);
    std::cout << "The root of equation: ";
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}


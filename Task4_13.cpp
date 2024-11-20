
/*
Даны вещественные числа a, b, c (a != 0). Выяснить, имеет ли уравнение 
вещественные корни.
 */


#include <iostream>
#include <sstream>
#include <vector>;
static std::vector<double> Task4_13(double a, double b, double c) {
    
    double D = (b * b - 4 * a * c);

    std::vector<double> result = {};
    if (D < 0  || a==0) {

        return result;
    }
    double Dsqr = sqrt(D);
    result.push_back((-b - Dsqr) / 2 * a);
    result.push_back((-b + Dsqr) / 2 * a);
    return result;


}
int main()
{
    std::string aString, bString, cString;
    std::cout << "Enter a: ";
    std::cin >> aString;
    double a = stoi(aString);


    std::cout << "Enter b: ";
    std::cin >> bString;
    double b = stoi(bString);


    std::cout << "Enter c: ";
    std::cin >> cString;
    double c = stoi(cString);

    std::vector<double> result = Task4_13(a, b, c);
    if (result.size() == 0) {
        std::cout << "Not equation."<<std::endl;
    }
    else {
        std::cout << "The root of equation: ";
        for (int i = 0; i < result.size(); i++) {
            std::cout << result[i] << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}



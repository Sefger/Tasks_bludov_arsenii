

#include <iostream>
/*
Даны вещественные положительные числа a, b, c. Если существует тре
угольник со сторонами a, b, c, то: 
а) определить его вид (прямоугольный, остроугольный или тупоугольный); 
б) определить его вид (прямоугольный, остроугольный или тупоугольный)  
и особенности (равносторонний, равнобедренный, разносторонний). 
    */
//Передаём в функции отсортированные стороны
//Прямоугольный
static double EPS = 1e-10;
static void swap(double *a, double  *b) {
    double t = *a;
    *a = *b;
    *b = t;

}

static bool isRightTriangle(double a, double b, double c) {
    return (c * c - (a * a + b * b) > -EPS && c * c - (a * a + b * b) < EPS);

}
//Остроугольный
static bool isAcute(double a, double b, double c) {
    return c * c - (a * a + b * b) < EPS;
}
//Тупоугольный
static bool isObtuse(double a, double b, double c) {
    return c * c - (a * a + b * b) > EPS;
}

static std::string Task4_124(double a, double  b, double c) {
    double t;
    
    if (c >= a + b) {
        std::cout << "The triangle doesn't exist" << std::endl;
    }


    else {
        std::string result = "";
        if (isObtuse(a, b, c)) {
            result.append("Obtuse triangle");
        }
        else if (isRightTriangle(a, b, c)) {
            result.append("Rigth triangle");
        }
        else if (isAcute(a, b, c)) {
            result.append("Acute triangle");
        }
        

        if (a == b && b == c) {
            result.append(", equilateral ");
        }
        else if (a == b || b == c || a == c) {
            result.append(", isosceles");
        }
        else {
            result.append(", versatile");
        }
        return result;
    }
    return "";
}

int main()
{
    double a = 2 * sqrt(2);
    double b = 2;
    double c = 2;

    if (b > c) {
        swap(&b, &c);
    }

    if (a > c) {
        swap(&a, &c);
    }

    if (a > b) {
        swap(&a, &b);
    }
    std::cout << a<<std::endl;

    std::cout << Task4_124(a, b, c) << std::endl;
    std::cout << "Hello World!\n";
}


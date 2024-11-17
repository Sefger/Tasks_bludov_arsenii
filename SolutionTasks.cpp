
#include <iostream>
#include <sstream>
#include <vector>

double static EPS = 1E-10;
static void Task1_59 (int &a, int &b) {
    std::cout << "a = " << a << " b = " << b << std::endl;

    int t = a;
    a = b;
    b = t;

    std::cout << "a = " << a << " b = " << b << std::endl;

}
//Перевод в целые часы
int Task2_6a(int timeSec) {
    return timeSec / 3600;
}

//Перевод сколько полных минут прошло с очередного часа
static int Task2_6b(int timeSec) {
    return (timeSec - Task2_6a(timeSec) * 3600) / 60;
}

//Сколько прошло с начало новой минуты в секундах
static int Task2_6c(int timeSec) {
    return timeSec - (timeSec / 60) * 60;
}

static int Task2_34(int a2, int a1, int b) {
    int result1 = a1 + b;
    int result2 = a2 + result1 / 10;
    std::cout << "Units num: " << result1 << std::endl;
    std::cout << "Dozen num: " << result2 << std::endl;

    return result2 * 10 + result1%10;

}
/*
Вычислить значение логического выражения при следующих значениях
логических величин А, В и С : А = Истина, В = Ложь, С = Ложь :
    а) А или не(А и В) или С;
    б) не А или А и(В или С);
    в) (А или В и не С) и С.
*/

static bool Task3_7a() {
    bool A = true;
    bool B = false;
    bool C = false;
    return A || !(A && B) || C;
}

static bool Task3_7b() {
    bool A = true;
    bool B = false;
    bool C = false;
    return !A || A && (B||C);
}

static bool Task3_7c() {
    bool A = true;
    bool B = false;
    bool C = false;
    return (A || B && !C) && C;
}
static std::vector<double> Task4_13(double a, double b, double c) {
    double D = (b * b - 4 * a * c);
    std::vector<double> result = {};
    if (D < 0){
        
        return result;
    }  
    double Dsqr = sqrt(D);
    result.push_back(( - b + Dsqr)/2*a);
    result.push_back((-b - Dsqr) / 2 * a);
    return result;


}
//Task 4_40
static double f(double x) {
    if (-2.4 < x && x < 5.7) {
        return x * x;
    }
    return 4;
}
//Передаём в функции отсортированные стороны
//Прямоугольный
static bool isRightTriangle(double a, double b, double c) {
    return (c * c - (a * a + b * b) > -EPS && c * c - ( a * a + b * b)<EPS);

}
//Остроугольный
static bool isAcute(double a, double b, double c) {
    return c * c - (a * a + b * b)<EPS;
}
//Тупоугольный
static bool isObtuse(double a, double b, double c) {
    return c * c - (a * a + b * b)>EPS;
}

static std::string Task4_124(double a, double  b, double c) {
    double t;
    if (a > b) {
        t = b;
        b = a;
        a = t;
    }
    std::cout << a << " " << b << " " << c<<std::endl;
    if (a > c) {
        t = c;
        a = c;
        c = t;
    }
    std::cout << a << " " << b << " " << c<<std::endl;
    if (b > c) {
        t = c;
        c = b;
        b = t;
    }
    std::cout << a << " " << b << " " << c<<std::endl;
    if (c > a + b) {
        std::cout << "The triangle doesn't exist" << std::endl;
    }
    

    else {
        std::string result = "";
        if (isObtuse(a, b, c)) {
            result.append("Obtuse triangle");
        }
        else if (isAcute(a, b, c)) {
            result.append ("Acute triangle");
        }
        else if (isRightTriangle(a, b, c)) {
            result.append("Rigth triangle");
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
int Task5_28a() {
    int result = 1;
    for (int i = 2;i <= 15; i++) {
        result *= i;
    }
    return result;
}
int Task5_28b() {
    std::cout << "Enter a: ";
   
    std::string aString = "";
    std::cin >> aString;
    int a = std::stoi(aString);
    if (a > 20 || a < 1) {
        return -1;
    }
    int result = 1;
    for (int i = a; i <= 20;i++)
    {
        result *= i;
    }
    return result;
}
int Task5_28c() {
    std::cout << "Enter b: ";
    std::string bString = "";
    std::cin >> bString;
    int b = std::stoi(bString);
    if (b > 20 || b < 1) {
        return -1;
    }
    int result = 1;
    for (int i = 1; i <= b;i++)
    {
        result *= i;
    }
    return result;
    
}
double Task5_32(int n) {
    double result = 1;
    for (double i = 2;i <= n; i++) {
        result += 1 / i;

    }
    return result;
}
void Task5_86(int n) {
    int result = 1;
    int lastValue=1;
    for (int i = 2; i <= n; i++) {
        lastValue += 2;
        result += lastValue;


    }
    std::cout << "Result is: " << result << std::endl;
}
//







int main()
{
   /* int a = 56;
    int b = 18;
    Task1_59(a, b);
    std::cout << "" << a << " " << b <<std::endl;
    std::cout << "Task 2.6\n" << std::endl;
    std::cout << "Number of hours: " << Task2_6a(7200) << std::endl;
    std::cout << "Number of minutes: " << Task2_6b(3662) << std::endl;
    std::cout << "Number of seconds: "<< Task2_6c(3602) <<"\n" << std::endl;

    std::cout << "Task 2.34\n" << std::endl;

    std::cout << Task2_34(2, 5, 5)<<"\n"<<std::endl;
    std::cout << "Task3.7\n" << std::endl;
    std::cout << Task3_7a() << std::endl;
    std::cout << Task3_7b() << std::endl;
    std::cout << Task3_7c() << "\n" << std::endl;
    std::cout << "Task4_13\n" <<  std::endl;
    std::vector<double> result = Task4_13(1, 4, 3);
    if (result.size() == 0) {
        std::cout << "The equation hasn't solution"<<std::endl;

    }
    else {
        std::cout << "Solution is: " <<result[0]<<", " << result[1] << std::endl;
    }*/
  /*  double a = 4;
    double b = 3;
    double c = 5;
    std::cout << Task4_124(a, b, c ) << std::endl;*/
    int n = 10;
    Task5_86(10);

    return 0;
}


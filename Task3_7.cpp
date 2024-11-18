

#include <iostream>

/*
Вычислить значение логического выражения при следующих значениях
логических величин А, В и С : А = Истина, В = Ложь, С = Ложь :
    а) А или не(А и В) или С;
    б) не А или А и(В или С);
    в) (А или В и не С) и С.
*/

static bool Task3_7a(bool A, bool B, bool C) {
    
    return A || !(A && B) || C;
}

static bool Task3_7b(bool A, bool B, bool C) {
   
    return !A || A && (B || C);
}

static bool Task3_7c(bool A, bool B, bool C) {
   
    return (A || B && !C) && C;
}
int main()
{
    bool A = true;
    bool B = false;
    bool C = false;

    bool rA = Task3_7a(A, B, C);
    bool rB = Task3_7b(A, B, C);
    bool rC = Task3_7c(A, B, C);

    std::cout << "Task 3_7a: " << rA << std::endl;
    std::cout << "Task 3_7b: " << rB << std::endl;
    std::cout << "Task 3_7c: " << rC << std::endl;
}


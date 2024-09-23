#include <iostream>
#include <string>
#define _USE_MATH_DEFINES
#include <cmath>
/*
programm 2.1
k = k
omega = w
T = T
fi = fi 
a = A
*/


int main(){
    setlocale(LC_ALL, "Russian");
    int k, omega, a;
    std::cout << "введите значение k:\n";
    std::cin >> k;
    std::cout << "введите значение w(omega):\n";
    std::cin >> omega;
    std::cout << "введите значение A:\n";
    std::cin >> a;
    double fi = asin(1/k);
    double T = (M_PI/2 - fi)/omega;
    std::cout << "T = " << T << "\n";
    std::cout << "x(T) = " << a; //при t = T sin = 1 => x(T) = A
    return 0;
}

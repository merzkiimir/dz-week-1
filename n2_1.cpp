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
*/


int main(){
    setlocale(LC_ALL, "Russian");
    int k, omega;
    std::cout << "введите значение k:\n";
    std::cin >> k;
    std::cout << "введите значение w(omega):\n";
    std::cin >> omega;
    double fi = asin(1/k);
    double T = (M_PI/2 - fi)/omega;
    std::cout << "T = " << T;
    return 0;
}

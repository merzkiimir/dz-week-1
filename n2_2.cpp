#include <iostream>
#include <string>
#define _USE_MATH_DEFINES
#include <cmath>
/* programm 2.3
H = высота
V = скорость
g = const
a_g = угол в градусах
a = угол в радианах
x1 = дальность полета
T = время полета

*/


int main(){
    setlocale(LC_ALL, "Russian");
    int H, V, a_g;
    float g = 9.8;
    std::cout << "введите значение H(высота):\n";
    std::cin >> H;
    std::cout << "введите значение V(скорость):\n";
    std::cin >> V;
    std::cout << "введите значение a(угол):\n";
    std::cin >> a_g;
    double a = a_g * M_PI / 180;
    double T = ((V * sin(a))/g)*(1 + sqrt(1 + ((2 * g * H)/(pow(V, 2)*pow(sin(a), 2)))));
    std::cout << "время полета T = " << T << "\n";
    float x1 = V * T * cos(a);
    std::cout << "x(T) = " << x1 << "\n";
    std::cout << "введите значение t(момент времени):\n";
    float t;
    std::cin >> t;
    float x2 = V * t * cos(a);
    float y2 = H + (V * t * sin(a)) - 0.5 * g * pow(t, 2);
    std::cout << "x(t) = " << x2 << " , y(t) = " << y2 << " или расстояние y(t) ~ " << abs(y2 - H);
    return 0;
}

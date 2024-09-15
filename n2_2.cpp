#include <iostream>
#include <string>
#define _USE_MATH_DEFINES
#include <cmath>
/* programm 2.3
H = visota
V = skorost'
g = const
a_g = ugol v gradusah
a = ugol v radianah
x1 = dal'nost' poleta
T = vremya poleta

*/


int main(){
    int H, V, a_g;
    float g = 9.8;
    std::cout << "Vvedite znachenie H(visota):\n";
    std::cin >> H;
    std::cout << "Vvedite znachenie V(skorost'):\n";
    std::cin >> V;
    std::cout << "Vvedite znachenie a(angle):\n";
    std::cin >> a_g;
    double a = a_g * M_PI / 180;
    double T = ((V * sin(a))/g)*(1 + sqrt(1 + ((2 * g * H)/(pow(V, 2)*pow(sin(a), 2)))));
    std::cout << "Vremya poleta T = " << T << "\n";
    float x1 = V * T * cos(a);
    std::cout << "x(T) = " << x1 << "\n";
    std::cout << "Vvedite znachenie t(moment vremeni):\n";
    float t;
    std::cin >> t;
    float x2 = V * t * cos(a);
    float y2 = H + (V * t * sin(a)) - 0.5 * g * pow(t, 2);
    std::cout << "x(t) = " << x2 << " , y(t) = " << y2 << " or rasstoyanie y(t) ~ " << abs(y2 - H);
    return 0;
}

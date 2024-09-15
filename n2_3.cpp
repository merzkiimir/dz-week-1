#include <iostream>
#include <string>
#include <cmath>
/*
fx; gx - functions
*/

int main(){
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите значение x:\n";
    float x;
    std::cin >> x;
    float gx;
    if ((x < -1) and (x > -4)){
        gx = (abs(x + 6) / (abs(x + 3) - 3));
    } else if ((x > -1) and (x < 5)){
        gx = sqrt(5-x) - 2;
    } else if (x >= 5){
        gx = log10(x + 10) - 2;
    } else {
        std::cout << "значение x вне домена\n";
        return 0;
    }
    float fx;
    if (gx < -2){
        fx = abs(gx/(1-gx));
    } else if ((gx >= -2) and (gx <= 1)){
        fx = pow((gx+2), 2);
    } else {
        std::cout << "значение g(x) вне домена\n";
        return 0;
    }
    std::cout << "значение f(x): " << fx;
    return 0;
}

#include <iostream>
#include <string>
#include <cmath>
/*
fx; gx - functions
*/

int main(){
    std::cout << "Vedute znachenie x:\n";
    int x;
    std::cin >> x;
    float gx;
    if (-4 < x < -1){
        gx = (abs(x + 6) / (abs(x + 3) - 3));
    } else if (-1 < x < 5){
        gx = sqrt(5-x) - 2;
    } else if (x >= 5){
        gx = log10(x + 10) - 2;
    } else {
        std::cout << "znachenie x vne domena\n";
        return 0;
    }
    float fx;
    if (x < -2){
        fx = abs(x/(1-x));
    } else if (-2 <= x <= 1){
        fx = pow((x+2), 2);
    } else {
        std::cout << "znachenie g(x) vne domena\n";
        return 0;
    }
    std::cout << "znachenie f(x): " << fx;
    return 0;
}

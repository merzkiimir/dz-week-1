#include <iostream>
#include <string>
#include <cmath>
/*
fx; gx - functions
*/

int main(){
    std::cout << "Vvedute znachenie x:\n";
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
        std::cout << "znachenie x vne domena\n";
        return 0;
    }
    float fx;
    if (gx < -2){
        fx = abs(gx/(1-gx));
    } else if ((gx >= -2) and (gx <= 1)){
        fx = pow((gx+2), 2);
    } else {
        std::cout << "znachenie g(x) vne domena\n";
        return 0;
    }
    std::cout << "znachenie f(x): " << fx;
    return 0;
}

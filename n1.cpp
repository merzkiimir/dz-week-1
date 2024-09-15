#include <iostream>
#include <string>
#include <cmath>
/* programm 1
a - сумма
b - кол-во квадратных метров с крышей || материал (flag)
c - кол-во квадратных метров без крыши || наличие воды и канализации (flag)
d - кол-во квадратных метров сада || кол-во этажей
(cyrillic ne rabotaet)
*/

int main() {
    setlocale(LC_ALL, "Russian");
    int b, c, d;
    std::cout << "кол-во квадратных метров с крышей:\n";
    std::cin >> b;
    std::cout << "кол-во квадратных метров без крыши:\n";
    std::cin >> c;
    std::cout << "кол-во квадратных метров сада\n";
    std::cin >> d;
    
    int a = b * 5000 + c * 3000 + d * 1000;
    std::cout << "материал:\n";
    std::cout << "  1 - высококачественный материал\n";
    std::cout << "  2 - саман\n";
    std::cout << "  3 - другой материал\n";
    std::cin >> b;
    if (b == 1){
        a = a * 1.15;
    } else if (b == 2) {
        a = a * 1.1;
    } else {
        a = a * 1.05;
    }
    std::cout << "наличие воды и канализации\n";
    std::cout << "  1 - дa\n";
    std::cout << "  2 - нет\n";
    std::cin >> c;
    if (c == 1) {
        a = a + 2500;
    }
    std::cout << "кол-во этажей:\n";
    std::cin >> d;
    if (b >= 4){
        a = a * 1.2;
    } else if (b == 4 or b ==3) {
        a = a * 1.15;
    } else if (b == 2){
        a = a * 1.1;
    }
    std::cout << a;
    return 0;

}

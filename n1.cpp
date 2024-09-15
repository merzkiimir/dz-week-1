#include <iostream>
#include <string>
#include <cmath>
/* programm 1
a - summ
b - Kol-vo kvadratnih metrov s krishoy || MATERIAL (flag)
c - Kol-vo kvadratnih metrov bez krishi || Nalichie vodi i kanalizacii (flag)
d - kol-vo metrov sada || kol-vo etazhey
(cyrillic ne rabotaet)
*/

int main() {
    int b, c, d;
    std::cout << "Kol-vo kvadratnih metrov s krishoy:\n";
    std::cin >> b;
    std::cout << "Kol-vo kvadratnih metrov bez krishi:\n";
    std::cin >> c;
    std::cout << "kol-vo metrov sada\n";
    std::cin >> d;
    
    int a = b * 5000 + c * 3000 + d * 1000;
    std::cout << "MATERIAL:\n";
    std::cout << "  1 - visokokachestvennyy material\n";
    std::cout << "  2 - saman\n";
    std::cout << "  3 - drugoy material\n";
    std::cin >> b;
    if (b == 1){
        a = a * 1.15;
    } else if (b == 2) {
        a = a * 1.1;
    } else {
        a = a * 1.05;
    }
    std::cout << "Nalichie vodi i kanalizacii\n";
    std::cout << "  1 - da\n";
    std::cout << "  2 - net\n";
    std::cin >> c;
    if (c == 1) {
        a = a + 2500;
    }
    std::cout << "kol-vo etazhey:\n";
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

#include <iostream>
#include <string>
#include <cmath>
/*
cn = pervonachal'naya cena
cn1 = cena posle skidki
cn2 = cena posle platezhey
n = kol-vo vznosov
i = %stavka

*/


int main(){
    int klient, cn, cn1, tovar;
    std::cout << "Stoimost' tovara:\n";
    std::cin >> cn;
    std::cout << "Kachestvo tovara:\n";
    std::cout << "  1 - A\n";
    std::cout << "  2 - B\n";
    std::cout << "  3 - C\n";
    std::cin >> tovar;
    std::cout << "Kachestvo klienta:\n";
    std::cout << "  1 - otlichno\n";
    std::cout << "  2 - horosho\n";
    std::cout << "  3 - sredne\n";
    std::cout << "  4 - ploho\n";
    std::cin >> klient;
    if (klient == 1 and tovar == 1){
        cn1 = cn * 0.6;    
    } else if((klient == 1 and tovar == 2) or (klient == 2 and tovar == 1)){
        cn1 = cn * 0.7;
    } else if((klient == 1 and tovar == 3) or (klient == 2 and tovar == 2) or (klient == 3 and tovar == 1)){
        cn1 = cn * 0.8;
    } else if((klient == 2 and tovar == 3) or (klient == 3 and tovar == 2)){
        cn1 = cn * 0.9;
    } else if((klient == 4 and tovar == 1) or (klient == 3 and tovar == 3)){
        cn1 = cn;
    }else if(klient == 4 and tovar == 2){
        cn1 = cn * 1.05;
    }else{
        cn1 = cn * 1.1;
    }
    std::string tip;
    switch (klient){
        int opl;
        int n, i;
        int cn2;
        case 1 or 2:
            std::cout << "sposob oplaty:\n";
            std::cout << "  1 - nalichnye\n";
            std::cout << "  2 - chek\n";
            std::cout << "  3 - kredit\n";
            std::cin >> opl;
            if (opl == 1){
                cn2 = cn1;
            } else if (opl == 2){
                std::cout << "Vvedite kolichestvo vznosov i procentnyu stavky (ot 3% do 15%)\n";
                std::cin >> n >> i;
                cn2 = cn1 * (1 + (n * i)/100);
            } else if (opl == 3){
                std::cout << "Vvedite kolichestvo platezhey\n";
                std::cin >> n;
                std::cout << "Vvedite tip\n";
                std::cin >> tip;
                if (tip == "platina"){
                    int i = 5;
                    cn2 = cn1 * pow((1 + i/100),n);
                } else if (tip == "biznes"){
                    int i = 2;
                    cn2 = cn1 * pow((1 + i/100),n);
                }
            }
            std::cout << "K oplate: " << cn2;        
        break;
        case 3:
            std::cout << "sposob oplaty:\n";
            std::cout << "  1 - nalichnye\n";
            std::cout << "  2 - chek\n";
            if (opl == 1){
                cn2 = cn1;
            } else if (opl == 2){
                std::cout << "Vvedite kolichestvo vznosov i procentnyu stavky (ot 3% do 15%)\n";
                std::cin >> n >> i;
                cn2 = cn1 * (1 + (n * i)/100);
            }
            std::cout << "K oplate: " << cn2;    
        break;            
        default:
            std::cout << "K oplate: " << cn1;
        break;
    }
}

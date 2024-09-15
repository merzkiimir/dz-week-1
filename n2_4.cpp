#include <iostream>
#include <string>
#include <cmath>
/*
cn = первоначальная цена
cn1 = цена после скидки
cn2 = цена после платежей
n = кол-во взносов
i = %ставка

*/


int main(){
    setlocale(LC_ALL, "Russian");
    int klient, cn, cn1, tovar;
    std::cout << "Стоимсоть товара:\n";
    std::cin >> cn;
    std::cout << "Качество товара:\n";
    std::cout << "  1 - A\n";
    std::cout << "  2 - B\n";
    std::cout << "  3 - C\n";
    std::cin >> tovar;
    std::cout << "Качество клиента:\n";
    std::cout << "  1 - отлично\n";
    std::cout << "  2 - хорошо\n";
    std::cout << "  3 - средне\n";
    std::cout << "  4 - плохо\n";
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
            std::cout << "Способ оплаты:\n";
            std::cout << "  1 - наличные\n";
            std::cout << "  2 - банковский чек\n";
            std::cout << "  3 - кредит\n";
            std::cin >> opl;
            if (opl == 1){
                cn2 = cn1;
            } else if (opl == 2){
                std::cout << "Введите количество взносов и процентную ставку (от 3% до 15%)\n";
                std::cin >> n >> i;
                cn2 = cn1 * (1 + (n * i)/100);
            } else if (opl == 3){
                std::cout << "введите количество платежей\n";
                std::cin >> n;
                std::cout << "введите тип\n";
                std::cin >> tip;
                if (tip == "платина"){
                    int i = 5;
                    cn2 = cn1 * pow((1 + i/100),n);
                } else if (tip == "бизнес"){
                    int i = 2;
                    cn2 = cn1 * pow((1 + i/100),n);
                }
            }
            std::cout << "к оплате: " << cn2;        
        break;
        case 3:
            std::cout << "Способ оплаты:\n";
            std::cout << "  1 - наличные\n";
            std::cout << "  2 - банковский чек\n";
            if (opl == 1){
                cn2 = cn1;
            } else if (opl == 2){
                std::cout << "Введите количество взносов и процентную ставку (от 3% до 15%)\n";
                std::cin >> n >> i;
                cn2 = cn1 * (1 + (n * i)/100);
            }
            std::cout << "к оплате: " << cn2;    
        break;            
        default:
            std::cout << "к оплате: " << cn1;
        break;
    }
}

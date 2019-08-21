#pragma once
#include<string>
using namespace std;

#include"Product.h"

class ProductList{
private:
    Americano americano;
    CaffeLatte caffelatte;
    CaffeMocha caffemocha;
    BlackTea blacktea;
    GreenTea greentea;
    StrawberryAde strawberryade;
    LemonAde lemonade;
    StrawberrySmoothie strawberrysmoothie;
    ChocoSmoothie chocosmoothie;
public:
    int getAmericanoPrice() const;
    int getCaffeLattePrice() const;
    int getCaffeMochaPrice() const;
    int getBlackTeaPrice() const;
    int getGreenTeaPrice() const;
    int getStrawberryAdePrice() const;
    int getLemonadePrice() const;
    int getStrawberrysmoothiePrice() const;
    int getChocosmoothiePrice() const;
    
//    void setAmericanoPrice(int price);
//    void setCaffeLattePrice(int price);
//    void setCafeMochaPrice(int price);
//    void setBlackTeaPrice(int price);
//    void setGreenTeaPrice(int price);
//    void setStrawberryAdePrice(int price);
//    void setLemonAdePrice(int price);
//    void setStrawberrySmoothiePrice(int price);
//    void setChocoSmoothiePrice(int price);

    
};

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
    int Product::getAmericanoPrice() const{
        return this->americano.getPrice();
    }
    int Product::getCaffeLattePrice() const{
        return this->cafelatte.getPrice();
    }   
    int Product::getCaffeMochaPrice() const{
        return this->cafemocha.getPrice();
    }
    int Product::getBlackTeaPrice() const{
        return this->blacktea.getPrice();
    }
    int Product::getGreenTeaPrice() const{
        return this->greentea.getPrice();
    }
    int Product::getStrawberryAdePrice() const{
        return this->strawberryade.getPrice();
    }
    int Product::getLemonadePrice() const{
        return this->lemonade.getPrice();
    }
    int Product::getStrawberrysmoothiePrice() const{
        return this->strawberrysmoothie.getPrice();
    }
    int Product::getChocosmoothiePrice() const{
        return this->chocosmoothie.getPrice();
    }
    
//     void setAmericanoPrice(int price) {
//         this->price = price;
//     }
//     void setCaffeLattePrice(int price) {
//         this->price = price;
//     }
//     void setCafeMochaPrice(int price) {
//         this->price = price;
//     }
//     void setBlackTeaPrice(int price) {
//         this->price = price;
//     }
//     void setGreenTeaPrice(int price) {
//         this->price = price;
//     }
//     void setStrawberryAdePrice(int price) {
//         this->price = price;
//     }
//     void setLemonAdePrice(int price) {
//         this->price = price;
//     }
//     void setStrawberrySmoothiePrice(int price) {
//         this->price = price;
//     }
//     void setChocoSmoothiePrice(int price) {
//         this->price = price;
//     }

};

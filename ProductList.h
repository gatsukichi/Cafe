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
    int getAmericanoPrice() const{
        return this->americano.getAmericanoPrice();
    }
    int getCaffeLattePrice() const{
        return this->caffelatte.getCaffeLattePrice();
    }   
    int getCaffeMochaPrice() const{
		return this->caffemocha.getCaffeMochaPrice();
    }
    int getBlackTeaPrice() const{
		return this->blacktea.getBlackTeaPrice();
    }
    int getGreenTeaPrice() const{
		return this->greentea.getGreenTeaPrice();
    }
    int getStrawberryAdePrice() const{
		return this->strawberryade.getStrawberrtAdePrice();
    }
    int getLemonadePrice() const{
		return this->lemonade.getLemonAdePrice();
    }
    int getStrawberrysmoothiePrice() const{
		return this->strawberrysmoothie.getStrawberrySmoothiePrice();
    }
    int getChocosmoothiePrice() const{
		return this->chocosmoothie.getChocoSmoothiePrice();
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

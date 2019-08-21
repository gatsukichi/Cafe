#pragma once
#include<string>
using namespace std;

#include"Product.h"

class Product{
private:
    Americano americano;
    CaffeLatte cafelatte;
    CaffeMocha cafemocha;
    BlackTea blacktea;
    GreenTea greentea;
    StrawberryAde strawberryade;
    LemonAde lemonade;
    StrawberrySmoothie strawberrysmoothie;
    ChocoSmoothie chocosmoothie;
public:
    int getAmericanoCnt() const;
    int getCaffeLatteCnt() const;
    int getCaffeMochaCnt() const;
    int getBlackTeaCnt() const;
    int getGreenTeaCnt() const;
    int getStrawberryAdeCnt() const;
    int getLemonadeCnt() const;
    int getStrawberrysmoothieCnt() const;
    int getChocosmoothieCnt() const;
    
    void setAmericanoCnt(int cnt);
    void setCaffeLatteCnt(int cnt);
    void setCafeMochaCnt(int cnt);
    void setBlackTeaCnt(int cnt);
    void setGreenTeaCnt(int cnt);
    void setStrawberryAdeCnt(int cnt);
    void setLemonAdeCnt(int cnt);
    void setStrawberrySmoothieCnt(int cnt);
    void setChocoSmoothieCnt(int cnt);
    
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

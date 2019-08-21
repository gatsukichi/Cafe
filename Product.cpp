#include "Product.h"

int Product::getAmericanoCnt() const{
    return americano.getCount();
}
int Product::getCaffeLatteCnt() const{
    return cafelatte.getCount();
}
int Product::getCaffeMochaCnt() const{
    return cafemocha.getCount();
}
int Product::getBlackTeaCnt() const{
    return blacktea.getCount();
}
int Product::getGreenTeaCnt() const{
    return greentea.getCount();
}
int Product::getStrawberryAdeCnt() const{
    return strawberryade.getCount();
}
int Product::getLemonadeCnt() const{
    return lemonade.getCount();
}
int Product::getStrawberrysmoothieCnt() const{
    return strawberrysmoothie.getCount();
}
int Product::getChocosmoothieCnt() const{
    return chocosmoothie.getCount();
}

void Product::setAmericanoCnt(int cnt){
    this->americano.setCount(cnt);
}
void Product::setCaffeLatteCnt(int cnt){
    this->cafelatte.setCount(cnt);
}
void Product::setCafeMochaCnt(int cnt){
    this->cafemocha.setCount(cnt);
}
void Product::setBlackTeaCnt(int cnt){
    this->blacktea.setCount(cnt);
}
void Product::setGreenTeaCnt(int cnt){
    this->greentea.setCount(cnt);
}
void Product::setStrawberryAdeCnt(int cnt){
    this->strawberryade.setCount(cnt);
}
void Product::setLemonAdeCnt(int cnt){
    this->lemonade.setCount(cnt);
}
void Product::setStrawberrySmoothieCnt(int cnt){
    this->strawberrysmoothie.setCount(cnt);
}
void Product::setChocoSmoothieCnt(int cnt){
    this->chocosmoothie.setCount(cnt);
}

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

//void Product::setAmericanoPrice(int price){
//}
//void Product::setCaffeLattePrice(int price){
//
//}
//void Product::setCafeMochaPrice(int price){
//    
//}
//void Product::setBlackTeaPrice(int price);
//void Product::setGreenTeaPrice(int price);
//void Product::setStrawberryAdePrice(int price);
//void Product::setLemonAdePrice(int price);
//void Product::setStrawberrySmoothiePrice(int price);
//void Product::setChocoSmoothiePrice(int price);

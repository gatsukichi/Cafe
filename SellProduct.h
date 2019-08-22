#ifndef SELLPRODUCT_H_
#define SELLPRODUCT_H_

#include <iostream>
using namespace std;

#include "IngredientList.h"
#include "MoneyBox.h"
#include "ProductList.h"
#define DE_COFFEEBEAN 20
#define DE_MILK 50
#define DE_CHOCO 30
#define DE_BLACKTEABAG 30
#define DE_GREENTEABAG 30
#define DE_CIDER 50
#define DE_STRAWBERRY 50
#define DE_LEMON 50
#define DE_EGG 1
#define DE_FLOUR 100
#define DE_SUGAR 20

class SellProduct {
public:
	int ProductCntIncreament(ProductList &PL, int index, int count) {
		int sellM;
		switch (index) {
            case 1: cout << "디이: " << PL.getAmericanoPrice() << endl; sellM = PL.getAmericanoPrice() * count; break;
		case 2: sellM = PL.getCaffeLattePrice() * count; break;
		case 3: sellM = PL.getCaffeMochaPrice() * count; break;
		case 4: sellM = PL.getGreenTeaPrice() * count; break;
		case 5: sellM = PL.getBlackTeaPrice() * count; break;
		case 6: sellM = PL.getStrawberryAdePrice() * count; break;
		case 7: sellM = PL.getLemonadePrice() * count; break;
		case 8: sellM = PL.getStrawberrysmoothiePrice() * count; break;
		case 9: sellM = PL.getChocosmoothiePrice() * count; break;
        default: sellM=0; break;
		}

		return sellM;
	}

	bool IngredientCntDecreament(IngredientList& IL, int index, int count) { //재료리스트 (재료가 빠져야하니까), 카운트는 몇잔샀는지에 따라서 빠져야하니까, 인덱스는 뭘 샀는지 알아야하니까
        switch (index) {
            case 1: // 아메리카노
                try {
                    IL.decreaseCoffeeBeanGram(DE_COFFEEBEAN*count);
                }
                catch (const char* str) {
                    cout << str << endl;
                    return false;
                }
                break;
            case 2: // 카페라떼
                try {
                    IL.decreaseCoffeeBeanGram(DE_COFFEEBEAN*count);
                    IL.decreaseMilkGram(DE_MILK*count);
                }
                catch (const char* str) {
                    cout << str << endl;
                    return false;
                }
                break;
            case 3: // 카페모카
                try {
                    IL.decreaseCoffeeBeanGram(DE_COFFEEBEAN*count);
                    IL.decreaseChocoGram(DE_CHOCO*count);
                }
                catch (const char* str) {
                    cout << str << endl;
                    return false;
                }
                break;
            case 4: // 녹차
                try {
                    IL.decreaseGreenTeaBagGram(DE_GREENTEABAG*count);
                }
                catch (const char* str) {
                    cout << str << endl;
                    return false;
                }
                break;
            case 5: // 홍차
                try {
                    IL.decreaseBlackTeaBagGram(DE_BLACKTEABAG*count);
                }
                catch (const char* str) {
                    cout << str << endl;
                    return false;
                }
                break;
            case 6: // 딸기에이드
                try {
                    IL.decreaseCiderGram(DE_CIDER*count);
                    IL.decreaseStrawberryGram(DE_STRAWBERRY*count);
                }
                catch (const char* str) {
                    cout << str << endl;
                    return false;
                }
                break;
            case 7: // 레모네이드
                try {
                    IL.decreaseLemonGram(DE_LEMON*count);
                    IL.decreaseCiderGram(DE_CIDER*count);
                }
                catch (const char* str) {
                    cout << str << endl;
                    return false;
                }
                break;
            case 8: // 딸기스무디
                try {
                    IL.decreaseMilkGram(DE_MILK*count);
                    IL.decreaseStrawberryGram(DE_STRAWBERRY*count);
                }
                catch (const char* str) {
                    cout << str << endl;
                    return false;
                }
                break;
            case 9: // 초코스무디
                try {
                    IL.decreaseChocoGram(DE_CHOCO*count);
                    IL.decreaseMilkGram(DE_MILK*count);
                }
                catch (const char* str) {
                    cout << str << endl;
                    return false;
                }
                break;
            default:
                break;
        }
        
        return true;
    }

	void MoneyIncreament(MoneyBox &MB, int sellM) {
		MB.accumulateSellM(sellM);
	}
};

#endif /* SELLPRODUCT_H_ */

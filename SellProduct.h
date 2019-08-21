#pragma once
#include "IngredientList.h"
#include "MoneyBox.h"
#include "ProductList.h"

class SellProduct {
public:
	int ProductCntIncreament(ProductList &PL, int count, int index) {
		int sellM;
		switch (index) {
		case 1:sellM = PL.getAmericanoPrice() * count; break;
		case 2:sellM = PL.getCaffeLattePrice() * count; break;
		case 3:sellM = PL.getCaffeMochaPrice() * count; break;
		case 4:sellM = PL.getGreenTeaPrice() * count; break;
		case 5:sellM = PL.getBlackTeaPrice() * count; break;
		case 6:sellM = PL.getStrawberryAdePrice() * count; break;
		case 7:sellM = PL.getLemonadePrice() * count; break;
		case 8:sellM = PL.getStrawberrysmoothiePrice() * count; break;
		case 9:sellM = PL.getChocosmoothiePrice() * count; break;
		default: break;
		}

		return sellM;
	}

	void IngredientCntDecreament(IngredientList& IL, int index, int count) { //재료리스트 (재료가 빠져야하니까), 카운트는 몇잔샀는지에 따라서 빠져야하니까, 인덱스는 뭘 샀는지 알아야하니까
        switch (index) {
            case 1: // 아메리카노
                IL.decreaseCoffeeBeanGram(DE_COFFEEBEAN*count);
                break;
            case 2: // 카페라떼
                IL.decreaseCoffeeBeanGram(DE_COFFEEBEAN*count);
                IL.decreaseMilkGram(DE_MILK*count);
                break;
            case 3: // 카페모카
                IL.decreaseCoffeeBeanGram(DE_COFFEEBEAN*count);
                IL.decreaseChocoGram(DE_CHOCO*count);
                break;
            case 4: // 녹차
                IL.decreaseGreenTeaBagGram(DE_GREENTEABAG*count);
                break;
            case 5: // 홍차
                IL.decreaseBlackTeaBagGram(DE_BLACKTEABAG*count);
                break;
            case 6: // 딸기에이드
                IL.decreaseCiderGram(DE_CIDER*count);
                IL.decreaseStrawberryGram(DE_STRAWBERRY*count);
                break;
            case 7: // 레모네이드
                IL.decreaseLemonGram(DE_LEMON*count);
                IL.decreaseCiderGram(DE_CIDER*count);
                break;
            case 8: // 딸기스무디
                IL.decreaseMilkGram(DE_MILK*count);
                IL.decreaseStrawberryGram(DE_STRAWBERRY*count);
                break;
            case 9: // 초코스무디
                IL.decreaseChocoGram(DE_CHOCO*count);
                IL.decreaseMilkGram(DE_MILK*count);
                break;
            default:
                break;
        }
    }

	void MoneyIncreament(MoneyBox &MB, int sellM) {
		MB.accumulateSellM(sellM);
	}
	
};

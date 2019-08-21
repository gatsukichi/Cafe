#pragma once
#include "IngredientList.h"
#include "MoneyBox.h"
#define IN_COFFEEBEAN
#define IN_MILK
#define IN_CHOCO
#define IN_BLACKTEABAG
#define IN_GREENTEABAG
#define IN_CIDER
#define IN_STRAWBERRY
#define IN_LEMON
#define IN_EGG
#define IN_FLOUR
#define IN_SUGAR


class BuyIngredient {
public:
	int ProductCntDecreament(IngredientList& IL, int count, int index) {
		int buyM;
		switch (index) {
		case 1:buyM = IL.getCoffeeBeanPrice() * count; break;
		case 2:buyM = IL.getMilkPrice() * count; break;
		case 3:buyM = IL.getChocoPrice() * count; break;
		case 4:buyM = IL.getBlackTeaBagPrice() * count; break;
		case 5: buyM = IL.getGreenTeaBagPrice() * count; break;
		case 6:buyM = IL.getCiderPrice() * count; break;
		case 7:buyM = IL.getStrawberryPrice() * count; break;
		case 8:buyM = IL.getLemonPrice() * count; break;
		case 9:buyM = IL.getEggPrice() * count; break;
		case 10:buyM = IL.getFlourPrice() * count; break;
		case 11:buyM = IL.getSugarPrice() * count; break;
		default: break;
		}
		return buyM;
	}
	void IngredientCntIncreament(IngredientList& IL, int count, int index) { //재료리스트 (재료가 빠져야하니까), 카운트는 몇잔샀는지에 따라서 빠져야하니까, 인덱스는 뭘 샀는지 알아야하니까
		switch (index) {
		case 1:IL.increaseCoffeeBeanGram(count * IN_COFFEEBEAN); break;
		case 2:IL.increaseMilkGram(count * IN_MILK); break;
		case 3:IL.increaseChocoGram(count * IN_CHOCO); break;
		case 4:IL.increaseBlackTeaBagGram(count * IN_BLACKTEABAG); break;
		case 5:IL.increaseGreenTeaBagGram(count * IN_GREENTEABAG); break;
		case 6:IL.increaseCiderGram(count * IN_CIDER); break;
		case 7:IL.increaseStrawberryGram(count * IN_STRAWBERRY); break;
		case 8:IL.increaseLemonGram(count * IN_LEMON); break;
		case 9:IL.increaseEggCount(count * IN_EGG); break;
		case 10:IL.increaseFlourGram(count * IN_FLOUR); break;
		case 11:IL.increaseSugarGram(count * IN_SUGAR); break;
		default:break;
		}
	}
	void MoneyIncreament(MoneyBox& MB, int buyM) {
		MB.accumulateBuyM(buyM);
	}
};

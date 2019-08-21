#pragma once
#pragma once
#include "IngredientList.h"
#include "MoneyBox.h"

class BuyProduct {
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
		case 9:buyM = IL.getEggPrice() *count; break;
		case 10:buyM = IL.getFlourPrice() * count; break;
		case 11:buyM = IL.getSugarPrice() * count; break;
		default: break;
		}
		return buyM;
	}
	void IngredientCntIncreament(IngredientList& IL, int count, int index) { //재료리스트 (재료가 빠져야하니까), 카운트는 몇잔샀는지에 따라서 빠져야하니까, 인덱스는 뭘 샀는지 알아야하니까
		switch (index) {
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		default:
			break;
		}
		IngredientList.setCoffeeBeanCount(count)
	}
	void MoneyIncreament(MoneyBox& MB, int buyM) {
		MB.accumulateBuyM(buyM);
	}
};

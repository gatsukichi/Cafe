#pragma once
#include "IngredientList.h"
#include "MoneyBox.h"
#include "ProductList.h"

class SellProduct {
public:
	int sellCountUp(ProductList &PL, int count, int index) {
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

	void sellCountUp(IngredientList &IL, int count, int index) { //재료리스트 (재료가 빠져야하니까), 카운트는 몇잔샀는지에 따라서 빠져야하니까, 인덱스는 뭘 샀는지 알아야하니까
		switch (index) {
		case 1:



		default:
			break;
		}
		IngredientList.setCoffeeBeanCount(count)
	}

	void setMoney(&MoneyBox MB, int sellM) {
		MoneyBox.setSellM(돈);
	}


};

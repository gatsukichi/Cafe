#pragma once
#include "IngredientList.h"
#include "MoneyBox.h"
#include "ProductList.h"

class SellProduct {
public:
	int sellCountUp(ProductList &PL, int count, int index) {
		int sellM;
		switch (index) {
		case 1:PL.getAmericanoPrice();
		case 2:PL.getCaffeLattePrice();
		case 3:PL.getCaffeMochaPrice();
		case 4:PL.getGreenTeaPrice();
		case 5:PL.getBlackTeaPrice();
		case 6:PL.getStrawberryAdePrice();
		case 7:PL.getLemonadePrice();
		case 8:PL.getStrawberrysmoothiePrice();
		case 9:PL.getChocosmoothiePrice();
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
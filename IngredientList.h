#include <iostream>
using namespace std;
#include"Ingredient.h"
class Ingrediant {

private:

	CoffeeBean coffeebean;
	Milk milk;
	Choco choco;
	BlackTeaBag blackteabag;
	GreenTeaBag greenteabag;
	Cider cider;
	Strawberry strawberry;
	Lemon lemon;
	Egg egg;
	Flour flour;
	Sugar sugar;
public:

	int getCoffeeBeanGram() const {
		return coffeebean.getCoffeeBeanGram();
	}
	double getMilkGram() const {
		return milk.getMilkGram();
	}
	double getChocoGram() const {
		return choco.getChocoGram();
	}
	double getBlackTeaBagGram() const {
		return blackteabag.getBlackTeaBagGram();
	}
	double getGreenTeaBagGram() const {
		return greenteabag.getGreenTeaBagGram();
	}
	double getCiderGram() const {
		return cider.getCiderGram();
	}
	double getStrawberryGram() const {
		return strawberry.getStrawberryGram();
	}
	double getLemonGram() const {
		return lemon.getLemonGram();
	}
	double getEggCount() const {
		return egg.getEggCount();
	}
	double getFlourGram() const {
		return flour.getFlourGram();
	}
	double getSugarGram() const {
		return sugar.getSugarGram();
	}
	void setCoffeeBeanGram(double gram) {
		coffeebean.setCoffeeBeanGram(gram);
	}
	void setMilkGram(double gram) {
		milk.setMilkGram(gram);
	}
	void setChocoGram(double gram) {
		choco.setChocoGram(gram);
	}
	void setBlackTeaBagGram(double gram) {
		blackteabag.setBlackTeaBagGram(gram);
	}
	void setGreenTeaBagGram(double gram) {
		greenteabag.setGreenTeaBagGram(gram);
	}
	void setCiderGram(double gram) {
		cider.setCiderGram(gram);
	}
	void setStrawberryGram(double gram) {
		strawberry.setStrawberryGram(gram);
	}
	void setLemonGram(double gram) {
		lemon.setLemonGram(gram);
	}
	void setEggCount(int count) {
		egg.setEggCount(count);
	}
	void setFlourGram(double gram) {
		flour.setFlourGram(gram);
	}
	void setSugarGram(double gram) {
		sugar.setSugarGram(gram);
	}
};
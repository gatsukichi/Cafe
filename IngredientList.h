#include <iostream>
using namespace std;
#include"Ingredient.h"
class IngredientList {

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
	IngredientList() {}
	double getCoffeeBeanGram() const {
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
	int getEggCount() const {
		return egg.getEggCount();
	}
	double getFlourGram() const {
		return flour.getFlourGram();
	}
	double getSugarGram() const {
		return sugar.getSugarGram();
	}
    
    int getCoffeeBeanPrice() const {
        return coffeebean.getCoffeeBeanPrice();
    }
    int getMilkPrice() const {
        return milk.getMilkPrice();
    }
    int getChocoPrice() const {
        return choco.getChocoGram();
    }
    int getBlackTeaBagPrice() const {
        return blackteabag.getBlackTeaBagPrice();
    }
    int getGreenTeaBagPrice() const {
        return greenteabag.getGreenTeaBagPrice();
    }
    int getCiderPrice() const {
        return cider.getCiderPrice();
    }
    int getStrawberryPrice() const {
        return strawberry.getStrawberryPrice();
    }
    int getLemonPrice() const {
        return lemon.getLemonPrice();
    }
    int getEggPrice() const {
        return egg.getEggPrice();
    }
    int getFlourPrice() const {
        return flour.getFlourPrice();
    }
    int getSugarPrice() const {
        return sugar.getSugarPrice();
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

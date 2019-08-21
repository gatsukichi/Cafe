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
	
	void decreaseCoffeeBeanGram(double gram) {
        coffeebean.decreaseCoffeeBeanGram(gram);
    }
    void decreaseMilkGram(double gram) {
        milk.decreaseMilkGram(gram);
    }
    void decreaseChocoGram(double gram) {
        choco.decreaseChocoGram(gram);
    }
    void decreaseBlackTeaBagGram(double gram) {
        blackteabag.decreaseBlackTeaBagGram(gram);
    }
    void decreaseGreenTeaBagGram(double gram) {
        greenteabag.decreaseGreenTeaBagGram(gram);
    }
    void decreaseCiderGram(double gram) {
        cider.decreaseCiderGram(gram);
    }
    void decreaseStrawberryGram(double gram) {
        strawberry.decreaseStrawberryGram(gram);
    }
    void decreaseLemonGram(double gram) {
        lemon.decreaseLemonGram(gram);
    }
    void decreaseEggCount(int count) {
        egg.decreaseEggCount(count);
    }
    void decreaseFlourGram(double gram) {
        flour.decreaseFlourGram(gram);
    }
    void decreaseSugarGram(double gram) {
        sugar.decreaseSugarGram(gram);
    }
	void increaseCoffeeBeanGram(double gram) {
        coffeebean.increaseCoffeeBeanGram(gram);
    }
    void increaseMilkGram(double gram) {
        milk.increaseMilkGram(gram);
    }
    void increaseChocoGram(double gram) {
        choco.increaseChocoGram(gram);
    }
    void increaseBlackTeaBagGram(double gram) {
        blackteabag.increaseBlackTeaBagGram(gram);
    }
    void increaseGreenTeaBagGram(double gram) {
        greenteabag.increaseGreenTeaBagGram(gram);
    }
    void increaseCiderGram(double gram) {
        cider.increaseCiderGram(gram);
    }
    void increaseStrawberryGram(double gram) {
        strawberry.increaseStrawberryGram(gram);
    }
    void increaseLemonGram(double gram) {
        lemon.increaseLemonGram(gram);
    }
    void increaseEggCount(int count) {
        egg.increaseEggCount(count);
    }
    void increaseFlourGram(double gram) {
        flour.increaseFlourGram(gram);
    }
    void increaseSugarGram(double gram) {
        sugar.increaseSugarGram(gram);
    }
};

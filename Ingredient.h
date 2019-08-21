#pragma once
class CoffeeBean{
private:
    double gram;
    int price;
public:
	CoffeeBean(){
		gram = 0;
		price = 0;
	}
    double getCoffeeBeanGram() const{
        return this->gram;
    }
    int getCoffeeBeanPrice() const{
        return this->price;
    }
    void setCoffeeBeanGram(double gram){
        this->gram = gram;
    }
	void decreaseCoffeeBeanGram(double gram){
        this->gram -= gram;
    }
    void increaseCoffeeBeanGram(double gram){
        this->gram += gram;
    }
};

class Milk{
private:
    double gram;
    int price;
public:
	Milk(){
		gram = 0;
		price = 0;
	}
    double getMilkGram() const{
        return this->gram;
    }
    int getMilkPrice() const{
        return this->price;
    }
    void setMilkGram(double gram){
        this->gram = gram;
    }
	    void decreaseMilkGram(double gram){
        this->gram -= gram;
    }
    void increaseMilkGram(double gram){
        this->gram += gram;
    }
};


class Choco{
private:
    double gram;
    int price;
public:
	Choco(){
		gram = 0;
		price = 0;
	}
    double getChocoGram() const{
        return this->gram;
    }
    int getChocoPrice() const{
        return this->price;
    }
    void setChocoGram(double gram){
        this->gram = gram;
    }
	    void decreaseChocoGram(double gram){
        this->gram -= gram;
    }
    void increaseChocoGram(double gram){
        this->gram += gram;
    }
};

class BlackTeaBag{
private:
    double gram;
    int price;
public:
	BlackTeaBag() {
		gram = 0;
		price = 0;
	}
    double getBlackTeaBagGram() const{
        return this->gram;
    }
    int getBlackTeaBagPrice() const{
        return this->price;
    }
    void setBlackTeaBagGram(double gram){
        this->gram = gram;
    }
	    void decreaseBlackTeaBagGram(double gram){
        this->gram -= gram;
    }
    void increaseBlackTeaBagGram(double gram){
        this->gram += gram;
    }
};


class GreenTeaBag{
private:
    double gram;
    int price;
public:
	GreenTeaBag() {
		gram = 0;
		price = 0;
	}
    double getGreenTeaBagGram() const{
        return this->gram;
    }
    int getGreenTeaBagPrice() const{
        return this->price;
    }
    void setGreenTeaBagGram(double gram){
        this->gram = gram;
    }
	    void decreaseGreenTeaBagGram(double gram){
        this->gram -= gram;
    }
    void increaseGreenTeaBagGram(double gram){
        this->gram += gram;
    }
};

class Cider{
private:
    double gram;
    int price;
public:
	Cider() {
		gram = 0;
		price = 0;
	}
    double getCiderGram() const{
        return this->gram;
    }
    int getCiderPrice() const{
        return this->price;
    }
    void setCiderGram(double gram){
        this->gram = gram;
    }
	    void decreaseCiderGram(double gram){
        this->gram -= gram;
    }
    void increaseCiderGram(double gram){
        this->gram += gram;
    }
};

class Strawberry{
private:
    double gram;
    int price;
public:
	Strawberry() {
		gram = 0;
		price = 0;
	}
    double getStrawberryGram() const{
        return this->gram;
    }
    int getStrawberryPrice() const{
        return this->price;
    }
    void setStrawberryGram(double gram){
        this->gram = gram;
    }
	    void decreaseStrawberryGram(double gram){
        this->gram -= gram;
    }
    void increaseStrawberryGram(double gram){
        this->gram += gram;
    }
};

class Lemon{
private:
    double gram;
    int price;
public:
	Lemon() {
		gram = 0;
		price = 0;
	}
    double getLemonGram() const{
        return this->gram;
    }
    int getLemonPrice() const{
        return this->price;
    }
    void setLemonGram(double gram){
        this->gram = gram;
    }
	    void decreaseLemonGram(double gram){
        this->gram -= gram;
    }
    void increaseLemonGram(double gram){
        this->gram += gram;
    }
};

class Egg {
private:
    int count;
    int price;
public:
	Egg() {
		count = 0;
		price = 0;
	}
	int getEggCount() const{
		return this->count;
	}
    int getEggPrice() const{
        return this->price;
    }
	void setEggCount(int count){
		this->count = count;
	}
	    void decreaseEggCount(int count){
        this->count -= count;
    }
    void increaseEggCount(int count){
        this->count += count;
    }
};
class Flour {
private:
    double gram;
    int price;
public:
	Flour() {
		gram = 0;
		price = 0;
	}
	int getFlourGram() const{
		return this->gram;
	}
	int getFlourPrice() const{
		return this->price;
	}
    void setFlourGram(int gram){
        this->gram = gram;
    }
	    void decreaseFlourGram(double gram){
        this->gram -= gram;
    }
    void increaseFlourGram(double gram){
        this->gram += gram;
    }
};
class Sugar {
private:
    double gram;
    int price;
public:
	Sugar() {
		gram = 0;
		price = 0;
	}
	int getSugarGram() const{
		return this->gram;
	}
	int getSugarPrice() const{
		return this->price;
	}
    void setSugarGram(int gram){
        this->gram = gram;
    }
	    void decreaseSugarGram(double gram){
        this->gram -= gram;
    }
    void increaseSugarGram(double gram){
        this->gram += gram;
    }
};

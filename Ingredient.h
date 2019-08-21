#pragma once
class CoffeeBean{
private:
    double gram;
    int price;
public:
    double getCoffeeBeanGram() const{
        return this->gram;
    }
    int getCoffeeBeanPrice() const{
        return this->price;
    }
    void setCoffeeBeanGram(double gram){
        this->gram = gram;
    }
    
};

class Milk{
private:
    double gram;
    int price;
public:
    double getMilkGram() const{
        return this->gram;
    }
    int getMilkPrice() const{
        return this->price;
    }
    void setMilkGram(double gram){
        this->gram = gram;
    }
};


class Choco{
private:
    double gram;
    int price;
public:
    double getChocoGram() const{
        return this->gram;
    }
    int getChocoPrice() const{
        return this->price;
    }
    void setChocoGram(double gram){
        this->gram = gram;
    }
};

class BlackTeaBag{
private:
    double gram;
    int price;
public:
    double getBlackTeaBagGram() const{
        return this->gram;
    }
    int getBlackTeaBagPrice() const{
        return this->price;
    }
    void setBlackTeaBagGram(double gram){
        this->gram = gram;
    }
};


class GreenTeaBag{
private:
    double gram;
    int price;
public:
    double getGreenTeaBagGram() const{
        return this->gram;
    }
    int getGreenTeaBagPrice() const{
        return this->price;
    }
    void setGreenTeaBagGram(double gram){
        this->gram = gram;
    }
};

class Cider{
private:
    double gram;
    int price;
public:
    double getCiderGram() const{
        return this->gram;
    }
    int getCiderPrice() const{
        return this->price;
    }
    void setCiderGram(double gram){
        this->gram = gram;
    }
};

class Strawberry{
private:
    double gram;
    int price;
public:
    double getStrawberryGram() const{
        return this->gram;
    }
    int getStrawberryPirce() const{
        return this->price;
    }
    void setStrawberryGram(double gram){
        this->gram = gram;
    }
};

class Lemon{
private:
    double gram;
    int price;
public:
    double getLemonGram() const{
        return this->gram;
    }
    int getLemonPrice() const{
        return this->price;
    }
    void setLemonGram(double gram){
        this->gram = gram;
    }
};


class Egg {
private:
    int count;
    int price;
public:
	int getEggCount() const{
		return this->count;
	}
    int getEggPrice() const{
        return this->price;
    }
	void setEggCount(int count){
		this->count = count;
	}
};

class Flour {
private:
    double gram;
    int price;
public:
	int getFlourGram() const{
		return this->gram;
	}
	int getFlourPrice() const{
		return this->price;
	}
    void setFlourGram(int gram){
        this->gram = gram;
    }
};
class Sugar {
private:
    double gram;
    int price;
public:
	int getSugarGram() const{
		return this->gram;
	}
	int getSugarPrice() const{
		return this->price;
	}
    void setSugarGram(int gram){
        this->gram = gram;
    }
};

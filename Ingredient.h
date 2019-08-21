#pragma once
class CoffeeBean{
private:
    double gram;
    int price;
public:
    CoffeeBean(){};
    CoffeeBean(double gram){};
    ~CoffeeBean(){};
    double getCoffeeBeanGram() const{
        return this->gram;
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
    Milk();
    Milk(double gram);
    ~Milk(){}
    double getMilkGram() const{
        return this->gram;
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
    Choco();
    Choco(double gram);
    ~Choco(){}
    double getChocoGram() const{
        return this->gram;
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
    BlackTeaBag();
    BlackTeaBag(double gram);
    ~BlackTeaBag(){}
    double getBlackTeaBagGram() const{
        return this->gram;
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
    GreenTeaBag();
    GreenTeaBag(double gram);
    ~GreenTeaBag(){}
    double getGreenTeaBagGram() const{
        return this->gram;
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
    Cider();
    Cider(double gram);
    ~Cider(){}
    double getCiderGram() const{
        return this->gram;
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
    Strawberry();
    Strawberry(double gram);
    ~Strawberry(){}
    double getStrawberryGram() const{
        return this->gram;
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
    Lemon();
    Lemon(double gram);
    ~Lemon(){}
    double getLemonGram() const{
        return this->gram;
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
	int getEggCount() const
	{
		return this->count;
	}
	void setEggCount(int count)
	{
		this->count = count;
	}
	int getEggPrice() const
	{
		return this->price;
	}
};

class Flour {
private:
    double gram;
    int price;
public:
	int getFlourGram() const
	{
		return this->gram;
	}
	void setFlourGram(int gram)
	{
		this->gram = gram;
	}
	int getFlourPrice() const
	{
		return this->price;
	}
};
class Sugar {
private:
    double gram;
    int price;
public:
	int getSugarGram() const
	{
		return this->gram;
	}
	void setSugarGram(int gram)
	{
		this->gram = gram;
	}
	int getSugarPrice() const
	{
		return this->price;
	}
};
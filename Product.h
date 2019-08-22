#ifndef PRODUCT_H_
#define PRODUCT_H_

class Americano { // 커피
private:
	int price;
	//    bool ice;
	//    bool whipping;
public:
    Americano() {
        this->price = 10;
    }
	int getAmericanoPrice() const
	{
		return this->price;
	};
};
class CaffeLatte { // 커피+우유
private:
	int price;
	//    bool ice;
	//    bool whipping;
public:
    CaffeLatte() {
        this->price = 10;
    }
	int getCaffeLattePrice() const
	{
		return this->price;
	}
};
class CaffeMocha { // 커피+초코
private:
	int price;
	//    bool ice;
	//    bool whipping;
public:
    CaffeMocha() {
        this->price = 10;
    }
	int getCaffeMochaPrice() const
	{
		return this->price;
	}
};
class GreenTea { // 그린티백
private:
	int price;
	//    bool ice;
	//    bool whipping;
public:
    GreenTea() {
        this->price = 10;
    }
	int getGreenTeaPrice() const
	{
		return this->price;
	}
};
class BlackTea { //블랙티백
private:
	int price;
	//    bool ice;
	//    bool whipping;
public:
    BlackTea() {
        this->price = 10;
    }
	int getBlackTeaPrice() const
	{
		return this->price;
	}
};
class StrawberryAde { // 딸기 + 사이다
private:
	int price;
	//    bool ice;
	//    bool whipping;
public:
    StrawberryAde() {
        this->price = 10;
    }
	int getStrawberrtAdePrice() const
	{
		return this->price;
	}
};
class LemonAde { // 레몬 + 사이다
private:
	int price;
	//    bool ice;
	//    bool whipping;
public:
    LemonAde() {
        this->price = 10;
    }
	int getLemonAdePrice() const
	{
		return this->price;
	}
};
class StrawberrySmoothie { // 딸기 + 우유
private:
	int price;
	//    bool ice;
	//    bool whipping;
public:
    StrawberrySmoothie() {
        this->price = 10;
    }
	int getStrawberrySmoothiePrice() const
	{
		return this->price;
	}
};
class ChocoSmoothie { // 초코 + 우유
private:
	int price;
	//    bool ice;
	//    bool whipping;
public:
    ChocoSmoothie() {
        this->price = 10;
    }
	int getChocoSmoothiePrice() const
	{
		return this->price;
	}
};

#endif /* PRODUCT_H_ */

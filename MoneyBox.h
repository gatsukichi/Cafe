#include <iostream>
using namespace std;

class MoneyBox{
private:
    int sales; // 매출
    int tax; // 세금 = 매출의 10퍼??
    int purchase; // 재고구입비
    int profit; // 순수익 = 매출 - (세금+재고구입비)
public:
    //getter
    int getSales() const{
        return this->sales;
    }
    int getTax() const{
        return this->tax;
    }
    int getPurchase() const{
        return this->purchase;
    }
    int getProfit() const{
        return this->profit;
    }
    //setter
    void setSales(int sales){
        this->sales = sales;
    }
    void setTax(int tax){
        this->tax = tax;
    }
    void setPurchase(int purchase){
        this->purchase = purchase;
    }
    void setProfit(int profit){
        this->profit = profit;
    }
    //function
    void stateview() const{
        cout << "Sales : " << this->sales << endl;
        cout << "Tax : " << this->tax << endl;
        cout << "Purchase : " << this->purchase << endl;
        cout << "Profit : " << this->profit << endl;
    }
    void calcTax(){
        this->tax = this->sales * 0.1; //10%
    }

};

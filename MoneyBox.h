#include <iostream>
using namespace std;

class MoneyBox{
private:
    int sellM; // 매출
    int tax; // 세금 = 매출의 10퍼??
    int buyM; // 재고구입비
    int profit; // 순수익 = 매출 - (세금+재고구입비)
public:
    //getter
    int getSellM() const{
        return this->SellM;
    }
    int getTax() const{
        return this->tax;
    }
    int getBuyM() const{
        return this->buyM;
    }
    int getProfit() const{
        return this->profit;
    }
    //setter
    void setSellM(int sellM){
        this->sellM = sellM;
    }
    void setTax(int tax){
        this->tax = tax;
    }
    void setBuyM(int buyM){
        this->buyM = buyM;
    }
    void setProfit(int profit){
        this->profit = profit;
    }
    //function
    void stateview() const{
        cout << "Sales : " << this->sellM << endl;
        cout << "Tax : " << this->tax << endl;
        cout << "Purchase : " << this->buyM << endl;
        cout << "Profit : " << this->profit << endl;
    }
    void calcTax(){
        this->tax = this->sellM * 0.1; //10%
    }
    void calcProfit(){ // 매출 - (세금+재고구매비)
        this->profit = this->sellM - (this->tax + this->buyM);
    }

};

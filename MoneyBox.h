#include <iostream>
using namespace std;

class MoneyBox {
private:
	int sellM; // 매출
	int buyM; // 재고구입비
	int tax = sellM * 0.1; //10% // 세금 = 매출의 10퍼??
	int profit = sellM - (buyM + tax); // 순수익 = 매출 - (세금+재고구입비)
public:
	//getter
	int getSellM() const {
		return this->sellM;
	}
	int getTax() const {
		return this->tax;
	}
	int getBuyM() const {
		return this->buyM;
	}
	int getProfit() const {
		return this->profit;
	}
	//setter
	void setSellM(int sellM) {
		this->sellM = sellM;
	}
	//     void setTax(int tax){
	//         this->tax = tax;
	//     }
	void setBuyM(int buyM) {
		this->buyM = buyM;
	}
	//     void setProfit(int profit){
	//         this->profit = profit;
	//     }
		//function
	void stateview() const {
		cout << "Sell Money : " << this->sellM << endl;
		cout << "Buy Money  : " << this->buyM << endl;
		cout << "Tax        : " << this->tax << endl;
		cout << "Profit     : " << this->profit << endl;
	}
	void accumulateSellM(int SellM) {
		this->sellM += SellM;
	}
	void accumulateBuyM(int BuyM) {
		this->buyM += BuyM;
	}
};

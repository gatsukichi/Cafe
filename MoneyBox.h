#ifndef MONEYBOX_H_
#define MONEYBOX_H_

#include <iostream>
using namespace std;

class MoneyBox {
private:
    int sellM; // 매출
    int buyM; // 재고구입비
    int tax; // = sellM * 0.1; //10% // 세금 = 매출의 10퍼??
    int profit; //  = sellM - (buyM + tax); // 순수익 = 매출 - (세금+재고구입비)
    int goalSellM;  // 목표매출 - 실적출력할때 검사해서 달성시 우수 미달성시 미흡 이렇게 갈려서 나오게 하는것
    int bePoint;    // 손익분기점 - 달성시 다음달 영업가능 미달성시 개월수가 남았어도 강제종료.
public:
    MoneyBox() {
        sellM = 0;
        buyM = 0;
        tax = 0;
        profit = 0;
        goalSellM = 0;
        bePoint = 0;
    }
    
    MoneyBox(int sellM, int buyM, int tax, int profit, int goalSellM, int bePoint) {
        this->sellM = sellM;
        this->buyM = buyM;
        this->tax = tax;
        this->profit = profit;
        this->goalSellM = goalSellM;
        this->bePoint = bePoint;
    }
    
    //getter
    int getSellM() const {
        return this->sellM;
    }
    int getBuyM() const {
        return this->buyM;
    }
    int getTax() const {
        return this->tax;
    }
    int getProfit() const {
        return this->profit;
    }
    
    
    //-----//
    
    int getGoalSellM() const {
        return this->goalSellM;
    }
    int getBePoint() const {
        return this->bePoint;
    }
    
    //----//
    
    
    
    //setter
    void setSellM(int sellM) {
        this->sellM = sellM;
    }
    void setBuyM(int buyM) {
        this->buyM = buyM;
    }
    void setTax() {
        this->tax = this->sellM * 0.1;;
    }
    void setProfit() {
        this->profit = this->sellM - (this->buyM + this->tax);
    }
    void setGoalSellM(){
        this->goalSellM = this->sellM * 1.2 + this->profit * 0.1;
    }
    void setBePoint() {
        this->bePoint = this->tax + (this->buyM*1.1);
    }
    
    //function
    void stateView() const {
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
    
    // ================================== //
    void calcGoalSellM(MoneyBox& MB){ // 전월 머니박스 쓰는거
        this->goalSellM = MB.getSellM()*1.2 + MB.getProfit()*0.1;
    }
    void calcBePoint(MoneyBox& MB){ // 손익분기점 계산
        this->bePoint = MB.getTax() + (MB.getBuyM()*1.1);
    }
    void goalView(MoneyBox& MB){ // 전월 머니박스를 가져와야합니다. 시작할때는 입력했던 걸 가져오고
        // 그 다음부터는 새로 생성되는 머니박스를 가져와야합니다. 계속 달이 바뀌니까
        cout << "이번 달 목표 매출 : " << MB.getGoalSellM() << endl;
        cout << "손익 분기점 : " << MB.getBePoint() << endl;
    }
    // ================================== //
    
    
};

// 전월 머니박스에 목표치 입력할때 셋 매출재고세금순익 -> 오버로디드생성자로 생성
// 칼크 골셀, 칼크비피로 목표치 계산 세트로 가야함
// 이후는 손익분기점 달성후 데드라인에서 다음달로 넘어가는 분기점을 타고 그때 다음달 머니박스 새로 만들어야함. 그 다음달 머니박스의 골셀과 비피는 그달 끝날때 실적을 이용해 셋(칼크)해야함.

#endif /* MONEYBOX_H_ */

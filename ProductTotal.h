#ifndef PRODUCTTOTAL_H_
#define PRODUCTTOTAL_H_
#include<string>
#include <iostream>
using namespace std;
#include "Product.h"
#define DRINK_MAX_CNT 9

class ProductTotal{
private:
	int DrinkTotList[DRINK_MAX_CNT] ;
	string List[DRINK_MAX_CNT];
public:
	ProductTotal(){
		this->List[0] = "아메리카노";
		this->List[1] = "카페라떼";
		this->List[2] = "카페모카";
		this->List[3] = "녹차";
		this->List[4] = "홍차";
		this->List[5] = "딸기에이드";
		this->List[6] = "레몬에이드";
		this->List[7] = "딸기스무디";
		this->List[8] = "초코스무디";
		for (int i = 0; i < DRINK_MAX_CNT; i++)
		{
			this->DrinkTotList[i] = 0;
		}
	}
    void addSellCount(int index, int cnt) { // 팔려서 누적할 cnt, 접근할 방 번호 상수인 index
        this->DrinkTotList[index] += cnt;
    }
    int* getSellCount() {
        return this->DrinkTotList;
    }
    int getSellCount(int index) {
        return this->DrinkTotList[index];
    }
    void totalView() {
        cout << "- Total Sell -" << endl;
        for (int i=0; i<DRINK_MAX_CNT; i++) {
			cout << i + 1 << ". " << this->List[i] << this->DrinkTotList[i] << endl;
        }
    }
};

#endif /* PRODUCTTOTAL_H_ */

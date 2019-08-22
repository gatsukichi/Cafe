#ifndef PRODUCTTOTAL_H_
#define PRODUCTTOTAL_H_

#include <iostream>
using namespace std;
#include "Product.h"
#define DRINK_MAX_CNT 9

class ProductTotal{
private:
    int DrinkTotList[DRINK_MAX_CNT];
    
    //int totAme;
    //int totCafeLatte;
    //int totCafeMocha;
    //int totBlackTea;
    //int totGreenTea;
    //int totStrawberryAde;
    //int totLemonAde;
    //int totStrawberrySmoothie;
    //int totChocoSmoothie;
    
public:
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
            cout << i+1 << ". " << this->DrinkTotList[i] << endl;
        }
    }
};

#endif /* PRODUCTTOTAL_H_ */

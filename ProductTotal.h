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
    void setDrinkTotList(int cnt, int index){ // 팔려서 누적할 cnt, 접근할 방
        this->DrinkTotList[index] += cnt;
    }
    int * getDrinkTot(){
        return this->DrinkTotList;
    }
    void totalView(){
        cout << "음료 총 팔린 개수들" << endl;
        for (int i = 0; i<DRINK_MAX_CNT; i++) {
            cout << this->DrinkTotList[i] << endl;
        }
    }
//    void setDrinkTot(int *p, int index);
//    int* getDrinkTot() const;
};



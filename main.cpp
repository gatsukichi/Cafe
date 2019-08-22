#include <iostream>
using namespace std;
#include "Product.h"
#include "ProductTotal.h"
#include "Ingredient.h"
#include "MoneyBox.h"
#include "BuyIngredient.h"
#include "SellProduct.h"

int menu(const char** menuList, int menuCnt);
void sellMenu(ProductList& PL, IngredientList& IL, ProductTotal* PTP, MoneyBox* MBP, int& i);
void buyMenu(IngredientList& IL, MoneyBox* MBP,int& i);
void viewMenu(MoneyBox* MBP, ProductTotal* PTP, int& i);
void displayTitle(string title);
void screen(ProductList& PL, IngredientList& IL, int month_cnt);
int inputInteger(char* message);
int inputInteger(string message);
void myFlush();
bool deadLine(MoneyBox* MBP,int& i);

int main() {
    ProductList PL;
    IngredientList IL;
    int month_cnt;
    
    cout << "운영할 개월수를 입력하시오 : ";
    cin >> month_cnt;
    
    
    screen(PL, IL, month_cnt);
    
    getchar(); getchar();
    return 0;
}

void screen(ProductList& PL, IngredientList& IL, int month_cnt) {
    const char* menuList[] = { "판매 관리","재고 관리","매상 관리","마감 하기" };
    int i=1;
    int menuCnt = sizeof(menuList) / sizeof(menuList[0]);
    int menuNum;
    bool gogo;
    
    MoneyBox* MBP;
    MBP = new MoneyBox[month_cnt+1];
    ProductTotal* PTP;
    PTP = new ProductTotal[month_cnt+1];
    int sm, bm; // 전주인의 총매출 ,재료구입가격
    
    sm = inputInteger("지난달 총매출을 입력하시오 : ");
    bm =inputInteger("지난달 재고구입비용을 입력하시오 : ");
    MBP[0].setSellM(sm);
    MBP[0].setBuyM(bm);
    MBP[0].setTax();
    MBP[0].setProfit();
    MBP[0].setGoalSellM();
    MBP[0].setBePoint();
    
    displayTitle("카페 운영 프로그램");
    while (true) {
        menuNum = menu(menuList, menuCnt);
        switch (menuNum) {
            case 1:sellMenu(PL, IL, PTP, MBP, i); break;
            case 2:buyMenu(IL, MBP,i); break;
            case 3:viewMenu(MBP, PTP,i); break;
            case 4:
                gogo = deadLine(MBP, i);
                if (gogo == false) {
                    return;
                }
                break;
            default: break;
        }
        if (i-1 == month_cnt) { break; }
    }
    displayTitle("카페 운영 프로그램 종료");
    return;
}

int menu(const char** menuList, int menuCnt) {
    int i;
    int menuNum = 0; /* 입력된 메뉴 번호 저장 변수*/
    
    cout << endl << "==================================" << endl;
    for (i = 0; i < menuCnt; i++) {
        cout << i + 1 << "." << menuList[i] << endl;
    }
    cout << "==================================" << endl;
    while (menuNum<1 || menuNum>menuCnt) { /* 범위 내의 번호가 입력될 때 까지 반복*/
        menuNum = inputInteger("# 메뉴번호를 입력하세요 : ");
        
    }
    return menuNum;
}

void sellMenu(ProductList& PL, IngredientList& IL, ProductTotal* PTP, MoneyBox* MBP, int& i) {
    SellProduct SP;
    const char *menuList[] = { "아메리카노","카페라떼","카페모카","홍차","녹차","딸기에이드","레몬에이드","딸기스무디","초코스무디", "종료" };
    int menuCnt = sizeof(menuList) / sizeof(menuList[0]);
    int menuNum;
    int sellCnt;
    int sellMoney;
    
    displayTitle("상품 판매");
    while (true) {
        menuNum = menu(menuList, menuCnt);
        if (menuNum == menuCnt) { break; }
        sellCnt = inputInteger("몇 잔 판매 하시겠습니까? : ");
        
        sellMoney = SP.ProductCntIncreament(PL, menuNum, sellCnt);
        cout << "에이: " << sellMoney << endl;
        SP.IngredientCntDecreament(IL, menuNum, sellCnt);
        cout << "비이: " << MBP[i].getSellM() << endl;
        SP.MoneyIncreament(MBP[i], sellMoney);
        cout << "씨이: " << MBP[i].getSellM() << endl;
        PTP[i].addSellCount(menuNum, sellCnt);
        
    }
    displayTitle("상품 판매 종료");
    return;
}

void buyMenu(IngredientList& IL, MoneyBox* MBP, int& i) {
    BuyIngredient BI;
    const char *menuList[] = {"음료 재료 구매","음식 재료 구매", "종료"};
    int menuCnt = sizeof(menuList) / sizeof(menuList[0]);
    int menuNum;
    int buyCnt;
    int buyMoney;
    
    displayTitle("재고 관리");
    while (true) {
        menuNum = menu(menuList, menuCnt);
        if (menuNum == menuCnt) { break; }
        buyCnt = inputInteger("몇 개 구매하시겠습니까? : ");
        buyMoney = BI.ProductCntDecreament(IL, buyCnt, menuNum);
        BI.IngredientCntIncreament(IL, buyCnt, menuNum);
        BI.MoneyIncreament(MBP[i], buyMoney);
    }
    displayTitle("재고 관리 종료");
    return;
}

void viewMenu(MoneyBox* MBP, ProductTotal* PTP, int& i) {
    const char *menuList[] = { "판매 내역", "통장 내역" , "목표 매출 출력", "종료" };
    int menuCnt = sizeof(menuList) / sizeof(menuList[0]);
    int menuNum;
    displayTitle("매상 관리");
    while (true) {
        menuNum = menu(menuList, menuCnt);
        if (menuNum == menuCnt) { break; }
        switch (menuNum) {
            case 1: PTP[i+1].totalView(); break;
            case 2: MBP[i+1].stateView(); break;
            case 3: MBP[i].goalView(MBP[i]); break;
            default:break;
        }
    }
    displayTitle("매상 관리 종료");
    return;
}

bool deadLine(MoneyBox* MBP, int& i) {
    for (int j = 0; j <= i; j++){
        cout << "===========" << j + 1 << "번째 달 내역" << "============" << endl;
        MBP[j].stateView();
        cout << "=====================================" << endl;
    }
    i++;
    
    if ( MBP[i].getBePoint() >= MBP[i+1].getProfit() ) {//지난달 손익분기점을 지금현재의순이익이 못넘었을때 return false;
        cout << "망해서 강제종료";
        return false;
    }    //망했어요
    if ( MBP[i].getGoalSellM() <= MBP[i+1].getSellM() ) {//흑자 , 적자에 따른 것 검사 문구로 표현해준다.
        cout << "흑자 ! 이번달 열심히 했네요!";
    }
    else{
        cout << " 적자! 다음달은 더 힘내세요 !";
    }
    return true;
}

void displayTitle(string title) { // 화면 타이틀 출력 함수
    cout << endl << "------------------------------" << endl;
    cout << "    " << title << endl;
    cout << "------------------------------" << endl;
}

// message를 출력하고 정수값 입력 받아 리턴(문자, 실수값 예외 처리)
int inputInteger(char* message) {
    int number;
    
    while (1) {
        cout << message;
        cin >> number;
        
        if (cin.get() == '\n') {
            return number;
        }
        
        myFlush();
    }
}

// message를 출력하고 정수값 입력 받아 리턴(문자, 실수값 예외 처리)
int inputInteger(string message) {
    int number;
    
    while (1) {
        cout << message;
        cin >> number;
        
        if (cin.get() == '\n') {
            return number;
        }
        
        myFlush();
    }
}

// 기능 : cin입력 버퍼를 모두 비우고 fail상태를 초기상태로 재설정
void myFlush() {
    cin.clear();  // 에러로 설정되어있는 flag멤버의 값을 0으로 재초기화
    while (cin.get() != '\n') {
        ;  // 개행문자가 나올때까지 버퍼내의 모든 문자 지움
    }
    
    return;
}

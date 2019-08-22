#include <iostream>
using namespace std;
#include "Product.h"
#include "ProductTotal.h"
#include "Ingredient.h"
#include "MoneyBox.h"
#include "BuyIngredient.h"
#include "SellProduct.h"

int menu(const char** menuList, int menuCnt); // 전달된 메뉴를 출력하고 정확한 메뉴번호를 리턴하는
void sellMenu(ProductList& PL, IngredientList& IL, ProductTotal** PTP, MoneyBox** MBP); // 상품판매 메뉴
void buyMenu(IngredientList& IL, MoneyBox** MBP,int& i); // 재고관리 메뉴
void viewMenu(MoneyBox** MBP, ProductTotal** PTP, int& i); // 매상관리 메뉴
void displayTitle(string title); // 처리중인 내용 출력하기 위한 타이틀 출력함수
void screen(ProductList& PL, IngredientList& IL, int month_cnt); // 주메뉴를 출력하고 메뉴를 선택받아 반복적으로 주메뉴를 처리하는 함수
int inputInteger(char* message);  //  message를 출력하고 정수값 입력 받아 리턴(문자, 실수값 예외 처리)
int inputInteger(string message); //  message를 출력하고 정수값 입력 받아 리턴(문자, 실수값 예외 처리)
void myFlush();  // cin입력 버퍼를 모두 비우고 fail상태를 초기상태로 재설정
bool deadLine(MoneyBox** MBP,int& i); // 마감 처리

int main() {
    ProductList PL;
    IngredientList IL;
    int month_cnt;
    
    cout << "운영할 개월수를 입력하시오 : ";
    cin >> month_cnt;
    
    
    screen(PL, IL,month_cnt);
    
    getchar(); getchar();
    return 0;
}

void screen(ProductList& PL, IngredientList& IL,int month_cnt) {
    const char* menuList[] = { "판매 관리","재고 관리","매상 관리","마감 하기" };
    int i=1;
    int menuCnt = sizeof(menuList) / sizeof(menuList[0]);
    int menuNum;
    MoneyBox* MBP;
    MBP = new MoneyBox[month_cnt+1];
    ProductTotal* PTP;
    PTP = new ProductTotal[month_cnt+1];
    int sm, bm; // 전주인의 총매출 ,재료구입가격
    
    sm = inputInteger("지난달 총매출을 입력하시오 : ");
    bm =inputInteger("지난달 재고구입비용을 입력하시오 : ");
    MBP[0].setSellM(sm);
    MBP[0].setBuyM(bm);
    
    displayTitle("카페 운영 프로그램");
    while (true) {
        menuNum = menu(menuList, menuCnt);
        if (menuNum == menuCnt) { break; }
        switch (menuNum) {
            case 1:sellMenu(PL, IL, &PTP, &MBP); break;
            case 2:buyMenu(IL, &MBP,i); break;
            case 3:viewMenu(&MBP, &PTP,i); break;
            case 4:deadLine(&MBP, i); break;
            default: break;
        }
        if (i == month_cnt) { break; }
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

void sellMenu(ProductList& PL, IngredientList& IL, ProductTotal** PT, MoneyBox** MB) {
    const char* menuList[] = { "아메리카노","카페라떼","카페모카","녹차","홍차","딸기에이드","레몬에이드","딸기스무디","초코스무디" };
    int menuCnt = sizeof(menuList) / sizeof(menuList[0]);
    int menuNum;
    int sellCount;
    
    displayTitle("상품 판매");
    while (true) {
        menuNum = menu(menuList, menuCnt);
        sellCount = inputInteger("몇 잔 판매 하시겠습니까? : ");
        if (menuNum == menuCnt) { break; }
        switch (menuNum) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            default:break;
        }
    }
    displayTitle("상품 판매 종료");
    return;
}

void buyMenu(IngredientList& IL, MoneyBox** MBP, int& i) {
    const char* menuList[] = { "음료 재료 구매","음식 재료 구매" };
    int menuCnt = sizeof(menuList) / sizeof(menuList[0]);
    int menuNum;
    
    displayTitle("재고 관리");
    while (true) {
        menuNum = menu(menuList, menuCnt);
        if (menuNum == menuCnt) { break; }
        switch (menuNum) {
            case 1:
            case 2:
            default:break;
        }
    }
    displayTitle("재고 관리 종료");
    return;
}

void viewMenu(MoneyBox** MBP,ProductTotal** PTP ,int& i) {
    const char *menuList[] = { "판매 내역", "통장 내역" , "목표 매출 출력" };
    int menuCnt = sizeof(menuList) / sizeof(menuList[0]);
    int menuNum;
    displayTitle("매상 관리");
    while (true) {
        menuNum = menu(menuList, menuCnt);
        if (menuNum == menuCnt) { break; }
        switch (menuNum) {
            case 1: PTP[i+1]->totalView(); break;
            case 2: MBP[i+1]->stateView(); break;
            case 3: MBP[i]->goalView(*MBP[i]); break;
            default:break;
        }
    }
    displayTitle("매상 관리 종료");
    return;
}

bool deadLine(MoneyBox** MBP, int& i) {
    for (int j = 0; j <= i; j++){
        cout << "===========" << j + 1 << "번째 달 내역" << "============" << endl;
        MBP[j]->stateView();
        cout << "=====================================" << endl;
    }
    i++;
    
    if ( MBP[i]->getBePoint() >= MBP[i+1]->getProfit() ) {//지난달 손익분기점을 지금현재의순이익이 못넘었을때 return false;
        cout << "망해서 강제종료";
        return false;
    }    //망했어요
    if ( MBP[i]->getGoalSellM() <= MBP[i+1]->getSellM() ) {//흑자 , 적자에 따른 것 검사 문구로 표현해준다.
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

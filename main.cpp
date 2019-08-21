#include <iostream>
using namespace std;
#include "Product.h"
#include "ProductTotal.h"
#include "Ingredient.h"
#include "MoneyBox.h"

int menu(const char **menuList, int menuCnt); // 전달된 메뉴를 출력하고 정확한 메뉴번호를 리턴하는 
void saleMenu(); // 상품판매 메뉴
void stockMenu(); // 재고관리 메뉴 
void profitMenu(); // 매상관리 메뉴 
void displayTitle(string title); // 처리중인 내용 출력하기 위한 타이틀 출력함수 
void screen(ProductList&, ProductTotal&, IngredientList&, MoneyBox&); // 주메뉴를 출력하고 메뉴를 선택받아 반복적으로 주메뉴를 처리하는 함수
int inputInteger(char *message);  //  message를 출력하고 정수값 입력 받아 리턴(문자, 실수값 예외 처리)
int inputInteger(string message); //  message를 출력하고 정수값 입력 받아 리턴(문자, 실수값 예외 처리)
void myFlush();  // cin입력 버퍼를 모두 비우고 fail상태를 초기상태로 재설정
void deadLine(); // 마감 처리

int main() {
	ProductList PL;
	ProductTotal PT;
	IngredientList IL;
	MoneyBox MB;
	
	int month_cnt;
	cout << "운영할 개월수를 입력하시오 : ";
	cin >> month_cnt;
	screen(PL, PT, IL, MB);
	getchar(); getchar();
	return 0;
}

void screen(ProductList& PL, ProductTotal& PT, IngredientList& IL, MoneyBox& MB) {
	char *menuList[] = { "판매 관리","재고 관리","매상 관리","마감 하기" };
	int menuCnt = sizeof(menuList) / sizeof(menuList[0]);
	int menuNum;
	displayTitle("카페 운영 프로그램");
	while (true) {
		menuNum = menu(menuList, menuCnt);
		if (menuNum == menuCnt) { break; }
		switch (menuNum) {
		case 1:saleMenu() ; break;
		case 2:stockMenu(); break;
		case 3:profitMenu() ; break;
		case 4:deadLine() ; break;
		default: break;
		}
	}
	displayTitle("카페 운영 프로그램 종료");
	return;
}

int menu(const char **menuList, int menuCnt) {
	int i;
	int menuNum = 0; /* 입력된 메뉴 번호 저장 변수*/

	cout << endl << "==================================" << endl;
	for (i = 0; i<menuCnt; i++) {
		cout << i + 1 << "." << menuList[i] << endl;
	}
	cout << "==================================" << endl;
	while (menuNum<1 || menuNum>menuCnt) { /* 범위 내의 번호가 입력될 때 까지 반복*/
		menuNum = inputInteger("# 메뉴번호를 입력하세요 : ");

	}
	return menuNum;
}

void saleMenu() {
	char *menuList[] = { "아메리카노","카페라떼","카페모카","홍차","녹차","딸기에이드","레몬에이드","딸기스무디","초코스무디" };
	int menuCnt = sizeof(menuList) / sizeof(menuList[0]);
	int menuNum;
	int cnt;
	
	displayTitle("상품 판매");
	while (true) {
		menuNum = menu(menuList, menuCnt);
		cnt = inputInteger("몇 잔 판매 하시겠습니까? : ");
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

void stockMenu() {
	char *menuList[] = {"음료재료 구매","음식 재료 구매"};
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

void profitMenu() {
	char *menuList[] = { "매상 내역","목표 매출 출력" };
	int menuCnt = sizeof(menuList) / sizeof(menuList[0]);
	int menuNum;
	displayTitle("매상 관리");
	while (true) {
		menuNum = menu(menuList, menuCnt);
		if (menuNum == menuCnt) { break; }
		switch (menuNum) {
		case 1:
		case 2:
		default:break;
		}
	}
	displayTitle("매상 관리 종료");
	return;
}

void deadLine() {


}
void displayTitle(string title) { // 화면 타이틀 출력 함수 
	cout << endl << "------------------------------" << endl;
	cout << "    " << title << endl;
	cout << "------------------------------" << endl;
}

// message를 출력하고 정수값 입력 받아 리턴(문자, 실수값 예외 처리)
int inputInteger(char *message) {
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
	
	return ;
}

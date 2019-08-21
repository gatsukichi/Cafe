#include <iostream>
using namespace std;
#include "Ingredient.h"
#include "Product.h"


int menu(char **menuList, int menuCnt); // ���޵� �޴��� ����ϰ� ��Ȯ�� �޴���ȣ�� �����ϴ� 
void saleMenu(); // ��ǰ�Ǹ� �޴�
void stockMenu(); // ������ �޴� 
void profitMenu(); // �Ż���� �޴� 
void displayTitle(string title); // ó������ ���� ����ϱ� ���� Ÿ��Ʋ ����Լ� 
void screen(Product &rHa); // �ָ޴��� ����ϰ� �޴��� ���ù޾� �ݺ������� �ָ޴��� ó���ϴ� �Լ�
int inputInteger(char *message);  //  message�� ����ϰ� ������ �Է� �޾� ����(����, �Ǽ��� ���� ó��)
int inputInteger(string message); //  message�� ����ϰ� ������ �Է� �޾� ����(����, �Ǽ��� ���� ó��)
void myFlush();  // cin�Է� ���۸� ��� ���� fail���¸� �ʱ���·� �缳��
void deadLine(); // ���� ó��
int main()
{
	
	Product P;
	//IngredientList IL;
	int month_cnt;
	cout << "��� �������� �Է��Ͻÿ� : ";
	cin >> month_cnt;
	screen(P);
	getchar(); getchar();
	return 0;
}
void screen(Product &rHa)
{
	char *menuList[] = { "�Ǹ� ����","��� ����","�Ż� ����","���� �ϱ�" };
	int menuCnt = sizeof(menuList) / sizeof(menuList[0]);
	int menuNum;
	displayTitle("ī�� � ���α׷�");
	while (true)
	{
		menuNum = menu(menuList, menuCnt);
		if (menuNum == menuCnt) { break; }
		switch (menuNum)
		{
		case 1:saleMenu() ; break;
		case 2:stockMenu(); break;
		case 3:profitMenu() ; break;
		case 4:deadLine() ; break;
		default: break;
		}
	}
	displayTitle("ī�� � ���α׷� ����");
	return;
}
int menu(char **menuList, int menuCnt)
{
	int i;
	int menuNum = 0; /* �Էµ� �޴� ��ȣ ���� ����*/

	cout << endl << "==================================" << endl;
	for (i = 0; i<menuCnt; i++)
	{
		cout << i + 1 << "." << menuList[i] << endl;
	}
	cout << "==================================" << endl;
	while (menuNum<1 || menuNum>menuCnt)  /* ���� ���� ��ȣ�� �Էµ� �� ���� �ݺ�*/
	{
		menuNum = inputInteger("# �޴���ȣ�� �Է��ϼ��� : ");

	}
	return menuNum;
}
void saleMenu()
{
	char *menuList[] = { "�Ƹ޸�ī��","ī���","ī���ī","ȫ��","����","���⿡�̵�","�����̵�","���⽺����","���ڽ�����" };
	int menuCnt = sizeof(menuList) / sizeof(menuList[0]);
	int menuNum;
	displayTitle("��ǰ �Ǹ�");
	while (true)
	{
		menuNum = menu(menuList, menuCnt);
		if (menuNum == menuCnt) { break; }
		switch (menuNum)
		{
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
	displayTitle("��ǰ �Ǹ� ����");
	return;
}
void stockMenu()
{
	char *menuList[] = {"������� ����","���� ��� ����"};
	int menuCnt = sizeof(menuList) / sizeof(menuList[0]);
	int menuNum;
	displayTitle("��� ����");
	while (true)
	{
		menuNum = menu(menuList, menuCnt);
		if (menuNum == menuCnt) { break; }
		switch (menuNum)
		{
		case 1:
		case 2:
		default:break;
		}
	}
	displayTitle("��� ���� ����");
	return;
}
void profitMenu()
{
	char *menuList[] = { "�Ż� ����","��ǥ ���� ���" };
	int menuCnt = sizeof(menuList) / sizeof(menuList[0]);
	int menuNum;
	displayTitle("�Ż� ����");
	while (true)
	{
		menuNum = menu(menuList, menuCnt);
		if (menuNum == menuCnt) { break; }
		switch (menuNum)
		{
		case 1:
		case 2:
		default:break;
		}
	}
	displayTitle("�Ż� ���� ����");
	return;
}
void deadLine()
{


}
void displayTitle(string title) // ȭ�� Ÿ��Ʋ ��� �Լ�
{
	cout << endl << "------------------------------" << endl;
	cout << "    " << title << endl;
	cout << "------------------------------" << endl;
}
// message�� ����ϰ� ������ �Է� �޾� ����(����, �Ǽ��� ���� ó��)
int inputInteger(char *message)
{
	int number;

	while (1){
		cout << message;
		cin >> number;

		if (cin.get() == '\n'){
			return number;
		}

		myFlush();
	}
}
// message�� ����ϰ� ������ �Է� �޾� ����(����, �Ǽ��� ���� ó��)
int inputInteger(string message)
{
	int number;

	while (1){
		cout << message;
		cin >> number;

		if (cin.get() == '\n'){
			return number;
		}

		myFlush();
	}
}
// ��� : cin�Է� ���۸� ��� ���� fail���¸� �ʱ���·� �缳��
void myFlush()
{
	cin.clear();  // ������ �����Ǿ��ִ� flag����� ���� 0���� ���ʱ�ȭ
	while (cin.get() != '\n');  // ���๮�ڰ� ���ö����� ���۳��� ��� ���� ����
}

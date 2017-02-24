#include <iostream>
#include <stdlib.h> // random 함수 사용 가능.
#include <time.h>   // 시간을 다루는 해더

using namespace std;

void main(void)
{
	int iCash = 0; 
	int iYou  = 0;										// 너님, 너님의 돈
										// 너님이 쳐마실 음료
	cout << "□■■■■■□■□□□■■■■■□■□□■■■■■■□■□□□" << endl;
	cout << "□□□■□□□■□□□□■□■□□■■□□□□□■□□■□□□" << endl;
	cout << "□□■□■□□■■■□■■■■■□■□□□□□■□□□■□□□" << endl;
	cout << "□■□□□■□■□□□□□□□□□□□□□□■□□□□■□□□" << endl;
	cout << "■□□□□□■■□□□□■□□□□□□□□■□□□□□■□□□" << endl;
	cout << "□□□□□□□□□□□□■■■■■■□□■□□□□□□■□□□" << endl;
	system("pause");
	system("cls");

	cout << "금액을 넣어주십시오." << endl;
	cin >> iCash;
	system("pause");											// 일시정지
	system("cls");												// 화면 크리닝
		
	cout << "		짤그랑~!					   	  " << endl;
	cout << "현재 투입금액은 "<< iCash << "원 입니다." << endl;// 현재 금액
	
	system("pause");
	system("cls");
	
	while(0 <= iCash)
	{
		system("cls");
		cout << "현재 남은 금액은... " << iCash << "원 입니다." << endl;
		cout << "☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★"<< endl;
		cout << "원하시는 음료를 선택해주세요." << endl;
		cout << "1. 콜라 / 1000원"	<< endl;
		cout << "2. 사이다 / 900원"	<< endl;
		cout << "3. 환타 / 800원"	<< endl;
		cout << "4. 잔돈 반환"		<< endl;
		cin >> iYou;

		switch(iYou)
		{
		case 1:
			if (iCash >= 1000)
			{	
				cout << "콜라 선택 하셨습니다. 1000원 입니다." << (iCash -= 1000) << endl;
			}else if (iCash <= 1000)
				cout << "금액이 부족합니다. 다시 선택해주세요." << endl;
			system("pause");	
			continue;
		case 2:
			if	(iCash >= 900)
			{	
				cout << "사이다 선택 하셨습니다. 900원 입니다." << (iCash -= 900) << endl;
			}else if (iCash <= 900) 
				cout << "금액이 부족합니다. 다시 선택해주세요." << endl;
			system("pause");
			continue;
		case 3:
			if	(iCash >= 800)
			{   
				cout << "환타 선택 하셨습니다. 800원 입니다." << (iCash -= 800) << endl;
			}else if (iCash <= 800) 
				cout << "금액이 부족합니다. 다시 선택해주세요." << endl;
			system("pause");
			continue;
		case 4:
			cout << "잔돈 반환 됩니다. 남은 금액은 총" << iCash << "원 입니다." << endl;
			break;
		}//switch 종료
	system("cls");
	cout << "이용해주셔서 감사합니다." << endl;
	break;
	}
}

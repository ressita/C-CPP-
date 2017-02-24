#include <iostream>

using namespace std;

void main(void)
{
	//// if 구문
	
	int iKor = 0; // 헝가리안 표기 int 'i'
	int iEng = 0;
	int iMat = 0;
	int iSum = 0;
	double dAvg = 0; // 헝가리안 표기 double 'd'

	cout << "☆★☆★ 입력 ★☆★☆\n";

	cout << "국어 점수 :";  // 국어 점수 입력
	cin >> iKor;

	cout << "영어 점수 :";  // 영어 점수 입력
	cin >> iEng;			

	cout << "수학 점수 :";
	cin >> iMat;

	iSum = iKor + iEng + iMat;	// 국어 + 영어 + 수학
	dAvg = (float) iSum / 3;	// 국어 + 영어 + 수학 평균

	cout << "☆★☆★ 성적표 ★☆★☆\n";
	cout << "국어 점수 :";
	cout << iKor << endl;
	cout << "영어 점수 :";
	cout << iEng << endl;
	cout << "수학 점수 :";
	cout << iMat << endl;
	cout << "총점 :";
	cout << iSum << endl;
	cout << "평균 :";
	cout << fixed;
	cout.precision(4);
	cout << dAvg << endl;

	if (dAvg >= 90)
	{
		cout << "학생의 등급은 'A'입니다." << endl;
	}else if (dAvg >= 80)
	{
		cout << "학생의 등급은 'B'입니다." << endl;
	}else if (dAvg >= 70)
	{
		cout << "학생의 등급은 'C'입니다." << endl;
	}else if (dAvg >= 60)
	{
		cout << "학생의 등급은 'D'입니다." << endl;
	}
	else
	{
		cout << "학생의 등급은 'F'입니다." << endl;
	}
}

{
	//// switch 구문

	int iKor = 0; // 헝가리안 표기 int 'i'
	int iEng = 0;
	int iMat = 0;
	int iSum = 0;
	double dAvg = 0; // 헝가리안 표기 double 'd'

	cout << "☆★☆★ 입력 ★☆★☆\n";

	cout << "국어 점수 :";  // 국어 점수 입력
	cin >> iKor;

	cout << "영어 점수 :";  // 영어 점수 입력
	cin >> iEng;			

	cout << "수학 점수 :";
	cin >> iMat;

	iSum = iKor + iEng + iMat;	// 국어 + 영어 + 수학
	dAvg = (float) iSum / 3;	// 국어 + 영어 + 수학 평균

	cout << "☆★☆★ 성적표 ★☆★☆\n";
	cout << "국어 점수 :";
	cout << iKor << endl;
	cout << "영어 점수 :";
	cout << iEng << endl;
	cout << "수학 점수 :";
	cout << iMat << endl;
	cout << "총점 :";
	cout << iSum << endl;
	cout << "평균 :";
	cout << fixed;
	cout.precision(4);
	cout << dAvg << endl;
	
	int iAvg = dAvg;			// Double 에서 int로 변환. (성공!) 는 무리하게 사용하지 않도록 주의!

	switch (iAvg / 10)
	{
	case 6 :
			cout << "학생의 등급은 'D'입니다." << endl;
			break;
	case 7 :
			cout << "학생의 등급은 'C'입니다." << endl;
			break;
	case 8 :
			cout << "학생의 등급은 'B'입니다." << endl;
			break;
	case 9 :
			cout << "학생의 등급은 'A'입니다." << endl;
			break;
	default :
			cout << "학생의 등급은 'F'입니다." << endl;
	}
}

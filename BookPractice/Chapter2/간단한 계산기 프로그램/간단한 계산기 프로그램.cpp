/*
2019-09-04
어서와 c++는 처음이지! 
chapter2
어떤 연산을 할 건지와 숫자 2개를 입력받아 연산결과를 반환하는 프로그램
+, -, *, / 연산만 지원한다.
*/


#include <iostream>

using namespace std;

int main(void)
{
	char type;
	int n1, n2;

	cout << "연산의 종류: ";
	cin >> type;

	cout << "숫자를 입력하시오: ";
	cin >> n1 >> n2;

	switch (type)
	{
	case '+':
		cout << "계산 결과: " << n1 + n2 << endl;
		break;
	case '-':
		cout << "계산 결과: " << n1 - n2 << endl;
		break;
	case '*':
		cout << "계산 결과: " << n1 * n2 << endl;
		break;
	case '/':
		cout << "계산 결과: " << n1 / n2 << endl;
		break;
	default:
		cout << "해당 기능을 지원하지 않습니다. 계산기를 종료합니다." << endl;
		break;
	}

	return 0;
}

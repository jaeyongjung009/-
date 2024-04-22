# include "calculator.h"

int main()
{
	double x;
	double y;
	char oper;
	double sum = 0;



	while (true) {
		cout << "계산할 수식(ex: X + Y = K): ";
		cin >> x >> oper >> y;

		if (oper == 'Q') {
			cout << "프로그램 종료" << endl;
			break;
		}
		else if (oper == 'C') {
			Calculator reset();
			cout << "초기화 되었습니다." << endl;
		}
		Calculator cal(x, oper, y, sum);
		cal.print();
		sum = cal.getsum();
		x = sum;
	
	}
	return 0;
}
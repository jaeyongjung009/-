# include "calculator.h"

int main()
{
	double x;
	double y;
	char oper;
	double sum = 0;



	while (true) {
		cout << "����� ����(ex: X + Y = K): ";
		cin >> x >> oper >> y;

		if (oper == 'Q') {
			cout << "���α׷� ����" << endl;
			break;
		}
		else if (oper == 'C') {
			Calculator reset();
			cout << "�ʱ�ȭ �Ǿ����ϴ�." << endl;
		}
		Calculator cal(x, oper, y, sum);
		cal.print();
		sum = cal.getsum();
		x = sum;
	
	}
	return 0;
}
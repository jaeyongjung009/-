#include "TicTacToe.h"

int main(void) {
	TicTacToe bingo;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			bingo.tic_array[i][j] = 'e';
		}
	}
	//�迭�� ������ full() == 1
	while (bingo.full() == 0) {
		bingo.pick();
		bingo.show();
		// correct �� 1�� �����ϸ� 1�� ����� ��� 2�� �����ϸ� 2�� ����� ���
		if (bingo.correct() == 1) {
			std::cout << "1�� ����� ��� !";
			return 0;
		}
		else if (bingo.correct() == 2) {
			std::cout << "2�� ����� ��� !";
			return 0;
		}
		else continue;

	}
	if (bingo.full() == 1) std::cout << "�迭�� ��� ����Ͽ����ϴ�. �ٽ� ���α׷��� �������ּ���.";
	return 0;
}
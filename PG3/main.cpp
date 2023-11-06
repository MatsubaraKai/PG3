#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <ctime>
#include <cstdlib>

typedef void (*PFunc)(int*);

void DiceResult(int* userInput) {

	int result = 0;
	int answer = 0;

	// ランダムで結果を決める
	std::srand(static_cast<unsigned int>(time(NULL)));
	result = rand() % 6 + 1;
	answer = result % 2;

	// 結果表示
	if (answer == 1) {
		printf("%d。奇数でした。\n", result);
	}
	else {
		printf("%d。偶数でした。\n", result);
	}

	if (answer == *userInput) {
		printf("あたりです\n");
	}
	else {
		printf("はずれです\n");
	}

}

void SetTimeOut(PFunc p, int second, int* funcArgument) {

	Sleep(second * 1000);

	p(funcArgument);

}
int main() {
	// 変数
	int userInput = 0;

	// 奇数か偶数入力受付
	printf("偶数なら0、奇数なら1を入力\n");
	do {
		scanf_s("%d", &userInput);
	} while (userInput != 0 && userInput != 1);

	// 結果表示
	printf("結果は");
	PFunc p;
	p = &DiceResult;
	// 三秒待つ
	SetTimeOut(p, 3, &userInput);

	return 0;

}
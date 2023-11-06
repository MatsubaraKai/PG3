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

void SetTimeOut(int second, PFunc p, int* funcArgument) {

	Sleep(second * 1000);

	p(funcArgument);

}
int main() {

	char str[] = "あ";
	printf("%s", str);
	return 0;

}
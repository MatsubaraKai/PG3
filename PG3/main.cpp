#include <stdio.h>
#include <Windows.h>
#include <cstdlib>
#include <functional>
#include <ctime>

typedef void (*PFunc)(int*);

void SetTimeOut(std::function <void()> func, int second)
{
	for (second; second > 0; second--)
	{
		printf("*\n");
		Sleep(1000);
	}
	func();
}

int main() {
	int Input = 0;

	// 入力受付
	printf("偶数なら0、奇数なら1を入力\n");
	do {
		scanf_s("%d", &Input);
	} while (Input != 0 && Input != 1);

	// 結果表示
	printf("結果は\n");
	std::function<void()> func = [=]() {

		int result = 0;
		int answer = 0;

		std::srand(static_cast<unsigned int>(time(NULL)));
		result = rand() % 6 + 1;
		answer = result % 2;

		if (answer == 1) {
			printf("%d。奇数でした。\n", result);
		}
		else {
			printf("%d。偶数でした。\n", result);
		}
		if (answer == Input) {
			printf("あたりです\n");
		}
		else {
			printf("はずれです\n");
		}

	};
	SetTimeOut(func, 3);
	return 0;
}
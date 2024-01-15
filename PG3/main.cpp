#include <iostream>
#include <Windows.h>
#include <thread>
#include <stdio.h>
#include <functional>

int main() {
	int num;
	std::function<void(int)> thread1 = [=](int num) {
		num = 1;
		printf("thread%d\n", num);
	};

	std::function<void(int)> thread2 = [=](int num) {
		num = 2;
		printf("thread%d\n", num);
	};

	std::function<void(int)> thread3 = [=](int num) {
		num = 3;
		printf("thread%d\n", num);
	};

	std::thread th1(thread1, num);
	th1.join();
	std::thread th2(thread2, num);
	th2.join();
	std::thread th3(thread3, num);
	th3.join();


	return 0;

}
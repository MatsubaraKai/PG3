#include <Windows.h>
#include <iostream>
#include <string>
#include <chrono>
using namespace std;

int main() {

	chrono::steady_clock::time_point begin = chrono::steady_clock::now();

	string a(100000, 'a');

	//copy
	begin = chrono::steady_clock::now();
	string copy = a;
	chrono::steady_clock::time_point copyTimePoint = chrono::steady_clock::now();
	chrono::microseconds copyTime = chrono::duration_cast<chrono::microseconds>(copyTimePoint - begin);

	//move
	begin = chrono::steady_clock::now();
	string move = std::move(a);
	chrono::steady_clock::time_point moveTimePoint = chrono::steady_clock::now();
	chrono::microseconds moveTime = chrono::duration_cast<chrono::microseconds>(moveTimePoint - begin);

	cout << "copy : " << copyTime.count() << " microsecond" << endl;
	cout << "move : " << moveTime.count() << " microsecond" << endl;

	return 0;
}
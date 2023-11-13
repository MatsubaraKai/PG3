#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <functional>

template <typename T1, typename T2>
class MyMath {
public:
	T1 a;
	T2 b;
	MyMath(T1 a, T2 b) {
		this->a = a;
		this->b = b;
	}
	auto Min() {
		return a <= (b) ? a : b;
	};
};
void PrintNum(int num)
{
	printf("%d\n", num);
}
void PrintNum(float num)
{
	printf("%f\n", num);
}
void PrintNum(double num)
{
	printf("%lf\n", num);
}

int main() {

	MyMath<int, int> c1(81, 810);
	MyMath<int, float> c2(810, 8.1f);
	MyMath<int, double> c3(81, 8.1);
	MyMath<float, float> c4(8.1f, -8.1f);
	MyMath<float, double> c5(81.0f, 8.1);
	MyMath<double, double> c6(0.81, 0.081);
	
	PrintNum(c1.Min());
	PrintNum(c2.Min());
	PrintNum(c3.Min());
	PrintNum(c4.Min());
	PrintNum(c5.Min());
	PrintNum(c6.Min());

	
	return 0;
}

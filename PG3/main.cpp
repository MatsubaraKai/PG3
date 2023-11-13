#include <iostream>
#include <Windows.h>
#include <stdio.h>

template <typename T1, typename T2>
class MyMath {
public:

	static double Min(T1 a, T2 b);
};

template<typename T1, typename T2>
double  MyMath<T1, T2>::Min(T1 a, T2 b)
{

	if (static_cast<double>(a) < static_cast<double>(b)) {
		return static_cast<double>(a);
	}

	return static_cast<double>(b);
}

int main() {

	double result = 0.0;

	result = MyMath<int, int>::Min(8, 10);
	printf("%f\n", result);

	result = MyMath<int, float>::Min(8, 10.0f);
	printf("%f\n", result);

	result = MyMath<int, double>::Min(10, 8.1);
	printf("%f\n", result);

	result = MyMath<float, float>::Min(0.8f, 0.1f);
	printf("%f\n", result);

	result = MyMath<float, double>::Min(8.1f, 8.2);
	printf("%f\n", result);

	result = MyMath<double, double>::Min(81.0, 8.1);
	printf("%f\n", result);


	return 0;
}

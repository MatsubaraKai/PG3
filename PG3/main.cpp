#include <stdio.h>

template <typename T>
T Min(T a, T b) {

	if (a <= b) {
		return static_cast<T>(a);
	}
	else {
		return static_cast<T>(b);
	}
}

template<>
char Min<char>(char a, char b) {

	printf("�����ȊO�͑���ł��܂���");

	return 0;
}

int main() {

	int intA = 10;
	int intB = 20;

	float floatA = 10.5f;
	float floatB = 10.2f;

	double doubleA = 10.3;
	double doubleB = 10.8;

	char charA = 'A';
	char charB = 'B';

	//int�^
	printf("%d\n", Min<int>(intA, intB));
	//float�^
	printf("%f\n", Min<float>(floatA, floatB));
	//double�^
	printf("%lf\n", Min<double>(doubleA, doubleB));
	//char�^
	Min<char>(charA, charB);

	return 0;
}
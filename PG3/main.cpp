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

	printf("数字以外は代入できません");

	return 0;

}

int main() {

	int intA = 114;
	int intB = 514;

	float floatA = 11.4f;
	float floatB = 51.4f;

	double doubleA = 11.4;
	double doubleB = 51.4;

	char charA = 'A';
	char charB = 'B';

	//int型
	printf("%d\n", Min<int>(intA, intB));
	//float型
	printf("%f\n", Min<float>(floatA, floatB));
	//double型
	printf("%lf\n", Min<double>(doubleA, doubleB));
	//char型
	Min<char>(charA, charB);

	return 0;

}
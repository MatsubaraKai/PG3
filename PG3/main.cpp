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

	printf("”šˆÈŠO‚Í‘ã“ü‚Å‚«‚Ü‚¹‚ñ");

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

	//intŒ^
	printf("%d\n", Min<int>(intA, intB));
	//floatŒ^
	printf("%f\n", Min<float>(floatA, floatB));
	//doubleŒ^
	printf("%lf\n", Min<double>(doubleA, doubleB));
	//charŒ^
	Min<char>(charA, charB);

	return 0;
}
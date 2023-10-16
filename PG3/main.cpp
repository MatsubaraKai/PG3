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

	int intA = 114;
	int intB = 514;

	float floatA = 8.10f;
	float floatB = 19.1f;

	double doubleA = 11.4;
	double doubleB = 51.4;

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
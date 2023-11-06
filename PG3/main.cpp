#include <iostream>
#include <Windows.h>
#include <stdio.h>

class Number {

public: // メンバ関数

	Number() = default;
	~Number() = default;

	virtual void NameDisplay() = 0;

};

class Zero : public Number {

public: // メンバ関数

	Zero() = default;
	~Zero() = default;

	virtual void NameDisplay();

};

void Zero::NameDisplay()
{
	printf("0\n");
}

class One : public Number {

public: // メンバ関数

	One() = default;
	~One() = default;

	virtual void NameDisplay();

};

void One::NameDisplay()
{
	printf("1\n");
}

class Two : public Number {

public: // メンバ関数

	Two() = default;
	~Two() = default;

	virtual void NameDisplay();

};

void Two::NameDisplay()
{
	printf("2\n");
}

class Three : public Number {

public: // メンバ関数

	Three() = default;
	~Three() = default;

	virtual void NameDisplay();

};

void Three::NameDisplay()
{
	printf("3\n");
}

class Four : public Number {

public: // メンバ関数

	Four() = default;
	~Four() = default;

	virtual void NameDisplay();

};

void Four::NameDisplay()
{
	printf("4\n");
}

int main() {

	Number* numbers[5];
	numbers[0] = new Zero();
	numbers[1] = new One();
	numbers[2] = new Two();
	numbers[3] = new Three();
	numbers[4] = new Four();

	for (size_t i = 0; i < 5; i++) {
		numbers[i]->NameDisplay();
		delete numbers[i];
	}
}
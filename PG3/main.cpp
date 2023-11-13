#include <iostream>
#include <Windows.h>
#include <stdio.h>

class Food {

public: // メンバ関数

	Food() = default;
	~Food() = default;

	virtual void NameDisplay() = 0;

};

class Meat : public Food {

public: // メンバ関数

	Meat() = default;
	~Meat() = default;

	virtual void NameDisplay();

};

void Meat::NameDisplay()
{
	printf("肉うまい\n");
}

class Vegetable : public Food {

public: // メンバ関数

	Vegetable() = default;
	~Vegetable() = default;

	virtual void NameDisplay();

};

void Vegetable::NameDisplay()
{
	printf("野菜うまい\n");
}

class Fruit : public Food {

public: // メンバ関数

	Fruit() = default;
	~Fruit() = default;

	virtual void NameDisplay();

};

void Fruit::NameDisplay()
{
	printf("果実うまい\n");
}

int main() {

	Food* foods[3];
	foods[0] = new Meat();
	foods[1] = new Vegetable();
	foods[2] = new Fruit();

	for (size_t i = 0; i < 3; i++) {
		foods[i]->NameDisplay();
		delete foods[i];
	}
}
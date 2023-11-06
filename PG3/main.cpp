#include <iostream>
#include <Windows.h>
#include <stdio.h>

class Enemy {

public:
	enum Phase {
		Approach,
		Shot,
		Leave
	};

public:

	void Initialize();
	void Update();
	void Proximity();
	void Shooting();
	void Withdrawal();

private:

	static void (Enemy::* spFuncTable[])();
	Phase phase_;
};

void (Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::Proximity, // 近接
	&Enemy::Shooting,  // 射撃
	&Enemy::Withdrawal // 離脱
};

void Enemy::Initialize()
{
	phase_ = Phase::Approach;
}

void Enemy::Update()
{
	(this->*spFuncTable[static_cast<size_t>(phase_)])();
}

void Enemy::Proximity()
{
	printf("近接\n");
	phase_ = Phase::Shot;
}

void Enemy::Shooting()
{
	printf("射撃\n");
	phase_ = Phase::Leave;
}

void Enemy::Withdrawal()
{
	printf("離脱\n");
	phase_ = Phase::Approach;
}

int main() {

	// エネミー宣言
	Enemy* enemy = new Enemy();
	enemy->Initialize();

	for (size_t i = 0; i < 3; i++) {
		// エネミー更新
		enemy->Update();
		// 1秒
		Sleep(1000);
	}
	delete enemy;
	return 0;
}
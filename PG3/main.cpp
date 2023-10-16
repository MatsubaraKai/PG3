#include <stdio.h>

int Recursive(int time, int hourlyWage) {

	int wages = 0; //����
	int nextHourlyWage = 0; //���̎���

	wages = hourlyWage;

	if (time - 1 > 0) {
		nextHourlyWage = hourlyWage * 2 - 50;
		wages += Recursive(time - 1, nextHourlyWage);
	}
	return wages;
}

int main() {

	//�萔
	const int kGeneralHourlyWage = 1072; //��ʓI�Ȓ����̌n�̎���
	const int kRecursiveHourlyWage = 100; //�ċA�I�Ȓ����̌n�̍ŏ��̎���

	//�ϐ�
	int time = 0; //��������
	int wages = 0; //����

	//�����ԓ�����
	printf("�����ԓ�����");
	scanf_s("%d", &time);

	//��ʓI�Ȓ����̌n
	wages = kGeneralHourlyWage * time;
	printf("��ʓI�Ȓ����̌n %d�~\n", wages);

	//�ċA�I�Ȓ����̌n
	wages = Recursive(time, kRecursiveHourlyWage);
	printf("�ċA�I�Ȓ����̌n %d�~\n", wages);

	return 0;
}
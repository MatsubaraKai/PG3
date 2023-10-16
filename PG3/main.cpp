#include <stdio.h>

int Recursive(int time, int hourlyWage) {

	int wages = 0; //‹‹—¿
	int nextHourlyWage = 0; //Ÿ‚Ì‹‹

	wages = hourlyWage;

	if (time - 1 > 0) {
		nextHourlyWage = hourlyWage * 2 - 50;
		wages += Recursive(time - 1, nextHourlyWage);
	}
	return wages;
}

int main() {

	//’è”
	const int kGeneralHourlyWage = 1072; //ˆê”Ê“I‚È’À‹à‘ÌŒn‚Ì‹‹
	const int kRecursiveHourlyWage = 100; //Ä‹A“I‚È’À‹à‘ÌŒn‚ÌÅ‰‚Ì‹‹

	//•Ï”
	int time = 0; //“­‚­ŠÔ
	int wages = 0; //‹‹—¿

	//‰½ŠÔ“­‚­‚©
	printf("‰½ŠÔ“­‚­‚©");
	scanf_s("%d", &time);

	//ˆê”Ê“I‚È’À‹à‘ÌŒn
	wages = kGeneralHourlyWage * time;
	printf("ˆê”Ê“I‚È’À‹à‘ÌŒn %d‰~\n", wages);

	//Ä‹A“I‚È’À‹à‘ÌŒn
	wages = Recursive(time, kRecursiveHourlyWage);
	printf("Ä‹A“I‚È’À‹à‘ÌŒn %d‰~\n", wages);

	return 0;
}
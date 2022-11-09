#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>

#define CRT_SECURE_NO_WARNINGS
void calculate()
{

}
void team()
{
	printf("조장 : \n");
	Sleep(500);
	printf("티원 : \n\n\n\n");
	Sleep(5000);
	system("cls");
	mainmenu();
}
void mainmenu()
{
	printf("-------------------");
	printf("\n\n");
	Sleep(500);
	printf("**** 공학용 계산기 **** ");
	printf("\n\n");
	Sleep(500);
	printf("-------------------\n");
	Sleep(500);
	printf("1 계산기 ");
	printf("\n");
	printf("2 참여 팀원");
	printf("\n");
	printf("3 exit");
	printf("\n\n");
	printf("번호 입력 : ");

	int num1;

	scanf("%d", &num1);

	switch (num1)
	{
	case 1:
		calculate();
		system("cls");
	case 2:
		team();
		system("cls");
	case 3:
		system("cls");
		exit();
	default:
		printf("ERROR");
		Sleep(1000);
		system("cls");
		mainmenu();
	}


}

int main()
{
	mainmenu();
	return 0;
}
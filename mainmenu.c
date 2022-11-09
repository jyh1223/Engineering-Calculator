#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>

#define CRT_SECURE_NO_WARNINGS
void calculate()
{
	int num1;
	printf("1. 사칙연산\n");
	printf("2. 역수 구하기\n");
	printf("3. 양수 / 음수\n");
	printf("4. 거듭제곱 / 거듭제곱근\n");
	printf("5. 삼각함수\n");
	printf("6. log 함수\n");
	printf("7. 팩토리얼 구하기\n");
	printf("8. 메인메뉴\n\n");
	printf("번호 입력 : ");
	scanf("%d", &num1);

	switch (num1)
	{
	case 1:
		printf("1");
		system("cls");
		//사칙연산 함수로 이동
	case 2:
		system("cls");
		//역수 구하기 함수로 이동
	case 3:
		system("cls");
		//양수 / 음수 함수로 이동
	case 4:
		system("cls");
		//거듭제곱 / 거듭제곱근 함수로 이동
	case 5:
		system("cls");
		//삼각함수 함수로 이동
	case 6:
		system("cls");
		//log 함수 함수로 이동
	case 7:
		system("cls");
		//팩토리얼 함수로 이동
	case 8:
		system("cls");
		//메인메뉴로 돌아감
	default:
		printf("ERROR\n");
		Sleep(1000);
		system("cls");
		calculate();
	}
}
void team()
{
	printf("조장 : \n");
	Sleep(1000);
	printf("팀원 : \n\n\n\n");
	Sleep(5000);
	system("cls");
}

int main()
{
	while (1)
	{
		printf("-----------------------");
		printf("\n\n");
		Sleep(500);
		printf("**** 공학용 계산기 **** ");
		printf("\n\n");
		Sleep(500);
		printf("-----------------------\n");
		Sleep(500);
		printf("1. 계산기\n");
		printf("2. 참여 팀원\n");
		printf("3. 종료\n");
		printf("번호 입력 : ");

		int num1;

		scanf("%d", &num1);

		switch (num1)
		{
		case 1:
			system("cls");
			calculate();
		case 2:
			system("cls");
			team();
		case 3:
			system("cls");
			return 0;
		default:
			printf("ERROR");
			Sleep(1000);
			system("cls");
		}
	}
}
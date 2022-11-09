#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main(void){
   double a = 0.0, b = 0.0, result = 0.0;
    bool useRecycle = false;
    char ch;

    printf("현재결과를 다음계산에 사용하겠습니까?(y or n) : ");

        fflush(stdin);



        scanf("%c", &ch);



        if (ch == 'y') {

            a = result;

            useRecycle = true;

        }

        else useRecycle = false;


    return 0;
}
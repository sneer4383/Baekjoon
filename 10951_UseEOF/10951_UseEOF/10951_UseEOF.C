#include <stdio.h>
int main(void)
{
    int num1, num2;

    while (scanf("%d", &num1) != EOF) //EOF(ctr+Z 3번 입력) 입력시 프로그램 종료
    {
        scanf("%d", &num2);
        printf("%d \n", num1 + num2);
    }
}
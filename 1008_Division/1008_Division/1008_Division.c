#include <stdio.h>

int main(void)
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    double result = (double)num1 / (double)num2;
    printf("%.9lf", result); //9째자리수까지 출력
    return 0;
}

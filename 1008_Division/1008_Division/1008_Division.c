#include <stdio.h>

int main(void)
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    double result = (double)num1 / (double)num2;
    printf("%.9lf", result); //9°�ڸ������� ���
    return 0;
}

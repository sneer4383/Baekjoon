#include <stdio.h>

int main(void)
{
    int N;
    char num[100];
    int sum = 0;

    scanf("%d %s", &N, &num);

    for (int i = 0;i < N;i++)
    {
        sum += (num[i] - '0');
    }
    printf("%d", sum);
    return 0;
}

/*
입력된 숫자의 1,10,100...의 자리수를 %,/가 아닌 문자열로 다루는 방법
이때 숫자(문자)또한 아스키코드값을 갖는 것을 주의! '0'=48
*/
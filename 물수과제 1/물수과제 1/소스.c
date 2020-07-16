#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    scanf("%lf", &x);

    double y;
    y = x + sqrt(x * x + 1);

    long double r;
    r = log(y)-sin(x);

    printf("result: %Le", r);

    return 0;
}


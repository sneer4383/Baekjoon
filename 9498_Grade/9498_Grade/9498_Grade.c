#include <stdio.h>

int main(void)
{
    int result;
    scanf("%d", &result);

    if (90 <= result && result<= 100)
        printf("A");
    else if (80 <= result && result <= 89)
        printf("B");
    else if (70 <= result && result <= 79)
        printf("C");
    else if (60 <= result && result <= 69)
        printf("D");
    else
        printf("F");
    return 0;
}
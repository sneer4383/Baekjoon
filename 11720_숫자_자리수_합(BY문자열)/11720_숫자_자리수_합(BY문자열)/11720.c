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
�Էµ� ������ 1,10,100...�� �ڸ����� %,/�� �ƴ� ���ڿ��� �ٷ�� ���
�̶� ����(����)���� �ƽ�Ű�ڵ尪�� ���� ���� ����! '0'=48
*/
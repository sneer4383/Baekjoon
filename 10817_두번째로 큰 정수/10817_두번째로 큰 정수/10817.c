#include <stdio.h>
int main(void)
{
    int arr[3];
    int temp;
    for (int i = 0;i < 3;i++)
        scanf("%d", &arr[i]);
    for (int i = 0;i < 3;i++)   //�������� ����
    {
        for (int j = 0;j < (3 - 1) - i;j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("%d", arr[1]);   //�������� ���� �ι�° ���
    return 0;
}
/*�� �ڵ� Ȱ��� n�� �Է½� n��°�� ū ���� ����ϴ� ���α׷� �ۼ�*/
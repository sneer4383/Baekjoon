#include <stdio.h>
int main(void)
{
    int arr[3];
    int temp;
    for (int i = 0;i < 3;i++)
        scanf("%d", &arr[i]);
    for (int i = 0;i < 3;i++)   //오름차순 정렬
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
    printf("%d", arr[1]);   //오름차순 정렬 두번째 요소
    return 0;
}
/*위 코드 활용시 n개 입력시 n번째로 큰 정수 출력하는 프로그램 작성*/
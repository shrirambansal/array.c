#include <stdio.h>

int main()
{
    int n = 0;
    int N, k;
    printf("enter the no. arrays value : \n");
    scanf("%d", &N);
    for (int j = 0; j < N; j++)
    {
        printf("Enter the value of arr[%d] is : \n", j);
        scanf("%d", &k);
        if (k >= 0)
        {
            n = n + 1;
        }
    }

    printf("count %d", n);
    return 0;
}
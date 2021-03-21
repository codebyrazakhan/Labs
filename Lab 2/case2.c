#include <stdio.h>
int main()
{
    int i, N, x, total, missing_num, sum = 0, A[] = {1, 2, 3, 4, 5, 6, 7, 8, 10};
    N = sizeof(A) / sizeof(A[0]);
    x = N + 1;
    total = x * (x + 1) / 2;
    for (int i = 0; i < N; i++)
    {
        sum = sum + A[i];
    }
    missing_num = total - sum;
    printf("The missing number is %d \n", missing_num);
    return 0;
}
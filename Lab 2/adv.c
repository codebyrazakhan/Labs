#include <stdio.h>

int find_missing(int A[], int N)
{
    int m = N + 1;
    //sum of 1 to n+1 integer is n*(n+1)/2
    int total = m * (m + 1) / 2;
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum = sum + A[i];
    }
    /* the missing number is difference between
expected sum and actual sum of numbers in array */
    return total - sum;
}

int main()
{
    int A[] = {1, 2, 3, 5};
    int N = sizeof(A) / sizeof(A[0]);
    printf("The missing number is %d \n", find_missing(A, N));
    return 0;
}
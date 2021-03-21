// #include <stdio.h>
// int main()
// {
//     int array[10];
//     int length, min, max, o;
//     printf("Enter number of elements:");
//     scanf("%d", &o);
//     printf("Enter elements:");
//     for(int i = 0; i < 0; i++)
//     {
//         Scanf("% d", &array[i]);
//     }
//     length = 0;
//     while(array[length] != NULL){
//         length++;
//         } Minmax(array, length, &min, &max);
//     printf("\n minimum = %d", min);
//     printf("\n maximum = %d", max);
//     return 0;
// }
// void minmax(int array[], int length, int *min, int *max)
// {
//     int i;
//     *min = *max = array[0];
//     for(i = 1; i < length; i++)
//     {
//         if(*min > array[i])
//             *min = array[i];
//         else if (*max < array[i])
//             *max = array[i];
//     }
// }


#include <stdio.h>
void minmax(int array[], int length, int *min, int *max);
int main()
{
    int arr[] = { 3, 4, 33, 44, 5, 71, 96, 57, 48, 90};
    int mini, maxi, length;
    length = sizeof(arr) / sizeof(arr[0]);
    printf("Total number of elements in array =%d\n", sizeof(arr) / sizeof(arr[0]));
    minmax(arr, length, &mini, &maxi);
    printf("Min value of array = %d\n", mini);
    printf("Max value of array = %d \n", maxi);
    return 0;
}
void minmax(int array[], int length, int *min, int *max)
{
    *min = *max = array[0];
      int i = 1;
      while (i < length)
    {
        if (array[i] > *max)
         *max = array[i];
          if (array[i] < *min)
          *min = array[i];
           i++;
    }
}
#include <iostream>
using namespace std;
void minmax(int array[], int length, int &min, int &max);
int main()
{
    int p, q, l;
    cout << "Enter the Length of the array " << endl;
    cin >> l;
    int arr[l];
    cout << "Enter the elements of array" << endl;
    for (int i = 0; i < l; i++){
        cin >> arr[i];
    }

    minmax(arr, l, p, q);
    cout << "Min:" << p << endl;
    cout << "Max:" << q << endl;
    return 0;
}
void minmax(int array[], int length, int &min, int &max)
{
    min = array[0];
    max = array[0];
    for (int i = 0; i < length; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
        if (array[i] > max)
        {
        }
        max = array[i];
    }
}
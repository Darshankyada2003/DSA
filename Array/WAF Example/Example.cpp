#include <iostream>
using namespace std;

// waf to calculate sum  & product of all number in an array
/* int sumOfproduct(int arr[], int sz)
{
   int sum = 0;
   int product = 1;

   for (int i = 0; i < sz; i++)
   {
       sum += arr[i];
       product *= arr[i];
   }

   cout << "Sum of array = " << sum << endl;
   cout << "product of array = " << product << endl;
}
int main()
{
   int arr[] = {2, 3, 4};
   int sz = sizeof(arr) / sizeof(arr[0]);

   sumOfproduct(arr, sz);
   return 0;
}
*/

// array in swap min and max num
/*
int swapOfminmax(int arr[], int size)
{
    int maxIndex = arr[0];
    int minIndex = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < minIndex)
        {
            minIndex = arr[i];
        }
        if (arr[i] > maxIndex)
        {
            maxIndex = arr[i];
        }
    }
    cout << minIndex << endl;
    cout << maxIndex << endl;

    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;

    cout << "Array after swaping max and min: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {2, 15, 3, 4, -1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    swapOfminmax(arr, size);

    return 0;
}
*/

// print the all unique number in array
/*
int unique(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool isUnique = true;
        for (int j = 0; j < size; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}
int main()
{
    int arr[] = {2, 3, 4, 5, 1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Unique value : ";
    unique(arr, size);

    return 0;
}
*/

// print intersection of 2 array remove duplicate

int interSection(int arr1[], int size1, int arr2[], int size2)
{
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
    cout << endl;
}
int main()
{
    int arr1[] = {
        2,
        3,
        4,
        5,
    };
    int arr2[] = {4, 5, 6, 7};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    interSection(arr1, size1, arr2, size2);
    return 0;
}
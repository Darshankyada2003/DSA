#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    // bubble sorting
    //  for (int i = 0; i < n - 1; i++)
    //  {
    //      for (int j = 0; j < n - i - 1; j++)
    //      {
    //          if (arr[j] > arr[j + 1])
    //          {
    //              swap(arr[j], arr[j + 1]);
    //          }
    //      }
    //  }

    // selection sort
    //  for (int i = 0; i < n - 1; i++)
    //  {
    //      int smallIndex = i;
    //      for (int j = i + 1; j < n; j++)
    //      {
    //          if (arr[j] < arr[smallIndex])
    //          {
    //              smallIndex = j;
    //          }
    //      }
    //      swap(arr[i], arr[smallIndex]);
    //  }

    //inserting sorting 
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;

        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}

int main()
{
    int arr[] = {4, 1, 5, 2, 3};
    int n = 5;

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    int a = 10, b = 20;
    int temp = a;
    a = b;
    b = temp;

    cout << "A = " << a << " B = " << b << endl;

    return 0;
}
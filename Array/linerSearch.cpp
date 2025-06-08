#include <iostream>
using namespace std;

int linerSearch(int arr[], int sz, int target)
{
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sz = 10;
    int target = 8;

    cout << linerSearch(arr, sz, target) << endl;
    return 0;
}
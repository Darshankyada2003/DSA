#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int tar)
{
    int st = 0, end = arr.size() - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (tar > arr[mid])
        {
            st = mid + 1;
        }
        else if (tar < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int recursiveBinary(vector<int> arr, int tar, int st, int end)
{
    if (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (tar > arr[mid])
        {
            return recursiveBinary(arr, tar, mid + 1, end);
        }
        else if (tar < arr[mid])
        {
            return recursiveBinary(arr, tar, st, mid - 1);
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr1 = {-1, 2, 3, 4, 5, 6, 7, 12};
    int tar1 = 12;
    vector<int> arr2 = {-1, 0, 2, 3, 4, 6, 7, 12};
    int tar2 = 0;

    // cout << binarySearch(arr1, tar1) << endl;
    cout << recursiveBinary(arr2, tar2, 0, arr2.size() - 1) << endl;
    return 0;
}
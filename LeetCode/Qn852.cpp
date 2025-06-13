#include <iostream>
#include <vector>
using namespace std;

int peakElement(vector<int> &A)
{
    int st = 1, end = A.size() - 2;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (A[mid - 1] < A[mid] && A[mid] > A[mid + 1])
        {
            return mid;
        }
        else if (A[mid - 1] < A[mid])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> A = {0, 10, 5, 2};
    int peak = peakElement(A);

    if (peak != -1)
    {
        cout << "peak element found at index : " << peak << ", value: " << A[peak] << endl;
    }
    else
    {
        cout << "No peak element found." << endl;
    }
    return 0;
}
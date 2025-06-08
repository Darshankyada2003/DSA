#include <iostream>
using namespace std;

// int main()
// {
//     int marks[5] = {99, 100, 101, 102, 103};
//     int size = 5;
//     for (int i = 0; i < size; i++)
//     {
//         cout << marks[i] << endl;
//     }
//     return 0;
// }

// find array in smallest value
int main()
{
    int num[] = {5, 15, 23, 4, -15};
    int size = 5;

    int smallest = INT8_MAX;
    int largest = INT8_MIN;
    for (int i = 0; i < size; i++)
    {
        if (num[i] < smallest)
        {
            smallest = num[i];
        }
        smallest = min(num[i], smallest);
        largest = max(num[i], largest);
    }
    cout << "Smallest = " << smallest << endl;
    cout << "Largest = " << largest << endl;
}

/*
int main()
{
    int size[] = {5, 12, 3, 4, -4};
    int n = sizeof(size) / sizeof(size[0]);

    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 1; i < n; i++)
    {
        if (size[i] < size[minIndex])
        {
            minIndex = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (size[i] > size[maxIndex])
        {
            maxIndex = i;
        }
    }

    cout << "index of smallest value = " << minIndex << endl;
    cout << "index of largest value = " << maxIndex << endl;
    return 0;
}
*/
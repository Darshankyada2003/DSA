#include <iostream>
#include <vector>
using namespace std;

// linerSearch in vector through
/*
int main()
{
    vector<int> vec = {10, 20, 30, 40, 50};
    int target = 30;
    bool found = false;
    for (int val : vec)
    {
        if (val == target)
        {
            cout << "element " << target << " is found" << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "element " << target << " not found." << endl;
    }
    return 0;
}
*/

void reverseVector(vector<int> &vec)
{
    int start = 0;
    int end = vec.size() - 1;
    while (start < end)
    {
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}
int main()
{
    vector<int> vec = {10, 20, 30, 40, 50};
    cout << "Original Array: ";
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;

    reverseVector(vec);

    cout << "Reversed vector: ";
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
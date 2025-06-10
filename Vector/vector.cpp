#include <iostream>
#include <vector>
using namespace std;

int push_back()
{
    vector<int> vec;
    cout << "size = " << vec.size() << endl; // 0
    vec.push_back(25);                       // push last element
    vec.push_back(35);
    vec.push_back(45);

    cout << "after push back size = " << vec.size() << endl; // 3

    vec.pop_back(); // pop remove last element

    cout << "after push back size = " << vec.size() << endl; // 3
    cout << "first value in array = " << vec.front() << endl;
    cout << "last value in array = " << vec.back() << endl;
    cout << "1 index value in array = " << vec.at(1) << endl;

    // for (int val : vec)
    // {
    //     cout << val << endl;
    // }
    return 0;
}
int main()
{
    vector<char> vec = {'a', 'b', 'c', 'd'};
    cout << "size = " << vec.size() << endl; // size
    for (char val : vec)
    {
        cout << val << endl;
    }
    push_back();
    return 0;
}

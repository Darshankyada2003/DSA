#include <iostream>
#include <string>
using namespace std;

bool isPalidrome(string s)
{
    int st = 0, end = s.size() - 1;
    while (st < end)
    {
        if (s[st] != s[end])
        {
            return false;
        }
        st++, end--;
    }
    return true;
}

int main()
{
    string str;
    cout << "Enter a string : ";
    cin >> str;
    if (isPalidrome(str))
    {
        cout << str << " is palidrome." << endl;
    }
    else
    {
        cout << str << " is not palidrome." << endl;
    }
    return 0;
}

// example = madam, racecar, 12321
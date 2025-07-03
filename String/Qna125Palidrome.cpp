// leetcode 125. valid palidrome

#include <iostream>
#include <string>
using namespace std;

bool isAlphaNum(char ch)
{
    if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
    {
        return true;
    }
    return false;
}

bool isValidPalidrome(string s)
{
    int st = 0, end = s.size() - 1;
    while (st < end)
    {
        if (!isAlphaNum(s[st]))
        {
            st++;
            continue;
        }
        if (!isAlphaNum(s[end]))
        {
            end--;
            continue;
        }
        if (tolower(s[st]) != tolower(s[end]))
        {
            return false;
        }
        st++, end--;
    }
    return true;
}

int main()
{
    string str = "Ac3?e3c&a";
    if (isValidPalidrome(str))
    {
        cout << str << " is valid palidrome";
    }
    else
    {
        cout << str << " is not valid palidrome";
    }
    cout << endl;
    return 0;
}
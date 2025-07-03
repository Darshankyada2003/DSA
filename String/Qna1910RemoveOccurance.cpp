// leetcode 1910. Remove All  occurrences of a string

#include <iostream>
#include <string>
using namespace std;

string isRemoveOccurrences(string s, string part)
{
    while (s.length() > 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}
int main()
{
    string str = "daabcbaabcbc";
    string part = "abc";

    string result = isRemoveOccurrences(str, part);
    cout << result << endl;
    return 0;
}
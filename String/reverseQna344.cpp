// leetcode 344. Reverse String 

#include <iostream>
#include <string>
using namespace std;

int reverse(string &s)
{
    int st = 0, end = s.size() - 1;
    while (st < end)
    {
        swap(s[st++], s[end--]);
    }
}
int main()
{
    string str = "Hello";
    reverse(str);
    cout << str;
}
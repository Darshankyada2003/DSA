#include <iostream>
using namespace std;

// if a number is a power of 2 without using a loop by using bitwise operations!
// int isPowerOf2(int n)
// {
//     if (n <= 0)
//         return false;

//     return (n & (n - 1)) == 0;
// }
// int main()
// {
//     int n = 63;
//     if (isPowerOf2(n))
//     {
//         cout << n << " is a power of 2" << endl;
//     }
//     else
//     {
//         cout << n << " is NOT a power of 2" << endl;
//     }
//     cout << (1 << 0) << endl;

//     return 0;
// }

// WAF reverse an integer N;
int reverseNumber(int n)
{
    int rev = 0;
    while (n != 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    return rev;
}
int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    int reversed = reverseNumber(n);
    cout << "Reversed number: " << reversed << endl;

    return 0;
}
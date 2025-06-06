#include <iostream>
using namespace std;

// Decimal to binary convert with code
// int decimalTobinary(int decNum)
// {
//     int ans = 0, pow = 1;

//     while (decNum > 0)
//     {
//         int rem = decNum % 2;
//         decNum /= 2;
//         ans += (rem * pow);
//         pow *= 10;
//     }
//     return ans;
// }
// int main()
// {
//     int decNum = 50;
//     cout << decimalTobinary(decNum) << endl;
//     for (int i = 1; i <= 10; i++)
//     {
//         cout << decimalTobinary(i) << endl;
//     }
//     return 0;
// }


// Binary to decimal convert
int binTodecimal(int binary)
{
    int ans = 0, pow = 1;

    while (binary > 0)
    {
        int rem = binary % 10;
        ans += rem * pow;

        binary /= 10;
        pow *= 2;
    }
    return ans;
}
int main()
{
    cout << binTodecimal(1010) << endl;
    return 0;
}


#include <iostream>
using namespace std;

int main()
{
    // cout << "Dk" << endl;

    // Square Pattern

    // int n = 4;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }
    // Output:
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4

    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A';
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }
    // output:
    // A B C D
    // A B C D
    // A B C D
    // A B C D

    // int a = 3;
    // int num = 1;
    // for (int i = 0; i < a; i++)
    // {
    //     for (int j = 0; j < a; j++)
    //     {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }
    // Output:
    // 1 2 3
    // 4 5 6
    // 7 8 9

    // int a = 3;
    // char ch = 'A';
    // for (int i = 0; i < a; i++)
    // {
    //     for (int j = 0; j < a; j++)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }
    // Output:
    // A B C
    // D E F
    // G H I

    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // Output:
    // *
    // * *
    // * * *
    // * * * *

    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << i + 1;
    //     }
    //     cout << endl;
    // }
    // Output:
    // 1
    // 22
    // 333
    // 4444

    // int n = 6;
    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A' + i;
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << ch;
    //     }
    //     cout << endl;
    // }
    // Output:
    // A
    // BB
    // CCC
    // DDDD
    // EEEEE
    // FFFFFF

    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << j+1 << " ";
    //     }
    //     cout << endl;
    // }
    // Output:
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4

    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j > 0; j--)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    // Output:
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1

    // int n = 4;
    // int num = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }
    // Output:
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10

    // int n = 4;
    // char ch = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }
    // Output:
    // A
    // B C
    // D E F
    // G H I J

    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A' + i;

    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << (char)(ch - j) << " ";
    //     }
    //     cout << endl;
    // }
    // Output:
    // A
    // B A
    // C B A
    // D C B A

    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int k = 0; k < n - i; k++)
    //     {
    //         cout << i + 1;
    //     }
    //     cout << endl;
    // }
    // Output:
    // 1111
    //  222
    //   33
    //    4

    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     char ch = 'A';
    //     for (int k = 0; k < n - i; k++)
    //     {
    //         cout << (char)(ch + i);
    //     }
    //     cout << endl;
    // }
    // Output:
    // AAAA
    //  BBB
    //   CC
    //    D

    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     // Space
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     // Num1 - Left
    //     for (int k = 1; k <= i + 1; k++)
    //     {
    //         cout << k;
    //     }
    //     // Num2- right
    //     for (int l = i; l > 0; l--)
    //     {
    //         cout << l;
    //     }
    //     cout << endl;
    // }
    // Output:
    //    1
    //   121
    //  12321
    // 1234321

    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << "*";

    //     if (i != 0)
    //     {
    //         for (int k = 0; k < 2 * i - 1; k++)
    //         {
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << "*";
    //     if (i != n - 2)
    //     {
    //         for (int k = 0; k < 2 * (n - i) - 5; k++)
    //         {
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // Output:
    //    *
    //   * *
    //  *   *
    // *     *
    //  *   *
    //   * *
    //    *

    //     int row = 4;
    //     int num = 1;

    //     for (int i = 1; i <= row; i++)
    //     {
    //         for (int j = 1; j <= row - i; j++)
    //         {
    //             cout << " ";
    //         }
    //         for (int k = 1; k <= i; k++)
    //         {
    //             if (i % 2 == 1)
    //             {
    //                 cout << "* ";
    //             }
    //             else
    //             {
    //                 cout << num << " ";
    //                 num++;
    //             }
    //         }
    //         cout << endl;
    //     }
    //     return 0;
    // }

    //    *
    //   1 2
    //  * * *
    // 3 4 5 6

    //     int n = 4;
    //     for (int i = 1; i <= n; i++)
    //     {
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << "*";
    //         }
    //         for (int k = 1; k <= 2 * (n - i); k++)
    //         {
    //             cout << " ";
    //         }
    //         for (int l = 1; l <= i; l++)
    //         {
    //             cout << "*";
    //         }
    //         cout << endl;
    //     }

    //     for (int i = n; i >= 1; i--)
    //     {
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << "*";
    //         }
    //         for (int k = 1; k <= 2 * (n - i); k++)
    //         {
    //             cout << " ";
    //         }
    //         for (int l = 1; l <= i; l++)
    //         {
    //             cout << "*";
    //         }
    //         cout << endl;
    //     }

    //     return 0;
    // }
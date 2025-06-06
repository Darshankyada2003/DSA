#include <iostream>
using namespace std;

// Calculate sum of number from 1 to n with function
// int sumN(int n)
// {
//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum += i;
//     }
//     return sum;
// }
// int main()
// {
//     cout << sumN(5) << endl;
//     cout << sumN(10) << endl;
//     return 0;
// }
// Output: 15, 55

// Factorial of number with function
// int factorialN(int n)
// {
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact *= i;
//     }
//     return fact;
// }
// int main()
// {
//     cout << factorialN(5) << endl;
//     return 0;
// }

// sum of digit
// int sumOfdigits(int num)
// {
//     int digitSum = 0;
//     while (num > 0)
//     {
//         int lastdigit = num % 10;
//         num /= 10;

//         digitSum += lastdigit;
//     }
//     return digitSum;
// }
// int main()
// {
//     cout << "Sum of = " << sumOfdigits(145) << endl;
//     return 0;
// }

// Calculate nCr binomial coefficient for n & r
// int factorial(int n)
// {
//     int fact = 1;
//     for (int i = 1; i <= n; i++)xxxxxxxxxxxxxxxxx
//     {
//         fact *= i;
//     }
//     return fact;
// }
// int nCr(int n, int r)
// {
//     int factN = factorial(n);
//     int factR = factorial(r);
//     int factNmr = factorial(n - r);

//     return factN / (factR * factNmr);
// }
// int main()
// {
//     int n = 6, r = 3;
//     cout << factorial(10) << endl;
//     cout << nCr(n, r) << endl;
//     return 0;
// }

// check if a number prime or not prime`
// int prime(int num)
// {
//     int numOfprime = 0;
//     if (num <= 1)
//     {
//         cout << "not prime" << endl;
//         return numOfprime;
//     }

//     for (int i = 1; i <= num; i++)
//     {
//         if (num % i == 0)
//         {
//             numOfprime++;
//         }
//     }
//     if (numOfprime == 2)
//     {
//         cout << "prime" << endl;
//     }
//     else
//     {
//         cout << "Not Prime" << endl;
//     }

//     return numOfprime;
// }
// int main()
// {
//     cout << prime(10) << endl;
//     return 0;
// }

// prints all prime numbers from 2 to n
// int printAllPrime(int n)
// {
//     for (int i = 2; i <= n; i++)
//     {
//         bool isprime = true;
//         for (int j = 2; j * j <= i; j++)
//         {
//             if (i % 2 == 0)
//             {
//                 isprime = false;
//                 break;
//             }
//         }
//         if (isprime)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     int n = 10;
//     cout << "Prime num from 2 to" << n << " are: ";
//     printAllPrime(n);
//     return 0;
// }

int fibonacci(int n)
{
    int a = 0, b = 1;
    cout << a << " ";
    if (n >= 2)
    {
        cout << b << " ";
    }
    for (int i = 3; i <= n; i++)
    {
        int next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
    cout << endl;
}
int main()
{
    int n = 10;
    cout << "fibonacci series  of first " << n << endl;
    fibonacci(n);   
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "darshan \nkyada" << "\n";

    float pi = 3.14;
    cout << pi;

    // type castig conversion
    char grade = 'a';
    int value = grade;
    cout << value << endl;

    // type casting casting
    double price = 100.99;
    int newPrice = (int)price;
    cout << newPrice << endl;

    // input in c++
    // int age;
    // cout << "Enter your age: ";
    // cin >> age;
    // cout << "your age is: " << age << "\n";

    // logical operater ! not
    cout << !(3 < 1) << endl;

    // || OR operator
    cout << ((3 < 1) || (4 > 5)) << endl;

    // Unary Operator
    int a = 10;
    int b = a++;
    // first b in 10 store after a is a++ then a is 11
    cout << "a is " << a << endl; // 11
    cout << "b is " << b << endl; // 10

    int c = 10;
    // int d = ++c;
    // first ++c then c is 11 and d is c then d is 11
    cout << "c is " << c << endl; // 11
    // cout << "d is " << d << endl; // 11

    //  Example calculator
    // int abc;
    // int xyz;
    // cout << "enter abc value: " << endl;
    // cin >> abc;
    // cout << "enter xyz value: " << endl;
    // cin >> xyz;
    // cout << "abc + xyz sum of: " << abc + xyz << endl;
    // cout << "abc * xyz multiply of: " << abc * xyz << endl;
    // cout << "abc - xyz difference of: " << abc - xyz << endl;
    // if (xyz != 0)
    // {
    //     cout << "abc / xyz divison of: " << abc / xyz << endl;
    //     cout << "abc % xyz modules of: " << abc % xyz << endl;
    // }
    // else
    // {
    //     cout << "Divison and module by zero are not allowed" << endl;
    // }

    //
    int x = 10;
    int *p1 = &x;
    int *p2 = p1;
    cout << *p2 << endl;

    // sum of odd num 1 to n
    int n = 50;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            count += i;
        }
    }
    cout << count << " \n";

    // prime or non prime
    int q = 4;
    bool isprime = true;
    for (int i = 2; i <= q - 1; i++)
    {
        if (q % i == 0)
        {
            isprime = false;
            break;
        }
    }
    if (isprime == true)
    {
        cout << q << " is a prime number" << endl;
    }
    else
    {
        cout << q << " is not a prime number" << endl;
    }

    // calculate the sum of all numbers from 1 to n that are divisible by 3
    int m = 5;
    int sumOfAll = 1;
    for (int i = 1; i <= m; i++)
    {
        if (i % 3 == 0)
        {
            sumOfAll += i;
        }
    }
    cout << "Sum of all numbers from 1 to " << m << " is: " << sumOfAll << endl;

    int o = 10;
    int factorial = 1;
    for (int i = 1; i <= o; i++)
    {
        factorial *= i;
    }
    cout << factorial << endl;

    vector<int> vec = {1, 2, 3, 4, 5};

    for (auto it = vec.rbegin(); it != vec.rend(); it++)
    {
        cout << *(it) << " ";
    }
    
    vector<int> d = {1, 2, 3, 4, 5};

    for (int val : d)
    {
        cout << val << " " << endl;
    }
    cout << endl;
    return 0;
}
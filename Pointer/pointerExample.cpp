#include <iostream>
using namespace std;

void changeA(int *ptr) // Pass by refrence using pointer
{
    *ptr = 20;
}

int main()
{
    int a = 5;
    int *p = &a;
    int **q = &p;

    cout << *p << endl;
    cout << **q << endl;

    cout << p << endl;
    cout << *q << endl;
    cout << &a << endl;

    cout << "\n";

    int b = 10; // Pass by refrence using pointer
    changeA(&a);
    cout << "Inside main fnx : " << a << endl;

    return 0;
}

// | Expression | Meaning                                             | Example Value |
// | ---------- | --------------------------------------------------- | ------------- |
// | `a`        | Value stored in variable `a`                        | `5`           |
// | `&a`       | Address of `a`                                      | `0x61ff0c`    |
// | `p`        | Stores address of `a`                               | `0x61ff0c`    |
// | `*p`       | Value stored at address `p` (i.e., `a`)             | `5`           |
// | `&p`       | Address of pointer `p`                              | `0x61ff08`    |
// | `q`        | Stores address of `p`                               | `0x61ff08`    |
// | `*q`       | Value stored in `p` (i.e., address of `a`)          | `0x61ff0c`    |
// | `**q`      | Value at address stored in `p` (i.e., value of `a`) | `5`           |

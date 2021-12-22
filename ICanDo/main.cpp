#include <iostream>

using namespace std;

void table2()
{
    for (int i = 1; i <= 9; i++)
    {
        cout << "2 x " << i << " = " << 2 * i << endl;
    }
}

void table3()
{
    for (int i = 1; i <= 9; i++)
    {
        cout << "2 x " << i << " = " << 2 * i << endl;
    }
}

void tableN(int n)
{
    for (int i = 1; i <= 9; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

int main()
{
    tableN(2);
    cout << "-----------" << endl;

    tableN(3);

    return 0;
}

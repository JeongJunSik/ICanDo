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
        cout << "3 x " << i << " = " << 3 * i << endl;
    }
}

void table4()
{
    for (int i = 1; i <= 9; i++)
    {
        cout << "4 x " << i << " = " << 4 * i << endl;
    }
}

void table5()
{
    for (int i = 1; i <= 9; i++)
    {
        cout << "5 x " << i << " = " << 5 * i << endl;
    }
}

int main()
{
    tableN(2);
    cout << "-----------" << endl;

    tableN(3);

    cout << "-----------" << endl;

    table4();

    cout << "-----------" << endl;

    table5();

	return 0;
}

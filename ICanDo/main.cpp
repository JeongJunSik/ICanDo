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

int main()
{
    table2();
    cout << "-----------" << endl;

    table3();

	return 0;
}
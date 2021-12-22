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
        cout << "4 x " << i << " = " << 3 * i << endl;
    }
}
void table4()
{
	for (int i = 1; i <= 9; i++)
	{
		cout << "3 x " << i << " = " << 4 * i << endl;
	}
}

int main()
{
    table2();
    cout << "-----------" << endl;

    table3();
	cout << "-----------" << endl;

	table4();

	return 0;
}
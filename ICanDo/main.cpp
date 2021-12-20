#include <iostream>

using namespace std;

int main()
{
    int in;
    cin >> in;
    for (int i = 1; i <= 8; i++)
    {
        cout << in << " * " << i << " = " << in * i << endl;
    }

	return 0;
}
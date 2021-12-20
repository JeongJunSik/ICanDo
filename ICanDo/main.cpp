#include <iostream>

using namespace std;

int main()
{
	int i = 0;
	int j = 0;
	int result = 0;

	for (i = 2; i < 10; i++)
	{
		cout << " " << i << "´Ü" << '\t';
	}

	cout << endl;

	for (i = 1; i < 10; i++)
	{
		for (j = 2; j < 10; j++)
		{
			result = j * i;
			cout << j << "x" << i << "=" << result << '\t';
		}

		cout << endl;
	}

	return 0;
}
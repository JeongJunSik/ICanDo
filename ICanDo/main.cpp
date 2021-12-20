#include <iostream>

using namespace std;

int main()
{
	int i = 0;
	int j = 0;
	int result = 0;

	for (i = 2; i < 10; i++)
	{
		cout << i << "´Ü" << '\t';

		for (j = 1; j < 10; j++)
		{
			result = i * j;

			cout << i << "x" << j << "=" << result << '\t';
		}

		cout << endl;
	}
	return 0;
}
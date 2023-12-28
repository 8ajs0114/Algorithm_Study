#include <iostream>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int num, a, b, i;

	b = 0;

	cin >> num;

	while (num)
	{
		cin >> a;
		i = a - 1;

		while (i)
		{
			if (i == 1)				b++;
			else if (a % i == 0)	break; 
			else;

			i--;
		}

		num--;
	}

	cout << b;

	return 0;

}
#include <iostream>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int num, A, B, C, D, i;

	cin >> num;

	while(num)
	{
		cin >> A;
		cin >> B;

		i = 0;
		C = A;
		D = B;

		while (B)
		{
			i = A % B;
			A = B;
			B = i;
		}

		i = A;
		cout << (C * D) /i << "\n";

		num--;
	}

	return 0;
}
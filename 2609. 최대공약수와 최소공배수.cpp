#include <iostream>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int A, B, C, D, i, j, k;

	cin >> A;
	cin >> B;

	i = j = k = 0;
	C = A;
	D = B;

	while (B)
	{
		i = A % B;
		A = B;
		B = i;
	}

	cout << A << "\n";

	i = A;

	while (1)
	{
		j = i % C;
		k = i % D;

		if (j == 0 && k == 0)
			break;

		else;

		i += A;
	}

	cout << i << "\n";

	return 0;
}
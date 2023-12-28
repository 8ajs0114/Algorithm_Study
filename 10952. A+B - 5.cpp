#include <iostream>

using namespace std;

int main(void)
{
	int A, B;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	while (1)
	{
		cin >> A >> B;

		if (!(A && B))
			break;

		else
			cout << A + B << '\n';
	}

	return 0;
}
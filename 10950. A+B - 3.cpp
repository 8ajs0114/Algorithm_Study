#include <iostream>

using namespace std;

int main(void)
{
	int T, A, B, i;

	ios_base::sync_with_stdio;
	cin.tie(0);
	cout.tie(0);

	cin >> T;
	i = 0;

	while (i < T)
	{
		cin >> A >> B;
		cout << A + B << '\n';
		i++;
	}

	return 0;
}
#include <iostream>

using namespace std;

int main(void)
{
	int T, A, B, i;
	string n;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	i = 0;

	cin >> T;

	while (i < T)
	{
		cin >> n;
		A = n[0] - 48;
		B = n[2] - 48;
		cout << A+B  << '\n';
		i++;
	}

	return 0;
}
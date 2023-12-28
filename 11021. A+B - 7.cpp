#include <iostream>

using namespace std;

int main(void)
{
	int T, A, B, i;

	ios_base::sync_with_stdio(false);

	cin >> T;

	i = 0;

	while (i < T)
	{
		cin >> A >> B;
		cout << "Case #" << i+1 << ": " << A + B << '\n';
		i++;
	}

	return 0;
}
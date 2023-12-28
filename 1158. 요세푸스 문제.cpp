#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	queue<int> a, b;
	int num = 0;
	int x = 0;
	int i = 0;

	cin >> num;
	cin >> x;

	for (i = 1; i <= num; i++)
		a.push(i);

	cout << "<";
	while (!a.empty())
	{
		for (i = 1; i < x; i++)
		{
			a.push(a.front());
			a.pop();
		}
		cout << a.front();
		a.pop();
		if (!a.empty())
			cout << ", ";
		else;
	}

	cout << ">";

	return 0;
}
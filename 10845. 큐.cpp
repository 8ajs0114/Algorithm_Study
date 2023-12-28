#include <iostream>
#include <queue>

using namespace std;


int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	queue<int> a;
	int num;
	int x;
	string str;

	cin >> num;
	while (num--)
	{
		cin >> str;

		if (str == "push")
		{
			cin >> x;
			a.push(x);
//			cout << x << '\n';
		}

		else if (str == "pop")
		{
			if (!a.empty())
			{
				cout << a.front() << '\n';
				a.pop();
			}
			
			else
				cout << "-1" << '\n';
		} 

		else if (str == "size")
		{
			cout << a.size() << '\n';
		}

		else if (str == "empty")
		{
			if (!a.empty())
				cout << "0" << '\n';
			else
				cout << "1" << '\n';
		}

		else if (str == "front")
		{
			if (!a.empty())
				cout << a.front() << '\n';
			else
				cout << "-1" << '\n';
		}

		else if (str == "back")
		{
			if (!a.empty())
				cout << a.back() << '\n';
			else
				cout << "-1" << '\n';
		}

		else;

	}

	return 0;
}
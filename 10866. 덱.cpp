#include <iostream>
#include <deque>

using namespace std;


int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	deque<int> a;
	int num;
	int x;
	string str;

	cin >> num;
	while (num--)
	{
		cin >> str;

		if (str == "push_front")
		{
			cin >> x;
			a.push_front(x);
			//			cout << x << '\n';
		}

		else if (str == "push_back")
		{
			cin >> x;
			a.push_back(x);
			//			cout << x << '\n';
		}

		else if (str == "pop_front")
		{
			if (!a.empty())
			{
				cout << a.front() << '\n';
				a.pop_front();
			}

			else
				cout << "-1" << '\n';
		}

		else if (str == "pop_back")
		{
			if (!a.empty())
			{
				cout << a.back() << '\n';
				a.pop_back();
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
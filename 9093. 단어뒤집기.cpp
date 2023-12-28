#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	stack<char> s;

	int T, i;
	string str;

	cin >> T;
	cin.ignore();

	while (T--)
	{
		getline(cin, str);
		str += ' ';
		
		for (i = 0; i < str.size(); i++)
		{
			if (str[i] == ' ')
			{
				while (!s.empty())
				{
					cout << s.top();
					s.pop();
				}

				cout << ' ';
			}

			else
				s.push(str[i]);
		}
	}

	return 0;
}
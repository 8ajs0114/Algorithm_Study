#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int T, i, left, right;
	string str;

	cin >> T;	
	cin.ignore();

	while (T--)
	{
		getline(cin, str);
		
		left = 0;
		right = 0;

		if (str.size() % 2 == 0 && str[0] == '(')
		{
			for (i = 0; i < str.size(); i++)
			{
				if (str[i] == '(')
					left++;
				else if (str[i] == ')')
					right++;
				else;

				if (left - right < 0)
				{
					i=str.size();
					break;
				}

				else;
			}

			if (left - right == 0)
				cout << "YES" << '\n';

			else 
				cout << "NO" << '\n';
		}

		else
			cout << "NO" << '\n';
	}

	return 0;
}
#include<iostream>
#include<stack>
#include<string>

using namespace std;
int main() {
	stack<int> s;
	int n, m;

	string str;

	cin >> n; 
	m = 0;
	
	while (n--) 
	{
		int x;
		cin >> x; 
		if (x > m) 
		{
			while (x > m) 
			{
				s.push(++m);
				str += '+';
			}
			s.pop();
			str += '-';
		}

		else 
		{ 
			bool found = false;
			if (!s.empty())
			{
				if (x == s.top())
					found = true;

				s.pop();
				str += '-';
			}

			else;

			if (!found)
			{
				cout << "NO" << '\n';
				return 0;
			}

			else;
		}
	}

	for (auto x : str) 
		cout << x << '\n';
	
	return 0;
}
#include <iostream>
#include <stack>
#include <string.h>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char in, x, str[1000000];
	int num, i, j;
	stack<char> l, r;

	cin >> str;
	j = strlen(str);
	for(i=0;i<j;i++)
		l.push(str[i]);
	
	cin >> num;

	while (num--)
	{
		cin >> in;

		if (in == 'L' && !l.empty())
		{
			r.push(l.top());
			l.pop();
		}

		else if (in == 'D' && !r.empty())
		{
			l.push(r.top());
			r.pop();
		}

		else if (in == 'B' && !l.empty())
			l.pop();

		else if (in == 'P')
		{
			cin >> x;
			l.push(x);
		}

		else;

	}

	while (!l.empty())
	{
		r.push(l.top());
		l.pop();
	}

	while (!r.empty())
	{
		cout << r.top();
		r.pop();
	}

	return 0;
}

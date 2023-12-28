#include <iostream>
#include <string>

#define MAX_SIZE (10000)
using namespace std;

template <typename T>

class stack {
private:
	T data[MAX_SIZE];
	int _top;

public:
	stack() {
		_top = -1;
	}
	~stack() {

	}
	void push(T inputdata) {
		data[_top + 1] = inputdata;
		_top += 1;
	}
	T pop() {
		T res = data[_top];
		_top -= 1;
		return res;
	}
	int size() {
		return _top + 1;
	}
	bool empty() {
		return size() == 0 ? true : false;
	}
	T top() {
		T res = data[_top];
		return res;
	}
};

int main() {

	ios_base::sync_with_stdio(false);
	cout.tie(0); cin.tie(0);

	stack<int> s;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string com;
		cin >> com;
		if (com == "push") {
			int data;
			cin >> data;
			s.push(data);
		}
		else if (com == "pop") {
			if (s.empty()) {
				cout << "-1\n";
			}
			else {
				cout << s.pop() << "\n";
			}
		}
		else if (com == "size") {
			cout << s.size() << "\n";
		}
		else if (com == "empty") {
			cout << s.empty() << "\n";
		}
		else {
			if (s.empty()) {
				cout << "-1\n";
			}
			else {
				cout << s.top() << "\n";
			}
		}
	}

}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sum(int a, int b)
{
	return (a + b);
}

int Total(int a, int b, int c, int d)
{
	return sum(a, b) + sum(c, d);
}

void ShowResult(int alice, int bob, int total, int& a, int& b)
{
	if (total < 4 || 52 < total)
	{
		cout << "error" << endl;
	}
	else if (alice == bob)
	{
		cout << "draw" << endl;
	}
	else if (alice > bob)
	{
		cout << "alice win" << endl;
		a++;
	}
	else if (alice < bob)
	{
		cout << "bob win" << endl;
		b++;
	}
}

int main()
{
	int a, b, c, d, total = 0, alice = 0, bob = 0;
	cin >> a >> b;
	cin >> c >> d;

	total = Total(a, b, c, d);

	while (total != 0)
	{
		ShowResult(sum(a, b), sum(c, d), total, alice, bob);

		cin >> a >> b;
		cin >> c >> d;
		total = Total(a, b, c, d);
	}

	cout << "awc " << alice << " bwc " << bob << endl;

	return 0;
}
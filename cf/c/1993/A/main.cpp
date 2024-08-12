#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const char END = '\n';

void solve()
{
	int n; cin >> n;
	string s; cin >> s;

	int ac = 0, bc = 0, cc = 0, dc = 0;
	for (int i = 0; i < s.length(); i++)
	{
		switch (s[i])
		{
			case 'A':
				if (ac < n)
					ac++;
				break;
			case 'B':
				if (bc < n)
					bc++;
				break;
			case 'C':
				if (cc < n)
					cc++;
				break;
			case 'D':
				if (dc < n)
					dc++;
				break;
		}
	}

	cout << (ac + bc + cc + dc) << endl;
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll t; cin >> t;

	while (t--)
		solve();
}

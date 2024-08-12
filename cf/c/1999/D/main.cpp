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
	string s, t;
	cin >> s >> t;

	bool possible = false;
	for (int i = 0; i < s.length(); i++)
	{
		int j = i ? i < t.length() : 0;

		if (s[i] == '?')
			s[i] = t[j];
	}
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll t; cin >> t;

	while (t--)
		solve();
}

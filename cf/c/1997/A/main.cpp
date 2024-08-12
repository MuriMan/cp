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
	string s; cin >> s;
	string res = "";

	if (s.length() == 1)
	{
		res = (s + (char)(s[0] + 1));
	}
	else
	{
		for (int i = 0; i < s.length() - 1; i++)
		{
			if (s[i] == s[i + 1])
			{
				res += s.substr(0, (i + 1));
				res += (char)(s[i] + 1);
				res += s.substr(i + 1);
				
				break;
			}
		}
	}

	cout << res << END;
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll t; cin >> t;

	while (t--)
		solve();
}

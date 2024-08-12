#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

typedef long long ll;
const char END = '\n';

void solve()
{
	ll n, m, k; cin >> n >> m >> k;
	
	string a; cin >> a;

	bool first_found = false;
	int first_index = 0;
	vector<int> C_lengths;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 'C')
		{
			first_index = i;
			first_found = true;
		}

		if ((i + 1) < n)
			if (first_found and a[i + 1] != 'C')
			{
				C_lengths.push_back((i + 1) - first_index);
				first_found = false;
			}
	}

	if (*max_element(C_lengths.begin(), C_lengths.end()) > m)
		cout << "NO" << END;
	else
		cout << "YES" << END;
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll t; cin >> t;

	while (t--)
		solve();
}

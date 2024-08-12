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
	ll n, s, m; cin >> n >> s >> m;
	
	pair<ll, ll> templates[n];
	for (int i = 0; i < n; i++)
	{
		cin >> templates[i].first >> templates[i].second;
	}
	vector<ll> differences;

	differences.push_back(templates[0].first);
	for (int i = 0; i < (n-1); i++)
	{
		differences.push_back(templates[i+1].first - templates[i].second);
	}
	pair<ll, ll> last;
	last.first = m;
	last.second = 10000000000000000;

	differences.push_back(abs(templates[n-1].second - last.first));

	if (*max_element(differences.begin(), differences.end()) >= s)
		cout << "YES" << END;
	else
		cout << "NO" << END;
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll t; cin >> t;

	while (t--)
		solve();
}

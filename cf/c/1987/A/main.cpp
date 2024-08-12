#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

typedef long long ll;
const char END = '\n';

void solve()
{
	ll n, k;
	cin >> n >> k;

	cout << (n * k) - ((k - 1)) << END;
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll t; cin >> t;

	while (t--)
		solve();
}

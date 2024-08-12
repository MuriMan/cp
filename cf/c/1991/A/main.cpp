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
	vector<ull> a;

	for (int i = 0; i < n; i++)
	{
		ull tmp; cin >> tmp;
		a.push_back(tmp);
	}

	if (n == 1)
		cout << a[0] << END;
	else
	{
		int n_a_length = (n + 1)/2;
		ull n_a[n_a_length];
		
		int j = 0;
		for (int i = 0; i < n_a_length; i++)
		{
			n_a[i] = a[j];
			j += 2;
		}

		cout << *max_element(n_a, n_a + n_a_length) << END;
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

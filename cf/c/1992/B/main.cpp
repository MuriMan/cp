#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

typedef long long ll;
const char END = '\n';

int index_at(vector<int> arr, int len, int target)
{
	for (int i = 0; i < len; i++)
		if (arr[i] == target)
			return i;

	return -1;
}

void solve()
{
	int n, k; cin >> n >> k;
	
	vector<int> a;
	for (int i = 0; i < k; i++)
	{
		int temp; cin >> temp;
		a.push_back(temp);
	}

	int a_max_index = index_at(a, k, *max_element(a.begin(), a.end()));
	int res = 0;
	int ones_made = 0;
	for (int i = 0; i < k; i++)
	{
		if (i != a_max_index)
		{
			res += (a[i] - 1);
			ones_made += a[i];
		}
	}

	res += ones_made;

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

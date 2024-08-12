#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

typedef long long ll;
const char END = '\n';

int index_at(int arr[], int len, int target)
{
	for (int i = 0; i < len; i++)
		if (arr[i] == target)
			return i;

	return -1;
}

void solve()
{
	int n[3];
	for (int i = 0; i < 3; i++)
		cin >> n[i];

	for (int i = 0; i < 5; i++)
	{
		int min_index = index_at(n, 3, *min_element(n, n + 3));

		n[min_index]++;
	}

	cout << n[0] * n[1] * n[2] << END;
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll t; cin >> t;

	while (t--)
		solve();
}

#include <math.h>
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
	int xc, yc, k; cin >> xc >> yc >> k;
	int sumx = xc * k, sumy = yc * k;

	int x[k];

	int half = k/2;
	for (int i = 0; i < k; i++)
	{
		x[i] = xc + i;
		x[k-1] = xc - i;

		cout << x[i] << " " << yc << END;
	}

	if (k % 2 == 1)
		cout << xc << " " << yc << END;
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll t; cin >> t;

	while (t--)
		solve();
}

// น้มุ 10816น๘
#include <iostream>
#include <algorithm>
#include <cmath>
#include <map>

#define endl '\n';

using namespace std;

int n, m;
map<int, int> mp;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int c;
		cin >> c;
		++mp[c];
	}

	cin >> m;
	for (int i = 0; i < m; ++i)
	{
		int c;
		cin >> c;
		cout << mp[c] << " ";
	}

}

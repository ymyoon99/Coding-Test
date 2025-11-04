// 백준 1269번
#include <iostream>
#include <algorithm>
#include <cmath>
#include <map>

#define endl '\n';

using namespace std;

int n, m;
map<int, int> mp;

int a, num1, num2;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		int num;
		cin >> num;
		++mp[num];
		++num1;
	}

	for (int i = 0; i < m; ++i)
	{
		int num;
		cin >> num;
		++mp[num];
		++num2;
	}

	for (auto it = mp.begin(); it != mp.end(); ++it)
	{
		if (it->second == 2)
		{
			++a;
		}
	}
	
	// a는 중복된 수;
	cout <<  (num1 - a) + (num2 - a) << endl;
}

// น้มุ 7785
#include <iostream>
#include <algorithm>
#include <cmath>
#include <map>

#define endl '\n';

using namespace std;

int n;
string s, check;
map<string, bool> mp;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> s >> check;
		if (check == "enter")
		{
			mp[s] = true;
		}
		else if (check == "leave")
		{
			mp[s] = false;
		}
	}

	for (auto it = mp.rbegin(); it != mp.rend(); ++it)
	{
		if (it->second)
		{
			cout << it->first << endl;
		}
	}
}

// 백준 1620
// atoi 활용하기
// abc = 0
// 123 = 123
// abc123 = 0
// 123abc = 123
#include <iostream>
#include <algorithm>
#include <cmath>
#include <map>

#define endl '\n';

using namespace std;

int n, m;
map<string, int> mp;
map<int, string> mp2;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	for (int i = 1; i <= n; ++i)
	{
		string s;
		cin >> s;
		mp[s] = i; // key = s, value = i
		mp2[i] = s;
	}

	for (int i = 0; i < m; ++i)
	{
		string s;
		cin >> s;
		if (int a = atoi(s.c_str()))
		{
			// 0이 들어오면 true로 숫자다.
			cout << mp2[a] << endl;
		}
		else 
		{
			// 문자다.
			cout << mp[s] << endl;
		}

	}
}

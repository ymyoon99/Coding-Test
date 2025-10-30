// ���� 1764��
#include <iostream>
#include <algorithm>
#include <cmath>
#include <map>
#include <vector>

#define endl '\n';

using namespace std;

int n, m;
map<string, int> mp;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	// �赵 ���� �����
	for (int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;
		mp[s]++;
	}

	// ���� ���� �����
	for (int i = 0; i < m; ++i)
	{
		string s;
		cin >> s;
		mp[s]++;
	}

	vector<string> ans;
	
	// ������ ��ȸ
	for (auto it = mp.begin(); it != mp.end(); ++it)
	{
		if (it->second == 2)
		{
			ans.push_back(it->first);
		}
	}

	// ���
	cout << ans.size() << endl;
	for (auto& name : ans)
	{
		cout << name << endl;
	}
}

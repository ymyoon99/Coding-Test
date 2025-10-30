// ���� 	42872��
// substr �Լ��� ����. ���ڿ� �Ϻθ� �����ϴ� �Լ�
// substr(pos, count)
#include <iostream>
#include <string>
#include <map>
using namespace std;

string s;
map<string, int> mp;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s;

    int n = s.size();

    for (int i = 0; i < n; ++i) 
    {
        for (int j = i; j < n; ++j) 
        {
            string sub = s.substr(i, j - i + 1);
            ++mp[sub]; // �� �κ� ���ڿ��� ���Դٰ� ���
        }
    }

    cout << mp.size() << '\n'; // ���� �ٸ� key�� ���� = ���� �ٸ� �κ� ���ڿ� ����
    return 0;
}
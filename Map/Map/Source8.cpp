// 백준 	42872번
// substr 함수의 이해. 문자열 일부를 추출하는 함수
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
            ++mp[sub]; // 이 부분 문자열이 나왔다고 기록
        }
    }

    cout << mp.size() << '\n'; // 서로 다른 key의 개수 = 서로 다른 부분 문자열 개수
    return 0;
}
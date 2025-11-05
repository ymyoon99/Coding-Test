// 백준 12789번
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>

#define endl '\n';

using namespace std;

int n;
int cnt = 1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    stack<int> stk;

    // 문자를 하나씩 받으면서
    while (n--)
    {
        int k;
        cin >> k;

        // 지금 현재 카운터(1)와 같으면
        if (k == cnt)
        {
            cnt++; // 보내주고 카운터 증가
        }
        else // 아니라면 스택에 저장
        {
            stk.push(k);
        }

        // 스택에 사람이 있으면서, 스택의 최상단이 cnt와 같으면
        while (stk.size() != 0 && stk.top() == cnt)
        {
            stk.pop(); // 보내주고
            cnt++; // 카운터 증가
        }
    }

    if (stk.size() == 0) // 스택이 성공적으로 비었다면, 내 차례
    {
        cout << "Nice";
    }
    else
    {
        cout << "Sad";
    }
   
}
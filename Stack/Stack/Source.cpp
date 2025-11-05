// 백준 9012번
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>

#define endl '\n';

using namespace std;

int n;
string s;

bool check_pair(string s)
{
    stack<int> stk;

    for (char c : s)
    {
        if (c == '(')
        {
            stk.push(c);
        }
        else
        {
            if (stk.size()) // 들어있다면(지금은 반드시 왼쪽괄호)
            {
                stk.pop();
            }
            else
            {
                return false;
            }
        }
    }

    return stk.empty(); // 비어있으면 True, 아니면 False 반환
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    while (n--)
    {
        cin >> s;

        if (check_pair(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;;
        }
    }

}
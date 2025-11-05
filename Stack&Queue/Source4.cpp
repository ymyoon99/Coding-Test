// น้มุ 10773น๘
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>

#define endl '\n';

using namespace std;

int k;
int result;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> k;
    stack<int> stk;

    while (k--)
    {
        int n;
        cin >> n;

        if (n == 0 && stk.size() != 0)
        {
            stk.pop();
        }
        else 
        {
            stk.push(n);
        }
    }

    int cnt = stk.size();

    if (stk.size() != 0)
    {
        while (cnt--)
        {
            int num;
            num = stk.top();
            stk.pop();
            result += num;
        }
    }
    else 
    {
        result == 0;
    }
    cout << result;
}
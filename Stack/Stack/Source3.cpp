// น้มุ 28278น๘
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>

#define endl '\n';

using namespace std;

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> stk;

    cin >> n;

    while (n--)
    {
        int op;
        cin >> op;

        if (op == 1) {
            int x;
            cin >> x;
            stk.push(x);
        }
        else if (op == 2)
        {
            if (stk.size() > 0)
            {
                int num;
                num = stk.top();
                stk.pop();
                cout << num << endl;
            }
            else 
            {
                cout << -1 << endl;
            }
        }
        else if (op == 3)
        {
            cout << stk.size() << endl;
        }
        else if (op == 4)
        {
            if (stk.size() == 0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else if (op == 5)
        {
            if (stk.size() != 0)
            {
                cout << stk.top() << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }

    }
    
}
// น้มุ 18258น๘
#include <iostream>
#include <algorithm>
#include <string>
#include <queue>

#define endl '\n';

using namespace std;

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    queue<int> q;

    cin >> n;

    while (n--)
    {
        string op;
        cin >> op;

        if (op == "push") {
            int x;
            cin >> x;
            q.push(x);
        }
        else if (op == "pop")
        {
            if (q.size() > 0)
            {
                int num;
                num = q.front();
                q.pop();
                cout << num << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else if (op == "size")
        {
            cout << q.size() << endl;
        }
        else if (op == "empty")
        {
            if (q.size() == 0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else if (op == "front")
        {
            if (q.size() != 0)
            {
                cout << q.front() << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else if (op == "back")
        {
            if (q.size() != 0)
            {
                cout << q.back() << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }

}
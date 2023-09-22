#include <iostream>
#include <vector>
using namespace std;

bool isEven(int x)
{
    if (x % 2 == 0)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdin);
    #endif

    int t, n, x;

    cin >> t;

    while (t--)
    {
        cin >> n;
        int cnt = 0;
        bool even = true;
        int e = 0, o = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> x;

            if (n == 1)
            {
                if (!isEven(x))
                {
                    even = false;
                }
                else
                {
                    even = true;
                }
                continue;
            }
            else
            {
                if (isEven(i) && !isEven(x))
                {
                    e++;
                }
                else if (!isEven(i) && isEven(x))
                {
                    o++;
                }
            }
        }

        if (!even || e != o)
            cout << -1 << endl;
        else if( e == o)
            cout << e << endl;
    }
}
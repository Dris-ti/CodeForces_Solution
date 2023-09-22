#include <iostream>
#include <vector>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdin);
#endif

    int t, l, x;
    vector<int> v;
    cin >> t;

    while (t--)
    {
        int mx = INT_MIN, mn = INT_MAX;
        cin >> l;

        while (l--)
        {
            cin >> x;

            if (mx < x)
            {
                mx = x;
            }

            if (mn > x)
            {
                mn = x;
            }
        }
        cout << mx - mn << endl;
    }
}
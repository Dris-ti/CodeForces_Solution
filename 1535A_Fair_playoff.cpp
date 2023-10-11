#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t, x;
    vector<int> v1;
    vector<int> v2;
    vector<string> ans;
    cin >> t;

    while (t--)
    {
        for (int i = 0; i < 2; i++)
        {
            cin >> x;
            v1.push_back(x);
        }
        for (int i = 0; i < 2; i++)
        {
            cin >> x;
            v2.push_back(x);
        }

        int mx1, mx2, idx1, idx2;

        if (v1.front() > v1.back())
        {
            mx1 = v1.front();
            idx1 = 0;
        }
        else
        {
            mx1 = v1.back();
            idx1 = 1;
        }

        if (v2.front() > v2.back())
        {
            mx2 = v2.front();
            idx2 = 0;
        }
        else
        {
            mx2 = v2.back();
            idx2 = 1;
        }

        if ((mx1 < min(v2.front(), v2.back())) || (mx2 < min(v1.front(), v1.back())))
        {
            ans.push_back("NO");
        }
        else
        {
            ans.push_back("YES");
        }

        v1.clear();
        v2.clear();
    }

    for (auto a : ans)
        {
            cout << a << endl;
        }
}
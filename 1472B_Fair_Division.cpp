#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <functional>
#include <numeric>
using namespace std;

int main()
{
    int t;
    int n, x;
    vector<int> v;
    vector<string> ans;
    int cnt = 0;

    cin >> t;

    while (t--)
    {
        int alice = 0, bob = 0;
        n = 0;
        cin >> n;
        int n2 = n;

        while (n--)
        {
            cin >> x;
            v.push_back(x);
        }
        if (n2 == 1)
        {
            ans.push_back("NO");
            v.clear();
            continue;
        }
        int sum = accumulate(v.begin(), v.end(), 0);
        if (sum % 2 != 0)
        {
            ans.push_back("NO");
            v.clear();
            continue;
        }

        int two_cnt = count(v.begin(), v.end(), 2);
        int one_cnt = v.size() - two_cnt;

        if (two_cnt % 2 != 0)
        {
            alice += ((two_cnt / 2) + 1) * 2;
            bob += (two_cnt / 2) * 2;

            while (bob != alice && one_cnt != 0)
            {
                bob += 1;
                one_cnt--;
            }

            if (one_cnt != 0 || bob == alice)
            {
                ans.push_back("YES");
            }
            else
            {
                ans.push_back("NO");
            }
        }
        else
        {
            alice += (two_cnt / 2) * 2;
            bob += (two_cnt / 2) * 2;
            if (one_cnt % 2 == 0)
            {
                ans.push_back("YES");
            }
            else
            {
                ans.push_back("NO");
            }
        }
        v.clear();
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}
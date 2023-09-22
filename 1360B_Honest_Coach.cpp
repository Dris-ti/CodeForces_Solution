#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, x, mn = 0, ans = 1000, t;
    vector<int> v;
    vector<int> outp;

    cin >> n;

    while (n--)
    {
        cin >> t;
        while (t--)
        {
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());

        for (int i = 0; i < v.size() - 1; i++)
        {
            ans = min(ans, abs(v[i] - v[i+1]));
        }
        
        outp.push_back(ans);
        v.clear();
        ans = 1000;
    }

    for (int i = 0; i < outp.size(); i++)
    {
        cout << outp[i] << endl;
    }
}
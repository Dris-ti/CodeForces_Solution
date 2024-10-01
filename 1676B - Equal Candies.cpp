#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t, n, x, ans = 0;
    cin >> t;

    vector<int> v;
    vector<int> out;

    while(t--)
    {
        cin >> n;

        while(n--)
        {
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());

        for(int i = 1; i < v.size(); i++)
        {
            int temp = v[i] - v[0];
            ans += temp;
        }
        out.push_back(ans);
        ans = 0;
        v.clear();
    }

    for(int i = 0; i < out.size(); i++)
    {
        cout << out[i] << endl;
    }
}

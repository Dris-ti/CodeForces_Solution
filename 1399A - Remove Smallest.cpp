#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t, n, diff;
    vector <int> v;
    vector <string> out;
    bool flag = true;

    cin >> t;
    while(t--)
    {
        flag = true;
        cin >> n;
        while(n--)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());

        for(int i = 0; i < v.size() - 1; i++)
        {
            diff = abs(v[i] - v[i+1]);
            if(diff > 1)
            {
                flag = false;
                break;
            }
        }
        v.clear();
        if(flag )
        {
            out.push_back("YES");
        }
        else
        {
            out.push_back("NO");
        }
    }

    for(int i = 0; i <out.size(); i++)
    {
        cout << out[i] << endl;
    }
}

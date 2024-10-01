#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t, n, x, cnt = 0;
    cin >> t;
    int mn = INT_MAX;
    int p = 1;

    vector<int> v;

    while(t--)
    {
        cin >> n;
        while(n--)
        {
            cin >> x;
            if(x == 0)
            {
                cnt++;
            }
            mn = min(mn, x);
            if(x != 0)
            {
                p = p * x; 
            }
        }
        if(mn != 0)
        {
            p = p / mn;
        }
        mn++;
        p = p * mn;
        if(cnt > 1)
        {
            v.push_back(0);
        }
        else
        {
            v.push_back(p);
        }
        p = 1;
        mn = INT_MAX;
        cnt = 0;
    }

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}

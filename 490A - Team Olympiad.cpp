#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, f = 0, s = 0, t = 0;
    vector <int> v;
    vector<int> one;
    vector<int> two;
    vector<int> three;
    int team, mn;

    cin >> n;

    while(n--)
    {
        int x;
        cin >> x;
        if( x == 1)
        {
            f++;
        }
        else if(x == 2)
        {
            s++;
        }
        else if(x == 3)
        {
            t++;
        }
        v.push_back(x);
    }

    mn = min(f, s);
    mn = min(mn, t);
    team = mn;

    if(team == 0)
    {
        cout << team << endl;

    }
    else
    {
        cout << team << endl;
        for(int i = 0; i < v.size(); i++)
        {
            if(v[i] == 1)
            {
                one.push_back(i+1);
            }
            else if(v[i] == 2)
            {
                two.push_back(i+1);
            }
            else if(v[i] == 3)
            {
                three.push_back(i+1);
            }
        }

        for(int i = 0; i < mn; i++)
        {
            cout << one[i] << " " << two[i] << " " << three[i] << endl;
        }
    }


}

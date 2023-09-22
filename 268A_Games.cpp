#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v;
    vector <int> v2;
    int t;
    int val, cnt = 0;

    cin >> t;

    for(int i = 0; i < 2*t; i++)
    {
        cin >> val;
        if(i%2 == 0)
        {
            v.push_back(val);
        }
        else
        {
            v2.push_back(val);
        }
    }
    
    for(int i = 0; i < t; i++)
    {
        for(int j = 0; j < t; j++)
        {
            if(v[i] == v2[j])
            {
                cnt++;
            }
        }
    }
    cout << cnt;
}
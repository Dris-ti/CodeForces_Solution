#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t, pos, cnt = 0, val;
    vector <int> v;

    cin >> t;
    cin >> pos;

    for(int i = 0; i < t; i++)
    {
        cin >> val;
        v.push_back(val);
    }

    int posVal = v[pos-1];

    for(int i = 0; i < t; i++)
    {
        if(v[i] >= posVal && v[i] != 0)
        {
            cnt++;
        }
    }
    cout << cnt;
}
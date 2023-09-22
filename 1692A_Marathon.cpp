#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    int n, x, t, idx;
    vector <int> v;
    vector <int> outp;
    vector <int> :: iterator it;

    cin >> n;

    while(n--)
    {
        for(int i = 0; i < 4; i++)
        {
            cin >> x;
            v.push_back(x);
        }
        t = v[0];
        sort(v.begin(), v.end(), greater<int>());
        it = find(v.begin(), v.end(), t);
        outp.push_back(it - v.begin());
        v.clear();
    }

    for(int i = 0; i < outp.size(); i++)
    {
        cout << outp[i] << endl;
    }
}
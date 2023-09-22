#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, k, ans;
    vector <int> v;

    cin >> n;
    cin >>k;

    while(n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    for(int i = v.size()-1; i >= 0; i--)
    {
        if((5 - v[i]) < k)
        {
            v.pop_back();
        }
    }
    cout << v.size()/3;

}

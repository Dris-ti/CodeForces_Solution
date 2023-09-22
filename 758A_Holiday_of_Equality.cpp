#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, x, i = 0, cnt = 0;
    vector <int> v;

    cin >> n;

    if(n == 1)
    {
        cin >> x;
        cout << 0;
        return 0;
    }

    while(n--)
    {
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    int mx = v.back();

    //cout << mx;

    while(i != v.size())
    { 
        cnt = cnt + (mx - v[i]);
        i++;
    }

    cout << cnt;
}
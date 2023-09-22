#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v;
    int n, x, big, small, cnt = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x); 
    }

    big = v[0];
    small = v[0];
    for(int i = 1; i < v.size(); i++)
    {
        if(v[i] > big)
        {
            big = v[i];
            cnt++;
        }
        if(v[i] < small)
        {
            small = v[i];
            cnt++;
        }
    }

    cout << cnt;
}
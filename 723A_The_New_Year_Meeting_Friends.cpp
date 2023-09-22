#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    int arr[3];
    int mx = 1, mn = 100, wn, d1, d2;

    for(int i = 0; i < 3; i++)
    {
        cin >> arr[i];
        mx = max(mx, arr[i]);
        mn = min(mn, arr[i]);
    }

    for(int i = 0; i < 3; i++)
    {
        if(arr[i] != mx && arr[i] != mn)
            wn = arr[i];
    }

    for(int i = 0; i < 3; i++)
    {
        if(arr[i] == mx)
        {
            d1 = mx - wn;
        }
        else if(arr[i] == mn)
        {
            d2 = wn - mn;
        }     
    }

    cout << d1 + d2;
}
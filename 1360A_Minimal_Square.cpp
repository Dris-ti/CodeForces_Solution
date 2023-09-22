#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t, a, b;

    cin >> t;

    while(t--)
    {
        cin >> a >> b;
        int mx1, mx2, ans;
        mx1 = max(a, 2*b);
        mx2 = max(2*a, b);
        ans = pow(min(mx1, mx2) , 2);
        cout << ans << endl;
    }
}
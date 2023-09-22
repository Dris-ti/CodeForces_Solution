#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdin);
#endif

    int t, x, ld;

    cin >> t;

    while(t--)
    {
        cin >> x;
        ld = x%10;
        int cnt = 0, ans = 0;

        while(x != 0)
        {
            x = x/10;
            cnt++;
        }

        if(cnt == 1)
        {
            ans += 1;
        }
        else if(cnt == 2)
        {
            ans += 3;
        }
        else if(cnt == 3)
        {
            ans += 6;
        }
        if(cnt == 4)
        {
            ans += 10;
        }

        ans = ans + ((ld-1) * 10); 
        cout << ans << endl;
    }
}
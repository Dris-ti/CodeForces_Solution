#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, m, cnt = 0;
    char c;

    cin >> n >> m;

    string ans = "#Black&White";

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> c;
            if((c == 'C' || c == 'M' || c == 'Y') && cnt == 0)
            {
                ans = "#Color";
                cnt++;
            }
        }
    } 

    cout << ans;
}
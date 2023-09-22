#include <iostream>
using namespace std;

int main()
{
    int n, f, s, cnt = 0;

    cin >> n;
    cin >> f;

    for(int i = 1; i < n; i++)
    {
        cin >> s;
        if(f == s)
        {
        }
        else
        {
            cnt++;
        }
        f = s;
    }

    cout << cnt + 1;

}
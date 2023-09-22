#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string f, s;
    int i;
    cin >> f;
    cin >> s;

    for (  i = 0; i < f.size(); i++)
    {
        f[i] = tolower(f[i]);
    }

    for (  i = 0; i < f.size(); i++)
    {
        s[i] = tolower(s[i]);
    }

    if ( f == s)
    {
        cout << 0;
    }
    else if ( f > s)
    {
        cout << 1;
    }
    else if (f < s)
    {
        cout << -1;
    }

}

#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdin);
#endif

    int t, len;
    string str;
    map<char, int> mp;
    char ch;
    int yes = 1;
    vector<string> v;

    cin >> t;

    while (t--)
    {
        cin >> len;
        cin >> str;

        if (len == 1 || len == 2)
            {
                v.push_back("YES");
                continue;
            }

        for (int i = 0; i < len; i++)
        {
            ch = str[i];
            mp[ch]++;

            if (mp[ch] > 1 && str[i - 1] != str[i])
            {
                yes = 0;
                break;
            }
            else
                yes = 1;
        }
        if (yes == 1)
        {
            v.push_back("YES");
        }
        else
        {
            v.push_back("NO");
        }
        mp.clear();
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\n";
    }
}
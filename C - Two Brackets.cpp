#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int t, cntF = 0, cntT = 0, cnt = 0;
    cin >> t;

    vector<int> v;

    while (t--)
    {
        string s;
        cin >> s;

        cnt = 0;
        cntT = 0;
        cntF = 0;
        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            if (c == '(')
            {
                cntF++;
            }
            else if (c == '[')
            {
                cntT++;
            }
            else if (c == ')')
            {
                if (cntF != 0)
                {
                    cnt++;
                    cntF--;
                }
            }
            else if (c == ']')
            {
                if (cntT != 0)
                {
                    cnt++;
                    cntT--;
                }
            }
        }

        v.push_back(cnt);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}

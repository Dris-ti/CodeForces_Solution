#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<char> v;

    while (t--)
    {
        for (int j = 0; j < 8; j++)
        {
            string s;
            cin >> s;
            for (int i = 0; i < 8; i++)
            {
                char c = s[i];
                if (isalpha(c))
                {
                    v.push_back(c);
                    break;
                }
            }
        }
        v.push_back(' ');
    }

    for (int i = 0; i < v.size(); i++)
    {
        if(v[i] == ' ')
        {
            cout << endl;
        }
        cout << v[i];
    }
}

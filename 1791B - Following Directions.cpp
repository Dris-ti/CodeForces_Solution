#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int t, n;
    string s;
    int x = 0, y = 0;
    bool flag = true;

    vector <string>v;
    cin >>t;

    while(t--)
    {
        cin >> n;
        cin >> s;

        flag = true;
        for(int i = 0; i < s.size(); i++)
        {
            
            char c = s[i];
            

            if(c == 'U')
            {
                y++;
            }
            else if (c == 'D')
            {
                y--;
            }
            else if(c == 'L')
            {
                x--;
            }
            else if(c == 'R')
            {
                x++;
            }

            if(x == 1 && y == 1)
            {
                v.push_back("YES");
                flag = false;
                cout << endl << endl;
                break;
            }

            
            // cout << "C: " << c << " X : " << x << " Y : " << y << endl;
        }

        if(flag)
        {
            v.push_back("NO");
            // cout << endl << endl;
        }
        x = 0;
        y = 0;
            

    }

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }


}

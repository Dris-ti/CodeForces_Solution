#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, c, r = 2;
    cin >> n;
    string str;

    vector<string> v;
    vector<string> out;

    while (n--)
    {
        cin >> c;
        r= 2;
        while (r--)
        {
            int new_c = c;
            while (new_c--)
            {
                char c;
                cin >> c;
                if (c == 'G')
                {
                    str.push_back('B');
                }
                else
                {
                    str.push_back(c);
                }
            }
            v.push_back(str);
            str = "";
        }
        // cout << " " << v[0] << ' ' << v[1] << endl;

        if(v[0] == v[1])
        {
            out.push_back("YES");
        }
        else
        {
            out.push_back("NO");
        }
        v.clear();
        
    }

    for (int i = 0; i < out.size(); i++)
    {
        cout << out[i] << endl;
    }
}

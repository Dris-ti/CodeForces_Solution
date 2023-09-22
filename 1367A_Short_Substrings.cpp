#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int t;
    string str, ans;
    vector<string> outp;

    cin >> t;

    while (t--)
    {
        cin >> str;

        for (int i = 0; i < str.length()-1; i += 2)
        {
            if (str.length() == 2)
            {
                outp.push_back(str);
                continue;
            }
            else
                ans.push_back(str[i]);
        }
        if(ans.size() != 0)
        {
            outp.push_back(ans + str[str.length()-1]);
            //cout << "Size: " << ans.size() << "pushed: " << ans + str[str.length()-1] << endl;
        }

        str.clear();
        ans.clear();
    }

    for (int i = 0; i < outp.size(); i++)
    {
        cout << outp[i] << endl;
    }
}
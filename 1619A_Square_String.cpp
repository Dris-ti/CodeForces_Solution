#include <iostream>
#include <string>
#include <string.h>
#include <vector>
using namespace std;

int main()
{
    int t;
    string str;
    vector <string> ans;

    cin >> t;

    while(t--)
    {
        cin >> str;
        if(str.length() % 2 != 0)
        {
            ans.push_back("NO");
        }
        else
        {
            string one = str.substr(0, str.length()/2);
            string two = str.substr(str.length()/2, str.length());

            if(one.compare(two) != 0)
            {
                ans.push_back("NO");
            }
            else
            {
                ans.push_back("YES");
            }
        }
    }

    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}
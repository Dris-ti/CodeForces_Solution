#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "codeforces";
    char c;
    int t;

    cin >> t;

    while(t--)
    {
        bool yes = false;
        cin >> c;
        for(int i = 0; i < str.length(); i++)
        {
            if(c == str[i])
            {
                cout << "YES\n";
                yes = true;
                break;
            }
        }
        if(!yes)
            cout << "NO\n";
    }
}

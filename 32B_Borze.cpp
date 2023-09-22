#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    string ans;

    cin >> str;

    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == '.')
        {
            ans.push_back('0');
        }
        else if(str[i] == '-')
        {
            if(str[i+1] == '.')
            {
                ans.push_back('1');
            }
            else
            {
                ans.push_back('2');
            }
            i++;
        }
    }
    cout << ans;
}

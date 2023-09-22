#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;
    string sol = "";

    cin >> s1;
    cin >> s2;

    for(int i = 0; i < s1.length(); i++)
    {
        if(s1[i] != s2[i])
        {
            sol.push_back('1');
        }
        else
        {
            sol.push_back('0');
        }
    }
    cout << sol;  
}
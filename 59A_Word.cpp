#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int up = 0, low = 0;
    char c;

    for(int i = 0; i < s.length(); i++)
    {
        if((s[i] >= 65) && (s[i] <= 90))
        {
            up++;
        }
        else if((s[i] >= 97) && (s[i] <= 122))
        {
            low++;
        }
    }
    if(low >= up)
    {
       for(int i = 0; i < s.length(); i++)
       {
        c = tolower(s[i]);
        cout << c;
       }
    }
    else
    {
        for(int i = 0; i < s.length(); i++)
       {
        c = toupper(s[i]);
        cout << c;
       } 
    }
}
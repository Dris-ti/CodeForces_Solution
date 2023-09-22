#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

void canEnter(vector <char> &v, char c)
{
    int cnt = 0;
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] == c)
        {
            cnt++;
            break;
        }
    }
    if(cnt == 0)
        v.push_back(c);
}

int main()
{
    string str;
    vector <char> v;

    getline(cin, str);

    if(isalpha(str[1]))
        v.push_back(str[1]);

    for(int i = 3; i < str.length(); i++)
    {
        if(isalpha(str[i]))
        {
            char c = str[i];
            canEnter(v, c);
        }
    }
    cout << v.size();
}
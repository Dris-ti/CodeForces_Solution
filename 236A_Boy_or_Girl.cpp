#include <iostream>
#include <string>
#include <vector>
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
    {
        v.push_back(c);
    }
}

int main()
{
    string str;
    vector <char> v;

    cin >> str;

    v.push_back(str[0]);

    for(int i = 1; i < str.length(); i++)
    {
        char c = str[i];
        canEnter(v, c);
    }

    if(v.size()%2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }

}
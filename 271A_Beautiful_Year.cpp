#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isDistinct(string str)
{
    int cnt = 0;
    for(int i = 0; i < str.length(); i++)
    {
        for(int j = i+1; j < str.length(); j++)
        {
            if(str[i] == str[j])
            {
                cnt++;
                break;
            }
        }
    }

    if(cnt == 0)
    {
        return true;
    }
    else
    {
        return false;
    }


}

int main()
{
    int yr;

    cin >> yr;

    for(int i = yr+1; i <= 9999; i++)
    {
        string str = to_string(i);
        if(isDistinct(str))
        {
            cout << str;
            break;
        }
    }
}
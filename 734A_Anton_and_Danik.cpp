#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string str;
    int a = 0, d = 0;

    cin >> n;
    cin >> str;

    for(int i = 0; i < n; i++)
    {
        if(str[i] == 'A')
        {
            a++;
        }
        else if(str[i] == 'D')
        {
            d++;
        }
    }

    if(a > d)
    {
        cout << "Anton";
    }
    else if(d > a)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }
}
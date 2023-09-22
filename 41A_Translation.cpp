#include <iostream>
#include <string>
using namespace std;

int main()
{
    string f, l;
    bool flag = true;

    cin >> f;
    cin >> l;

    for(int i = 0, j = l.length() -1; i < f.length(), j >= 0; i++, j--)
    {
        if(f[i] != l[j])
        {
            flag = false;
            break;
        }
    }

    if(flag == false)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}
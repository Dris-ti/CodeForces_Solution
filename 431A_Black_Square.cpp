#include <iostream>
#include <string>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    string str;
    char ch;
    int a, b, c, d, cal = 0;
    

    cin >> a >> b >> c >> d;
    cin >> str;

    for(int i = 0; i < str.length(); i++)
    {
        ch = str[i];
        switch (ch)
        {
        case '1':
            cal += a;
            break;

        case '2':
            cal += b;
            break;

        case '3':
            cal += c;
            break;

        case '4':
            cal += d;
            break;
        
        default:
            break;
        }
    }

    cout << cal;
 
}

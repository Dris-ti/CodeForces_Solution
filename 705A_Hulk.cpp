#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    short d;

    cin >> t;

    if(t == 1)
        {
            cout << "I hate it\n";
            return 0;
        }
    else{
    for(int i = 1; i < t; i++)
    {
        
        if(i % 2 == 0)
        {
            cout << "I love that ";
            d = 2;

        }
        else
        {
            cout << "I hate that ";
            d = 1;
        }
    }

    if(d == 1)
    {
        cout << "I love it";
    }
    else if(d == 2)
    {
        cout << "I hate it";
    }

    }
}
#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    if(x%2 == 0)
    {
        cout << x/2 << endl;
        for(int i = 0; i < x / 2; i++)
        {
            cout << 2 << " ";
        }
    }
    else{
        cout << x/2 << endl;
        for(int i = 0; i < (x/2) - 1; i++)
        {
            cout << 2 << " ";
        }
        cout << 3 << " ";
    }

}

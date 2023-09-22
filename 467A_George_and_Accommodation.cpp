#include <iostream>
using namespace std;

int main()
{
    int input, p, q;
    int canStay = 0;

    cin >> input;

    for(int i = 0; i < input; i++)
    {
        cin>> p;
        cin >> q;

        if(p < q-1)
        {
            canStay++;
        }
    }

    cout << canStay;
}
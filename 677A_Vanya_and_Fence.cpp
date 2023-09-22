#include <iostream>
using namespace std;

int main()
{
    int prsn, h, temp, output = 0;
    
    cin >> prsn;
    cin >> h;

    for(int i = 0; i < prsn; i++)
    {
        cin >> temp;
        if(temp > h)
        {
            output = output + 2;
        }
        else
        {
            output = output + 1;
        }
    }

    cout << output;


}
#include <iostream>
using namespace std;

int main()
{
    int domM = 2;
    int domN = 1;

    int mm, nn, cnt = 0;

    cin >> mm;
    cin >> nn;

    int m = mm;
    int n = nn;

    //decresing M so that we can count upper level N.
    while (m >= domM)
    {
        //counting N for every M level.
        while (n != 0)
        {
            if (n >= domN)
            {
                cnt++;
                n = n - domN;
            }
        }
        n = nn;
        m = m - domM;
    }

    //counting horizontaly.
    while (nn >= domM && m != 0)
    {
        m = m - domM;
        while (nn != 0 && nn >= domM)
        {
            if (nn >= domM)
            {
                cnt++;
                nn = nn - domM;
            }
        }
    }

    cout << cnt;
}
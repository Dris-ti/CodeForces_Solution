#include <iostream>
using namespace std;

int main()
{
    int a, b, diffCnt = 0, sinCnt = 0;

    cin >> a;
    cin >> b;

    while (a != 0 && b != 0)
    {
        a--;
        b--; 
        diffCnt++;
    }

    while (b != 0 && b >= 2)
    {
        b -= 2;
        sinCnt++;
    }

    while (a != 0 && a >= 2)
    {
        a -= 2;
        sinCnt++;
    }

    cout << diffCnt << " " << sinCnt;
}
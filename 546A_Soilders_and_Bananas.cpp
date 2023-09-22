#include <iostream>

using namespace std;

int main()
{
    int k, n, w;
    cin >> k;
    cin >> n;
    cin >> w;
    int p = 0, l = 0;

    for(int i = 1; i <= w; i++)
    {
        p = p + (i * k); 
    }

    if(p > n)
    {

    }else
    {
        l = p - n;
    }
    cout << l;
}
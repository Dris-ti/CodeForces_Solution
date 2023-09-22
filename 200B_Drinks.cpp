#include <iostream>
using namespace std;

int main()
{
    int n, m;
    long double sol = 0.00, drinks;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> m;
        sol = sol + (m/100.00); 
    }

    drinks = (sol / n) * 100;

    cout << drinks;
}
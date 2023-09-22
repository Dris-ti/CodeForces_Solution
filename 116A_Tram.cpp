#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int tCase, ex, en, total = 0;
    int cpct = -1;
    cin >> tCase;

    for(int i = 0; i < tCase; i++)
    {
        cin >> ex;
        cin >> en;

        total = (total - ex) + en;
        cpct = max(total, cpct);
    }
    cout << cpct;
}

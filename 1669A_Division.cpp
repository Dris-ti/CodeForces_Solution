#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <string> v;
    int t, x;

    cin >> t;

    while(t--)
    {
        cin>> x;
        if(1900 <= x)
            v.push_back("Division 1");
        else if(1600 <= x && x <= 1899)
            v.push_back("Division 2");
        else if(1400 <= x && x <= 1599)
            v.push_back("Division 3");
        else if(x <= 1399)
            v.push_back("Division 4");
    }

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}
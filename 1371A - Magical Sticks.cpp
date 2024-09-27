#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >>n;
    vector<int> v;


    while(n--)
    {
        double x;
        cin >> x;
        v.push_back(round(x/2.0));
    }

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}

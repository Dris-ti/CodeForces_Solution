#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long t, ans, cnt = 0, candies;
    vector <int> v;

    cin >> t;
    
    for(int i = 0; i < t; i++)
    {
        cin >> candies;
        if(candies == 0 || candies == 1 || candies == 2)
        {
            v.push_back(0);
        }
        else
        {
            ans = (candies-1)/2;
            v.push_back(ans);
        }
    }
    
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}
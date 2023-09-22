#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int test, p, x, q;
    cin >> test;
    cin >> p;
    vector<int> v;
    if(p != 0)
    {
        cin >> x;
        v.push_back(x);
    }
    
    for(int i = 0; i < p-1; i++)
    {
        cin >>x;
        if(find(v.begin(), v.end(), x) == v.end())
        {
            v.push_back(x);
        }
    }
    cin >> q;

    for(int i = 0; i < q; i++)
    {
        cin >>x;
        if(find(v.begin(), v.end(), x) == v.end())
        {
            v.push_back(x);
        }
    }
    
    if(test == v.size())
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
}
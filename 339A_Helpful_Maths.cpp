#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    string equ;
    cin >> equ;
    vector <char> v;

    for(int i = 0; i < equ.length(); i++)
    {
        if(isdigit(equ[i]))
        {
            v.push_back(equ[i]);
        }
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++)
    {
        if(i != v.size()-1)
        cout << v[i] << "+";
    }
    cout << v[v.size()-1];

    
}

#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
    vector <int> v = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 47};

    int n, m;

    cin >> n >> m;

    vector <int> :: iterator it = find(v.begin(), v.end(), n);

    if(it != v.end())
    {
        if(v.at(it-v.begin()+1) == m)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        cout << "NO";
    }
}
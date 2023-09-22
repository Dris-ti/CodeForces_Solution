#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, x;
    vector <int> v;
    vector <int> nv;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
        nv.push_back(x);
    }

    for(int i = 0; i < n; i++)
    {
        nv.at(v[i] - 1) = i+1;
    }

    for(int i = 0; i < nv.size(); i++)
    {
        cout << nv[i] << " ";
    }

}
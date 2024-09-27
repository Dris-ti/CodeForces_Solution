#include <iostream>
#include <string>
#include<vector>
using namespace std;

int main()
{
    vector <string> v;
    vector <int> out;

    int n;
    cin >> n;
    while(n--)
    {
        string x;
        cin >> x;
        v.push_back(x);
    }

    for(int i = 0; i < v.size(); i++)
    {
        string c= v[i];
        int a = c[0] - '0';
        int b = c[2] - '0';
        out.push_back(a+b);
    }

    for(int i = 0; i < v.size(); i++)
    {
        cout << out[i] << endl;
    }
}

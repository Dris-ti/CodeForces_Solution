#include <iostream>
#include <vector>
using namespace std;

void divi(vector<int>&v, int a, int b)
{
    int res = 0;
    double div;
    div = ((double)a / (double)b);
    if(div - int(div) != 0)
    {
        div = int(div) + 1;
        b = b * int(div);
        res = b - a;
    }
    v.push_back(res);
}

int main()
{
    vector<int> v;
    int a, b, t;

    cin >> t;
    
    for(int i = 0; i < t; i++)
    {
        cin >> a;
        cin >> b;
        divi(v, a, b);
    }

    for(int i = 0; i < t; i++)
    {
        cout << v[i] << endl;
    }
}

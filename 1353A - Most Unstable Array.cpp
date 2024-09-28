#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t, n, x;
    cin >> t;

    vector <int> v;

    while(t--)
    {
        cin >> n >> x;
        if(n == 1)
        {
            v.push_back(0);
        }
        else if(n == 2)
        {
            v.push_back(x);
        }
        else
        {
            v.push_back(2 * x);
        }
    }

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}

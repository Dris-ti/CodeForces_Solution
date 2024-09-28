#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector <int> v;

    while(t--)
    {
        int x;
        cin >> x;
        if(x <= 3)
        {
            v.push_back(x);
        }
        else
        {
            v.push_back(2);
        }
    }

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}

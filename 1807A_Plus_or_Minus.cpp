#include <iostream>
#include <array>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<string> v;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int mx = max(a, b);
        
        if (c > mx)
        {
            v.push_back("+");
        }
        else
        {
            v.push_back("-");
        }
    }

    for (int j = 0; j < v.size(); j++)
    {
        cout << v[j] << endl;
    }
}

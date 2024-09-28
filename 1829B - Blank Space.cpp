#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t, n, mx = 0;
    cin >> t;

    vector <int> v;
    vector <int> out;

    while(t--)
    {
        cin >> n;
        while(n--)
        {
            int x;
            cin >> x;

            if(x == 0)
            {
                v.push_back(x);
                int temp = v.size();
                mx = max(mx, temp);
            }
            else
            {
                v.clear();
            }
        }
        out.push_back(mx);
        mx = 0;
        v.clear();
    }

    for(int i = 0; i < out.size(); i++)
    {
        cout << out[i] << endl;
    }
}

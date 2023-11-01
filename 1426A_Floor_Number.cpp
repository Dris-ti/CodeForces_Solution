#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v;
    int t, n, x;
    cin >> t;

    while(t--)
    {
        cin >> n >> x;
        if(n == 1 || n == 2)
        {
            v.push_back(1);
            continue;
        }

        int f, l;
        for(int i = 2; i <=1000; i++)
        {
            if(i == 2)
            {
                f = 3;
                l = x + f - 1;
            }
            else
            {
                f = l + 1;
                l = f + x - 1;
            }

            if(n >= f && n <= l)
            {
                v.push_back(i);
            }
        }
    }

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}
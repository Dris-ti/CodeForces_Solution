#include <iostream>
#include <vector>
using namespace std;

void canEnter(vector<int> &v, int res)
{
    int cnt = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == res)
        {
            cnt++;
        }
    }
    if (cnt == 0)
    {
        v.push_back(res);
    }
}

void func(vector<int> &v, int main, int temp)
{
    int res = 0;
    int j = 1;
    while (res <= main)
    {
        res = temp * j;
        j++;
        if (res <= main)
        {
            canEnter(v, res);
        }
    }
}

int main()
{
    vector<int> v;
    int k, l, m, n, d;
    int res = 0, i = 1;

    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cin >> d;
    if (k == 1 || l == 1 || m == 1 || n == 1)
    {
        cout << d;
        return 0;
    }
    if (k <= d)
    {
        while (res <= d)
        {
            res = k * i;
            i++;
            if(res <= d)
                v.push_back(res);
        }
    }

    if(l <= d)
        func(v, d, l);

    if(m <= d)
        func(v, d, m);

    if(n <= d)
        func(v, d, n);

    cout << v.size();
}
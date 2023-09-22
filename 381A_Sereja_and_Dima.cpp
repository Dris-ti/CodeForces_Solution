#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
    int n, s = 0, d = 0;
    vector<int> v;
    vector<int> sj;
    vector<int> dm;
    vector<int>::iterator fst;
    vector<int>::iterator lst;
    vector<int>::iterator mx;

    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int len = v.size();
    int i = 0;
    int j = len - 1;
    int cnt = 0;

    while (v.size() != 0)
    {
        fst = v.begin();
        lst = v.end() - 1;

        if (*fst > *lst)
        {
            mx = fst;
        }
        else
        {
            mx = lst;
        }

        if (cnt % 2 == 0)
        {
            s = s + *mx;
        }
        else
        {
            d = d + *mx;
        }
        v.erase(mx);
        cnt++;
    }

    cout << s << " " << d;
}
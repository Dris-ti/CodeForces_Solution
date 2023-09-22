#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include<math.h>
using namespace std;

vector<int> notPrime(long long n)
{
    vector<int> v;
    for(int i = 2; i <= n; i++)
    {
        int c = 0;
        for(int j = 2; j <= sqrt(i); j++)
        {
            if(i % j == 0)
            {
                c++;
                break;
            }
        }
        if(c != 0)
        {
            v.push_back(i);
        }
    }
    return v;
}

bool find(vector<int> v, int outp)
{
    vector<int> :: iterator it;

    it = find(v.begin(), v.end(), outp);
    
    if(it == v.end())
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    long long n;
    int outp;

    cin >> n;
    vector <int> v = notPrime(n);
    int len = v.size() - 1;

    for(int i = len; i >= 0; i--)
    {
        int val = v[i];
        outp = n - val;

        if(find(v, outp) == 1)
        {
            cout << outp << " " << val;
            break;
        }
        else
        {
            v.pop_back();
        }
    }
}
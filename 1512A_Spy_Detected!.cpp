#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int findSpy(vector<int> v)
{
    int fst, snd, trd, val;
    fst = v[0];
    snd = v[1];
    trd = v[2];

    if(fst == snd || fst == trd)
    {
        val = fst;
    }
    else if(snd == trd)
    {
        val = snd;
    }
    return val;
}


int findPos(vector<int> v, int val)
{
    vector <int> :: iterator it;
    int pos = 0;

    for(it = v.begin(); it != v.end(); it++)
    {
        if(*it == val)
        {
            pos++;
        }
        else
        {
            pos++;
            break;
        }
    }
    return pos;
}

int main()
{
    int t, n, x;
    vector <int> inp;
    vector <int> outp;

    cin >> t;

    while(t--)
    {
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            inp.push_back(x);
        }
        int val = findSpy(inp);
        int pos = findPos(inp, val);
        outp.push_back(pos);
        inp.clear();
    }

    for(int i = 0; i < outp.size(); i++)
    {
        cout << outp[i] << endl;
    }
}
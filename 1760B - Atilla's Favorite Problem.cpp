#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int t, n, mx = 0;
    cin >> t;
    string str;
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    vector<int> v;


    while(t--)
    {
        cin >> n;
        cin >> str;
        
        for(int i = 0; i < n; i++)
        {
            char c = str[i];
            int pos = alpha.find(c);
            mx = max(pos, mx);
        }
        v.push_back(mx+1);
        mx = 0;

    }

    for(int i = 0; i < v.size(); i++)
    {
        cout <<v[i] << endl;
    }
}

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n, fsum = 0, lsum = 0;
    string str;
    vector <string> v;

    cin >> n;

    while(n--)
    {
        cin >> str;
        for(int i = str.length()/2 - 1; i >= 0; i--)
        {
            fsum += int(str[i]);
        }

        for(int i = str.length()/2; i < str.length(); i++)
        {
            lsum += int(str[i]);
        }

        if(fsum == lsum)
        {
            v.push_back("YES");
        }
        else
        {
            v.push_back("NO");
        }
        fsum = 0;
        lsum = 0;
    }

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}
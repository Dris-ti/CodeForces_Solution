#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    string x, str;
    vector <string> v;

    cin >> n;

    while(n--)
    {
        cin >> x;
        transform(x.begin(), x.end(), x.begin(),::tolower);

        if(x == "yes")
        {
            v.push_back("YES");
        }
        else
        {
            v.push_back("NO");
        }
    }

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}
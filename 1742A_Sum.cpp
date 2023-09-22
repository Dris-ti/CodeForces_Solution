#include <iostream>
#include <vector> 
using namespace std;

int main()
{
    int n, f, s, t, a, b, c;
    vector <string> v;

    cin >> n;

    while(n--)
    {
        cin >> a >> b >> c;

        if (a > b)
            swap(a, b);
        if(b > c)
            swap(b, c);
        if(a > b)
            swap(a, b);
        
        if((a+b) == c)
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
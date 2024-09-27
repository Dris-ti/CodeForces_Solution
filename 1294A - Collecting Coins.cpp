#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,mx = 0, temp, x;
    cin >> n;

    vector <string> v;

    while(n--)
    {
        int a, b, c, p;
        cin >>a >> b >> c >> p;
        mx = max(a,b);
        mx = max(mx, c);

        temp = (mx - a) + (mx - b) + (mx - c);
        x = p - temp;

        if(x % 3 == 0 && x >= 0)
        {
            v.push_back("YES");
        }
        else{
            v.push_back("NO");
        }   
    }

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}

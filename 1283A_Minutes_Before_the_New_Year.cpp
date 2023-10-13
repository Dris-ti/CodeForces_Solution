#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    int h, m;
    int baseh = 23, basem = 60;
    int oh, om, ans;
    vector <int> v;

    cin >> t;
    
    while(t--)
    {
        cin >> h >> m;
        oh = baseh - h;
        om = basem - m;
        
        if(oh == 0)
        {
            ans = om;
        }
        else if(om == 0)
        {
            ans = oh * 60;
        }
        else
        {
            ans = (oh * 60) + om;
        }
        v.push_back(ans);
    }

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}
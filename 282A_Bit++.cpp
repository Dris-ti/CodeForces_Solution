#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n, x = 0;
    cin>>n;
    string exp;
    for(int i = 0; i< n; i++)
    {
        cin>>exp;
        if(exp == "X++")
        {
            x++;
        }
        else if(exp == "--X")
        {
            --x;
        }
        else if(exp == "++X")
        {
            ++x;
        }
        else if(exp == "X--")
        {
            x--;
        }
    }
    cout<<x;
}

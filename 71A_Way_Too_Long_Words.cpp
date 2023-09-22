#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string arr;

    for(int i = 0; i < n; i++)
    {
        cin>>arr;
        if(arr.length() <= 10)
        {
            cout<<arr<<endl;
        }
        else
        {
            cout<<arr[0]<<arr.length()-2<<arr[arr.length()-1]<<endl;
        }
    }
}

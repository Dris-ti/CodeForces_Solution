#include<iostream>
#include <cstring>
#include <string>
 
//using namespace std;

int main()
{
    int n;
    std :: cin >> n;
    int cnt = 0;

    std :: string s;
    std :: cin >> s;
    int len = s.length();
   
    //char arr[len + 1];
    //strcpy(arr, s.c_str());

    for(int i = 0; i < n; i++)
    {
        if(s[i] == s[i+1])
        {
            cnt++;
        }
    }

    std :: cout << cnt;
}

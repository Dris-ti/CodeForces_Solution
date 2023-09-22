#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    int len = 0;
    int lDigit;
    int lucky = 0;
    long long num = n;
    while(num > 0)
    {
        num = num / 10;
        len++;
    }
    //cout << len;
   
   for(int i = 0; i <= len; i++)
   {
        lDigit = n % 10;
        if((lDigit == 4) || (lDigit == 7))
        {
            lucky++;
            n = n / 10;  
        }
        else
        {
            n = n / 10;
        }
   }
   //cout << lucky;

   if((lucky == 4) || (lucky == 7))
   {
    cout << "YES";
   }
   else
   {
    cout << "NO";
   }
}
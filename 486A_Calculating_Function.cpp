#include <iostream>
using namespace std;

int main()
{
    long long n, sol;
    cin >> n;

    if(n%2 == 0){
        sol = n/2;
        
    }
    else{
        sol = ((n+1)/2) * (-1);
    }

    cout << sol;
}
#include <iostream>
#include <string>
#include <array>
using namespace std;

int main()
{
    int n, t;
    string line;

    cin >> n;
    cin >> t;
    cin >> line;

    for(int j = 0; j < t; j++)
    {
        for(int i = 0; i <= n; )
        {

            if((line[i] == 'B') && (line[i+1] == 'G'))
            {
                int temp = line[i];
                line[i] = line[i+1];
                line[i+1] = temp;
                i=i+2;
            }
            else
            {
                i++;
            }
        }
    }

    

    for(int i = 0; i < n; i++)
    {
        cout << line[i];
    }

    
}

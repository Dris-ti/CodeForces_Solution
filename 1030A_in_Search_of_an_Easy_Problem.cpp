#include <iostream>
using namespace std;

int main()
{
    int n, temp;
    bool ishard = false;

    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        if(temp == 1)
        {
            ishard = true;
            break;
        }
    }

    if(ishard)
    {
        cout << "HARD";
    }
    else
    {
        cout << "EASY";
    }
}
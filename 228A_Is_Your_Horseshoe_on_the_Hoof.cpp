#include <iostream>
#include <array>
using namespace std;

int main()
{
    int cnt = 0;
     int arr[4];

    for(int i = 0; i < 4; i++)
    {
        cin >>arr[i];
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = i; j < 4; j++)
        {
            if(arr[i] >= arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < 3; i++)
    {
        if(arr[i] == arr[i + 1])
        {
            cnt++;
        }
        
    }
    cout << cnt;
}
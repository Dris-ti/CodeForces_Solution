#include<iostream>
using namespace std;

int main()
{
    int f, s;
    int mat[5][5];

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cin >> mat [i] [j];
        }
    }



    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(mat[i][j] == 1)
            {
                f = i;
                s = j;
            }
        }
    }



    if(f == 0 || f == 4)
    {
        switch(s)
        {
        case 0:
            cout << "4";
            break;

        case 1:
            cout << "3";
            break;

        case 2:
            cout << "2";
            break;

        case 3:
            cout << "3";
            break;

        case 4:
            cout << "4";
            break;
        }
    }

    else if(f == 1 || f == 3)
    {
        switch(s)
        {
        case 0:
            cout << "3";
            break;

        case 1:
            cout << "2";
            break;

        case 2:
            cout << "1";
            break;

        case 3:
            cout << "2";
            break;

        case 4:
            cout << "3";
            break;
        }
    }

    else if(f == 2)
    {
        switch(s)
        {
        case 0:
            cout << "2";
            break;

        case 1:
            cout << "1";
            break;

        case 2:
            cout << "0";
            break;

        case 3:
            cout << "1";
            break;

        case 4:
            cout << "2";
            break;
        }
    }
}

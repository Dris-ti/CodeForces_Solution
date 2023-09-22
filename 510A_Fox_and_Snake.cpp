#include <iostream>
using namespace std;

int main()
{
    int n, m, cntr =0;
    bool flag = true;
    cin >> n;
    cin >> m;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; j++)
            {
                cout << "#";
            }
            cout << endl;
            cntr++;
            flag = true;
            if(i == n-1)
            {
                return 0;
            }
        }
        if(cntr % 2 != 0 && flag)
        {
            flag = false;
            for(int k = 0; k < m-1; k++)
            {
                cout << ".";
            }
            cout << "#\n";
        }
        else if(cntr % 2 == 0 && flag)
        {
            flag = false;
            cout << "#";
            for(int k = 0; k < m-1; k++)
            {
                cout << ".";
            }
            cout << endl;
        }
    }
}
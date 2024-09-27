#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> v;
    vector<string> out;
    int n;
    cin >> n;
    int cntA = 0, cntB = 0;

    while (n--)
    {
        string x;
        cin >> x;
        v.push_back(x);
    }

    for (int i = 0; i < v.size(); i++)
    {
        string c = v[i];
        for (int j = 0; j < c.length(); j++)
        {
            if (c[j] == 'A')
            {
                cntA++;
            }
            else if (c[j] == 'B')
            {
                cntB++;
            }

            if (cntA >= 3)
            {
                out.push_back("A");
                cntA = 0;
                cntB = 0;
                break;
            }
            if (cntB >= 3)
            {
                out.push_back("B");
                cntA = 0;
                cntB = 0;
                break;
            }
        }
    }

    for (int i = 0; i < out.size(); i++)
    {
        cout << out[i] << endl;
    }
}

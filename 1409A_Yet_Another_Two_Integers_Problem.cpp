#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long t;
    long a, b;
    int mv = 0, k = 10;
    vector<int> v;

    cin >> t;

    while (t--)
    {
        cin >> a;
        cin >> b;

        while (a != b)
        {
            if (a > b)
            {
                int d = a - b;
                if (d >= 10)
                {
                    d /= 10;
                    a -= 10 * d;
                    mv += d;
                }
                else if (d == 9)
                {
                    d /= 9;
                    a -= 9 * d;
                    mv += d;
                }
                else if (d == 8)
                {
                    d /= 8;
                    a -= 8 * d;
                    mv += d;
                }
                else if (d == 7)
                {
                    d /= 7;
                    a -= 7 * d;
                    mv += d;
                }
                else if (d == 6)
                {
                    d /= 6;
                    a -= 6 * d;
                    mv += d;
                }
                else if (d == 5)
                {
                    d /= 5;
                    a -= 5 * d;
                    mv += d;
                }
                else if (d == 4)
                {
                    d /= 4;
                    a -= 4 * d;
                    mv += d;
                }
                else if (d == 3)
                {
                    d /= 3;
                    a -= 3 * d;
                    mv += d;
                }
                else if (d == 2)
                {
                    d /= 2;
                    a -= 2 * d;
                    mv += d;
                }
                else if (d == 1)
                {
                    a -= 1;
                    mv++;
                }
                else
                {
                    break;
                }
            }
            else if (a < b)
            {
                int d = b - a;
                if (d >= 10)
                {
                    d /= 10;
                    a += 10 * d;
                    mv += d;
                }
                else if (d == 9)
                {
                    d /= 9;
                    a += 9 * d;
                    mv += d;
                }
                else if (d == 8)
                {
                    d /= 8;
                    a += 8 * d;
                    mv += d;
                }
                else if (d == 7)
                {
                    d /= 7;
                    a += 7 * d;
                    mv += d;
                }
                else if (d == 6)
                {
                    d /= 6;
                    a += 6 * d;
                    mv += d;
                }
                else if (d == 5)
                {
                    d /= 5;
                    a += 5 * d;
                    mv += d;
                }
                else if (d == 4)
                {
                    d /= 4;
                    a += 4 * d;
                    mv += d;
                }
                else if (d == 3)
                {
                    d /= 3;
                    a += 3 * d;
                    mv += d;
                }
                else if (d == 2)
                {
                    d /= 2;
                    a += 2 * d;
                    mv += d;
                }
                else if (d == 1)
                {
                    a += 1;
                    mv++;
                }
                else
                {
                    break;
                }
            }
        }
        v.push_back(mv);
        mv = 0;
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}
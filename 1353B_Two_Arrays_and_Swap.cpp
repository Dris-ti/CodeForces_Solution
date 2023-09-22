#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdin);
#endif

    int t, n, k, x;

    cin >> t;

    while(t--)
    {
        int sum = 0;
        cin >> n >> k;
        vector <int> v1;
        vector <int> v2;

        for(int i = 0; i < n; i++)
        {
            cin >> x;
            v1.push_back(x);
        }

        for(int i = 0; i < n; i++)
        {
            cin >> x;
            v2.push_back(x);
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end(), greater{});

        for(int i = 0; i < k; i++)
        {
            if(v1[i] < v2[i])
                swap(v1[i], v2[i]);
        }

        for(int i = 0; i < v1.size(); i++)
        {
            sum += v1[i];
        }
        cout << sum << endl;
    }
}
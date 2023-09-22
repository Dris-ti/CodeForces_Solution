#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int ppl, x;
    cin >> ppl;
    vector <int> v;
    int cnt = 0;

    for(int i = 0; i < ppl; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    int maxIdx = distance(v.begin(), max_element(v.begin(), v.end()));
    //cout <<"Max: " << maxIdx<< endl;

    for(int i = maxIdx, j = maxIdx-1; i > 0; i--, j--)
    {
        swap(v[i], v[j]);
        cnt++;
    }

    // for(int i = 0; i < ppl; i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    int minELe = *min_element(v.begin(), v.end());
    int minIdx;

    for(int i = 0; i < ppl; i++)
    {
        if(v[i] == minELe)
        {
            minIdx = i;
        }
    }
    //cout << "Min: " << minIdx<< endl;

    for(int i = minIdx, j = minIdx +1; i < ppl-1; i++, j++)
    {
        swap(v[i], v[j]);
        cnt++;
    }

    // for(int i = 0; i < ppl; i++)
    // {
    //     cout << v[i] << " ";
    // }
     cout << cnt;


    
}
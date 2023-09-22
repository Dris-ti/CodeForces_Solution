#include <iostream>
#include <vector>
#include <string>
using namespace std;

void canEnter(vector <char> &v, char c)
{
    int cnt = 0;
    for(int i = 0; i < v.size(); i++)
    {
        c = toupper(c);
        if(v[i] == c){
            cnt++;
            break;
        }  
    }

    if(cnt == 0)
        v.push_back(c);
}

int main()
{
    int n;
    string str;
    vector<char>v;

    cin >> n;
    cin >> str;
    if(n < 26)
    {
        cout << "NO";
        return 0;
    }
    v.push_back(toupper(str[0]));

    for(int i = 1; i < n; i++)
    {
        char c = str[i];
        canEnter(v, c);
    }

    if(v.size() == 26)
        cout << "YES";
    else
        cout << "NO";
}
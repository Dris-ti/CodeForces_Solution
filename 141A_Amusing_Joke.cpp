#include <iostream>
#include <vector>
#include <string>
#include <iterator>
using namespace std;

int main()
{
    string gS, hS, s;
    vector <char> v;
    vector <char> g;
    vector <char> h;

    cin >> gS;
    cin >> hS;
    cin >> s;

    for(int i = 0; i < s.length(); i++)
    {
        v.push_back(s[i]);
    }

    for(int i = 0; i < gS.length(); i++)
    {
        g.push_back(gS[i]);
    }

    for(int i = 0; i < hS.length(); i++)
    {
        h.push_back(hS[i]);
    }
    
    vector <char> :: iterator it;
    vector <char> :: iterator itG;
    vector <char> :: iterator itH;
    

    if((g.size() + h.size()) == v.size())
    {
        for(itG = g.begin(); itG != g.end(); itG++)
        {
            for(it = v.begin(); it != v.end(); it++)
            {
                if(*it == *itG)
                {
                    v.erase(it);
                    break;
                }
            }
        }

        for(itH = h.begin(); itH != h.end(); itH++)
        {
            for(it = v.begin(); it != v.end(); it++)
            {
                if(*it == *itH)
                {
                    v.erase(it);
                    break;
                }
            }
        }
    }

    if(v.size() == 0)
        cout << "YES";

    else
        cout << "NO";

}
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    cin >> word;

    
    for (int i = 0; i < word.length(); i++)
    {
        if (i == 0 && word[i] > 90)
        {
            word[0] = word[0] - 32;
            cout << word[0];
        }
        else
        {
            cout << word[i];
        }
    }
}
#include <bits/stdc++.h>
using namespace std;

int count_consonants(string &s)
{

    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (!(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' && s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'))
        {
            count++;
        }
    }

    return count;
}

int main()
{
    string s;
    cin >> s;
    cout << count_consonants(s);
}
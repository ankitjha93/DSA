#include <bits/stdc++.h>
using namespace std;

int count_vowels(string &s)
{

    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
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
    cout << count_vowels(s);
}
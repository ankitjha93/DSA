#include <bits/stdc++.h>

using namespace std;

vector<bool> kidsWithMaxCandi(int n, vector<int> candies, int extraCandies)
{
    //   int maxCandy = *max_element(candies.begin(), candies.end());

    int maxCandy = candies[0];

    for (int i = 0; i < n; i++)
    {
        if (candies[i] > maxCandy)
        {
            maxCandy = candies[i];
        }
    }

    vector<bool> result(n);

    for (int i = 0; i < n; i++)
    {
        if (candies[i] + extraCandies >= maxCandy)
        {
            result[i] = true;
        }
        else
        {
            result[i] = false;
        }
    }

    return result;
}

int main()
{
    // your code goes here
    int n;
    cin >> n;
    int extraCandies;
    cin >> extraCandies;

    vector<int> candies(n);

    for (int i = 0; i < n; i++)
    {
        cin >> candies[i];
    }

    vector<bool> ans = kidsWithMaxCandi(n, candies, extraCandies);

    for (int i = 0; i < n; i++)
    {

        //  cout<<(ans[i]  ? 'true' : false);

        if (ans[i] == true)
        {
            cout << "true ";
        }
        else
        {
            cout << "false ";
        }
    }
}
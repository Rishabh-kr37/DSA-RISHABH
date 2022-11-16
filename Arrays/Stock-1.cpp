// Q-STOCK BUY AND SELL 1;

#include <iostream>
using namespace std;
#include <vector>
#include <bits/stdc++.h>

int max_profit(vector<int> &arr)
{

        int maxpro = 0;
        int miniprice = INT_MAX;
        int n = arr.size();

        for (int i = 0; i < n; i++) // SINGLE LOOP ;TC-O(N)
        {
                miniprice = min(arr[i], miniprice);
                maxpro = max(maxpro, arr[i] - miniprice);
        }
        return maxpro;
}

int main()
{

        vector<int> price = {8, 6, 9, 3, 1, 6};
        int ans = max_profit(price);
        cout << ans;
}
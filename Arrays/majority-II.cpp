// Q-Majority element n/3
// brute force approach


#include <iostream>
using namespace std;
#include <bits/stdc++.h>

vector<int> solve(int arr[], int n)
{
        unordered_map<int, int> mp;
        int size = n / 3;
        vector<int> ans;

        for (int i = 0; i < n; i++)
        {
                mp[arr[i]]++;
        }

        for (auto itr : mp)
        {
                if (itr.second > size)
                {
                        ans.push_back(itr.first);
                }
        }
        return ans;
}
int main()
{
        int arr[] = {1, 2, 2, 3, 2, 4};
        int n = 6;
        vector<int> majority = solve(arr, n);

        for (auto itr : majority)
        {
                cout << itr << " " << endl;
        }
}
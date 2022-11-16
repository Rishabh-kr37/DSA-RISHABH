// FIND THE REPEATING NUMBER AND MISSING

#include <iostream>
using namespace std;

#include <bits/stdc++.h>

vector<int> solve(int arr[], int n)
{
        vector<int> subsitute(n, 0);
        vector<int> ans;

        for (int i = 0; i < n; i++)
        {
                subsitute[arr[i]]++;
        }

        for (int i = 1; i <= n; i++)
        {

                if (subsitute[i] == 0 || subsitute[i] > 1)
                {
                        ans.push_back(i);
                }
        }
        return ans;
}

int main()
{
        int arr[] = {1, 3, 3};
        int n = sizeof(arr) / sizeof(arr[0]);
        vector<int> solveans = solve(arr, n);

        for (auto val : solveans)
        {
                cout << val << " ";
        }
        return 0;
}

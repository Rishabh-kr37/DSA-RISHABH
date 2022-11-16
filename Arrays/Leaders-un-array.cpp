// Q- LEADERS IN ARRY

#include <iostream>
using namespace std;
#include <bits/stdc++.h>

vector<int> solve(int arr[], int n)
{

        int maxi = n - 1;

        vector<int> v;
        v.push_back(arr[n - 1]);

        for (int i = 0; i < n; i++)
        {
                if (arr[i] > maxi)
                {
                        v.push_back(arr[i]);
                        maxi = arr[i];
                }
        }
        reverse(v.begin(), v.end());
        return v;
}

int main()
{
        int arr[] = {10, 22, 12, 5, 1};
        int n = 6;
        vector<int> p = solve(arr, n);
        for (int i = 0; i < p.size(); i++)
        {
                cout << p[i] << " ";
        }
}

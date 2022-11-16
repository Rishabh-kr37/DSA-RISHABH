// Maximum Sum Subarray of size K

#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int solve(int arr[], int n, int k)
{
        int i = 0, j = 0;
        long sum = 0;
        long max_sum = INT_MIN;

        while (j < n)
        {
                sum = sum + arr[j];

                if (j - i + 1 < k)
                {
                        j++;
                }
                else if (j - i + 1 == k)
                {
                        max_sum = max(max_sum, sum);
                        sum = sum - arr[i];
                        i++;
                        j++;
                }
        }
        return max_sum;
}
int main()
{

        int arr[] = {2, 4, 6, 8, 10};
        int n = sizeof(arr) / sizeof(arr[0]);
        int k = 3;
        int ans = solve(arr, n, 3);

        cout << ans << endl;
}

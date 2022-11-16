/*
3sum closet
Given an array A[] of N integers and an integer X.
The task is to find the sum of three integers in A[] such that it is closest to X.


Example 1:

Input:
N = 4
A[] = {-1 , 2, 1, -4}
X = 1
Output: 2
Explaination:
Sums of triplets:
(-1) + 2 + 1 = 2
(-1) + 2 + (-4) = -3
2 + 1 + (-4) = -1
2 is closest to 1.
*/

#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int solve(int arr[], int n, int target)
{
        int diff = INT_MAX;
        int ans = 0;
        sort(arr, arr + n);

        for (int i = 0; i < n; i++)
        {
                int first = arr[i];
                int start = i + 1;
                int end = n - 1;

                while (start < end)
                {
                        if (first + arr[start] + arr[end] == target)
                                return target;
                        else if (abs(first + arr[start] + arr[end] - target))
                        {
                                diff = abs(first + arr[start] + arr[end] - target);
                                ans = first + arr[start] + arr[end];
                        }
                        if (first + arr[start] + arr[end] > target)
                        {
                                end--;
                        }
                        else
                        {
                                start++;
                        }
                }
        }
        return ans;
}
int main()
{
        int arr[] = {-1, 2, 1, -4};
        int n = 4;
        int target = 1;

        cout << solve(arr, n, target) << " ";
}
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <vector>

int maxsub(vector<int> &nums, vector<int> &subarray)
{

        int n = nums.size();
        int maxsum = INT_MIN;

        for (int i = 0; i < n; i++)
        {
                int cur_sum = 0;
                for (int j = i; j <= n; j++)

                {
                        cur_sum = cur_sum + nums[j];
                        if (cur_sum > maxsum)
                        {
                                subarray.clear();
                                maxsum = cur_sum;
                                subarray.push_back(i);
                                subarray.push_back(j);
                        }
                }
        }
        return maxsum;
}

int main()
{

        vector<int> array = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
        vector<int> subarray;

        int ans = maxsub(array, subarray);
        cout << ans << endl;
        for (int i = subarray[0]; i <= subarray[1]; i++)
        {
                cout << array[i] << " ";
        }
}
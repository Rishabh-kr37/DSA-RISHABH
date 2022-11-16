#include <iostream>
using namespace std;
#include <vector>

vector<int> twosum(vector<int> arr, int target)
{
        vector<int> vec;

        for (int i = 0; i < arr.size(); i++)
        {

                for (int j = i + 1; j < arr.size(); j++)
                {
                        if (arr[i] + arr[j] == target)
                        {
                                vec.emplace_back(i);
                                vec.emplace_back(j);
                                break;
                        }
                }
                if (vec.size() == 2) // if we not use this statement then all the possible value will print.
                {
                        break;
                }
        }
        return vec;
}

int main()
{

        vector<int> arr = {2, 4, 6, 8, 10};
        int target = 12;

        vector<int> ans = twosum(arr, target);
        for (int i = 0; i < ans.size(); i++)
        {
                cout << ans[i] << " ";
        }
}

/*BETTER APPROACH
NOT GETING OUTPUT AND ALSO NOT ANY ERROR

#include <iostream>
using namespace std;
#include <vector>
#include <bits/stdc++.h>

vector<int> twosum(vector<int> &nums, int target)
{
        vector<int> ans, store;
        store = nums;
        sort(store.begin(), store.end());

        int start = 0, end = nums.size() - 1;
        int n1;
        int n2;

        while (start < end)
        {

                if (store[start] + store[end] == target)
                {
                        n1 = store[start];
                        n2 = store[end];
                        break;
                }
                else if (store[start] + store[end] > target)
                {
                        end--;
                }
                else
                {
                        start++;
                }
                for (int i = 0; i < nums.size(); i++)
                {
                        if (nums[i] == n1)
                        {
                                ans.emplace_back(i);
                        }
                        else if (nums[i] == n2)
                        {
                                ans.emplace_back(i);
                        }
                        for (int i = 0; i < ans.size(); i++)
                        {
                                cout << ans[i] << " ";
                        }
                }
                return ans;
        }
}

int main()
{

        vector<int> nums = {10, 6, 2, 4, 8};
        int target = 14;

        vector<int> main = twosum(nums, target);

        for (int i = 0; i < main.size(); i++)
        {
                cout << main[i] << " ";
        }
}
 */
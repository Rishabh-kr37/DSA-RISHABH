#include <iostream>
#include <limits.h>
using namespace std;

// arr: input array
// n: size of array
// Function to find the sum of contiguous subarray with maximum sum.
int maxSubarraySum(int arr[], int n)
{

        int maxsum = 0; // If all the numbers in arry are negtaive then just initilize maxsum=INT/-MIN
        int cursum = 0;

        for (int i = 0; i < n; i++)
        {
                cursum = cursum + arr[i];

                if (cursum > maxsum)
                {
                        maxsum = cursum;
                }
                if (cursum < 0)
                {
                        cursum = 0;
                }
        }
        return maxsum;

        /*int maxSum = INT_MIN, sum = 0;
        for (int i = 0; i < n; i++)
        {
                sum = sum + arr[i];
                maxSum = max(maxSum, sum);

                if (sum < 0)
                {
                        sum = 0;
                }
        }

        return maxSum;
        */
}

int main()
{
        int boy[5] = {1, -2, 3, -2, 5};

        // maxSubarraySum(boy, 5);

        cout << "max sum is " << maxSubarraySum(boy, 5) << endl;

        return 0;
}
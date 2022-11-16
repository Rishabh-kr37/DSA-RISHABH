#include <iostream>
using namespace std;

void solve(int arr[], int n, int presum[])
{

        presum[0] = arr[0];

        for (int i = 1; i < n; i++)
        {
                presum[i] = presum[i - 1] + arr[i];
        }
}

int main()
{

        int arr[] = {2, 4, 6, 8, 10};
        int n = 5;
        int presum[n];
        solve(arr, 5, presum);
        for (int i = 0; i < n; i++)
        {
                cout << presum[i] << " ";
        }
}
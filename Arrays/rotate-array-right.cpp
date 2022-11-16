// For Rotating the Elements to right
// tc=o(n)
// sc=o(k)

#include <iostream>
using namespace std;

void solve(int arr[], int n, int k)
{

        k = k % n;
        int temp[k];

        for (int i = n - 2; i < n; i++)
        {
                temp[i - n + k] = arr[i]; // copied in temp
        }
        for (int i = n - 1; i >= 0; i--)
        {
                arr[i] = arr[i - k]; // shifted
        }
        for (int i = 0; i < k; i++)
        {
                arr[i] = temp[i];
        }
        for (int i = 0; i < n; i++)
        {
                cout << arr[i] << " ";
        }
}

int main()
{
        int arr[] = {1, 2, 3, 4, 5, 6, 7};
        // 6712345
        int n = 7;
        int k = 2;

        solve(arr, 7, 2);
}
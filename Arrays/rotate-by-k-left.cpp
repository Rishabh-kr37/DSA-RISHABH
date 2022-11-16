// For Rotating the Elements to left
// tc-o(n)
// sc=o(k)

#include <iostream>
using namespace std;
#include <array>

void solve(int arr[], int n, int k)
{
        k = k % n;
        int temp[k];
        for (int i = 0; i < k; i++)
        {
                temp[i] = arr[i];
        }
        for (int i = 0; i < n - k; i++)
        {
                // cout << k << endl;

                arr[i] = arr[i + k];
        }
        for (int i = n - k; i < n; i++)
        {
                arr[i] = temp[i - n + k]; // 5-7+2=0,6-7+2=1;
                cout << i - n + k << endl;
        }
        for (int i = 0; i < n; i++)
        {
                cout << arr[i] << " ";
        }
}

int main()
{

        int arr[] = {1, 2, 3, 4, 5, 6, 7};

        int k = 2;
        int n = 7;

        solve(arr, 7, 2);
}

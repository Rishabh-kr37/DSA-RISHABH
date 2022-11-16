// For Rotating Elements to left
// tc=o(n)
// sc=(1) not using any extra space or temp variable
#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end)
{
        while (start <= end)
        {

                int temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;
                start++;
                end--;
        }
}

void solve(int arr[], int n, int k)
{
        reverse(arr, k, n - 1); // 2 to 5
        reverse(arr, 0, k - 1); // 0 to 1
        reverse(arr, 0, n - 1); // 0 to 6
}
int main()
{
        int arr[] = {1, 2, 3, 4, 5, 6, 7};

        int n = 7;
        int k = 2;

        solve(arr, 7, 2);
        for (int i = 0; i < n; i++)
        {
                cout << arr[i] << " ";
        }
}
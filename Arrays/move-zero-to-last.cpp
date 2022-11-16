// MOVE ALL ZERO TO LAST
// TC=O(N)
// SC=O(1)

#include <iostream>
using namespace std;

void solve(int arr[], int n)
{
        int k = 0;
        // cout << k << endl;
        while (k < n)
        {
                if (arr[k] == 0)
                {
                        break;
                }
                else
                {
                        k = k + 1;
                        cout << k << endl;
                }
        }

        int i = k, j = k + 1;
        cout << k << endl;
        while (i < n && j < n)
        {
                if (arr[j] != 0)
                {
                        int temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                        i++;
                }
                j++;
        }
        for (i = 0; i < n; i++)
        {
                cout << arr[i] << " ";
        }
}
int main()
{
        int arr[] = {3, 5, 0, 0, 4};
        int n = 5;
        solve(arr, 5);
}

/*

TC=0(N)
SC=O(N) USING TEMP ARRAY

#include <iostream>
using namespace std;

void solve(int arr[], int n)
{
        // formula= n-k=remaining size of array where we put 0
        int k = 0;
        int temp[n];

        for (int i = 0; i < n; i++)
        {
                if (arr[i] != 0)
                {
                        temp[k] = arr[i];
                        k++;
                }
        }
        while (k < n)
        {
                temp[k] = 0;
                k++;
        }
        for (int i = 0; i < n; i++)
        {
                cout << temp[i] << " ";
        }
}

int main()
{
        int arr[] = {1, 0, 2, 0, 0, 0, 3, 0, 4, 0, 5};
        int n = 11;
        solve(arr, n);
}*/

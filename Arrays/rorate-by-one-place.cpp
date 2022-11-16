#include <iostream>
using namespace std;

void solve(int arr[], int n)
{
        int temp = arr[0]; // storing the first value in temp

        for (int i = 0; i < n - 1; i++) // n-1 because we have to put the temp value at the n place.
        {

                arr[i] = arr[i + 1];
        }

        arr[n - 1] = temp;
        for (int i = 0; i < n; i++)
        {

                cout << arr[i] << " ";
        }
}

int main()
{

        int arr[] = {11, 22, 33, 44, 55};
        int n = 5;

        solve(arr, 5);
}
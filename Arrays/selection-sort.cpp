#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void solve(int arr[], int n)
{
        for (int i = 0; i < n - 1; i++)
        {

                for (int j = i + 1; j < n - 1; j++)
                {

                        if (arr[i] > arr[j])
                        {

                                int temp = arr[i];

                                arr[i] = arr[j];

                                arr[j] = temp;
                        }
                }
        }
}

void print(int arr[], int n)
{
        for (int i = 0; i < n; i++)
        {
                cout << arr[i] << " ";
        }
        cout << endl;
}

int main()
{
        int arr[] = {5, 2, 6, 8, 9, 10};
        int n = 6;
        solve(arr, n);
        print(arr, n);
}
#include <iostream>
using namespace std;

void solve(int arr[], int n, int k)
{

        for (int i = 0; i < n; i++)
        {

                int sum = 0;
                for (int j = i; j < n; j++)
                {
                        sum = sum + arr[j];

                        if (sum == k)
                        {
                                for (int p = i; p <= j; p++)
                                {
                                        cout << arr[p] << " ";
                                }
                                cout << endl;
                        }
                }
        }
}

int main()
{

        int arr[] = {1, 2, 3, 4, 5, 6};
        int n = 6;

        int k = 9;
        solve(arr, n, k);
}

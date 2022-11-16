#include <iostream>
using namespace std;
#include <bits/stdc++.h>
void majority(int arr[], int n)
{
        map<int, int> umap;
        int maj = n / 2;

        for (int i = 0; i < n; i++)
        {
                umap[arr[i]]++;
        }

        for (auto itr = umap.begin(); itr != umap.end(); itr++) // iterator
        {
                // cout << itr->first << " " << itr->second << endl;

                if (itr->second > maj)
                {
                        cout << "majority is " << itr->first << endl;
                }
        }
}
int main()
{
        int arr[] = {1, 2, 1, 1, 3, 1, 3, 1};
        int n = sizeof(arr) / sizeof(arr[0]);
        majority(arr, n);
}

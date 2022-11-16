#include <iostream>
using namespace std;

#include <bits/stdc++.h>

int duplicates(int arr[], int n)
{

        set<int> set;

        for (int i = 0; i < n; i++)
        {
                set.insert(arr[i]); // inserting arrray into set
        }
        int k = set.size();
        int j = 0;
        for (int x : set) // x is iterating on the every element of set
        {
                arr[j++] = x; //
        }
        return k;
}

int main()
{

        int arr[] = {11, 22, 33, 33, 33, 44, 44, 44};
        int n = sizeof(arr) / sizeof(arr[0]);

        int k = duplicates(arr, n); // k return size i.e 4 but function return the array
        cout << k << " ";
        for (int i = 0; i < k; i++)
        {
                cout << arr[i] << " ";
        }

        return 0;
}
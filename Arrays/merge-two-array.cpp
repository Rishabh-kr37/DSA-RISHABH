
/*
Merge Without Extra Space

Given two sorted arrays arr1[] and arr2[] of sizes n and m in non-decreasing order.
Merge them in sorted order without using any extra space.
Modify arr1 so that it contains the first N elements and modify arr2 so that it contains the last M elements.
*/

#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int solve(long long arr1[], long long arr2[], int n, int m)
{

        vector<int> v;
        for (int i = 0; i < n; i++)
        {
                v.push_back(arr1[i]); // pushing back ele of arr1 into vector
        }

        for (int j = 0; j < m; j++)
        {
                v.push_back(arr2[j]); // pushing back ele of arr2 into vector
        }

        sort(v.begin(), v.end()); // sorting the inserted ele of vector

        for (int i = 0; i < n; i++)
        {
                arr1[i] = v[i]; // replacing original arr1 ele from sorted vector v
        }

        for (int i = 0; i < m; i++)
        {
                arr2[i] = v[n + i]; // replacing original arr2 from sorted vector v
        }
}

int main()
{

        long long arr1[] = {1, 3, 5, 7};
        long long arr2[] = {0, 2, 6, 8, 9};
        int n = 4;
        int m = 5;
        solve(arr1, arr2, n, m);

        cout << "arr1 []= ";

        for (int i = 0; i < n; i++)
        {
                cout << arr1[i];
        }
        cout << endl;

        cout << "arr2 []= ";

        for (int i = 0; i < m; i++)
        {
                cout << arr2[i];
        }
}
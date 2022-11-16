#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void rearrange(int arr[], int n)
{
        // code here
        vector<int> pos, neg;
        for (int i = 0; i < n; i++)
        {
                if (arr[i] < 0)
                {
                        neg.push_back(arr[i]);
                }
                else
                {
                        pos.push_back(arr[i]);
                }
        }

        int i = 0, j = 0, k = 0;
        while (i < neg.size() && j < pos.size())
        {
                arr[k++] = pos[j++];
                arr[k++] = neg[i++];
        }
        while (j < pos.size()) // if any element are left in pos vector then all will print
        {
                arr[k++] = pos[j++];
        }
        while (i < neg.size()) // if any element are left in neg vector then all will print
        {
                arr[k++] = neg[i++];
        }
}

int main()
{

        int arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2};
        int n = 9;
        rearrange(arr, n);

        for (int i = 0; i < n; i++)
        {
                cout << arr[i] << " ";
        }
}
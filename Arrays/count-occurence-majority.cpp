#include <iostream>
using namespace std;
#include <vector>
#include <bits/stdc++.h>

void countFreq(int arr[], int n)
{
        vector<bool> visitied(n, false);

        int majority = n / 2;
        // cout << majority;

        for (int i = 0; i < n; i++)
        {

                if (visitied[i] == true)
                {
                        continue; // skiping the array element if already mark as true;
                }

                int count = 1;

                for (int j = i + 1; j < n; j++)
                {

                        if (arr[i] == arr[j])
                        {
                                visitied[j] = true;
                                count++;
                                if (count > majority)
                                {
                                        cout << "majority is " << arr[i] << " " << endl; // majority elements
                                }
                        }
                }
                cout << arr[i] << " " << count << endl; // printing elements wid its occurence
                // cout << majority;
        }
}

int main()
{

        int arr[] = {2, 3, 2, 2, 2, 1, 2, 1, 2, 1};
        int n = sizeof(arr) / sizeof(arr[0]);
        countFreq(arr, n);
        return 0;
}
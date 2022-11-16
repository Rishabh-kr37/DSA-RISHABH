#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int secondlargest(int arr[], int n)
{

        int largest = -1, secondlargest = -1;

        for (int i = 0; i < n; i++)
        {

                if (arr[i] > largest || arr[i] > secondlargest)
                {
                        if (arr[i] > largest)
                        {

                                secondlargest = largest;
                                largest = arr[i];
                        }
                        else if (arr[i] < largest)
                        {
                                secondlargest = arr[i];
                        }
                }
        }
        return secondlargest;
}

int main()
{

        int Arr[7] = {12, 35, 1, 10, 34, 34, 34};
        int ans = secondlargest(Arr, 7);

        cout << "secondlargest " << ans << endl;
}
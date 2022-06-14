#include <iostream>
using namespace std;

int unique(int arr[], int size)
{
        int ans = 0;
        for (int i = 0; i < size; i++)
        {
                ans = arr[i] ^ ans;
        }
        return ans;
}

int main()
{
        int arr[5] = {1, 2, 1, 44, 2};

        unique(arr, 5);
        int found = unique(arr, 5);
        cout << found << endl;
}
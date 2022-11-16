#include <iostream>
using namespace std;
#include <unordered_map>

int solve(int arr[], int n)
{
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
                mp[arr[i]]++;
        }

        for (int i = 0; i < n; i++)
        {
                int key = arr[i];
                auto temp = mp.find(key);
                if (temp->second == 1)
                        return key;
        }
        return 0;
}
int main()
{

        int arr[] = {1, 1, 2, 3, 3, 3, 2, 5, 5};
        int n = 9;
        solve(arr, n);
        cout << solve(arr, n) << endl;
}
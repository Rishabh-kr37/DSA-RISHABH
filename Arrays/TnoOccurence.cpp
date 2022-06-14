#include <iostream>
using namespace std;

int firstOccurence(int arr[], int n, int key)
{
        int start = 0;
        int end = n - 1;
        int mid = start + (end - start) / 2;

        int ans = -1;

        while (start <= end)
        {

                if (arr[mid] == key)
                {

                        ans = mid;
                        end = mid - 1;
                }
                else if (key > arr[mid])
                {
                        start = mid + 1;
                }
                else if (key < arr[mid])
                {
                        end = mid - 1;
                }
                mid = start + (end - start) / 2;
        }
        return ans;
}

int lastOccurence(int arr[], int n, int key)
{
        int start = 0;
        int end = n - 1;
        int mid = start + (end - start) / 2;

        int ans = -1;

        while (start <= end)
        {

                if (arr[mid] == key)
                {

                        ans = mid;
                        start = mid + 1;
                }
                else if (key > arr[mid])
                {
                        start = mid + 1;
                }
                else if (key < arr[mid])
                {
                        end = mid - 1;
                }
                mid = start + (end - start) / 2;
        }
        return ans;
}

int main()
{
        int even[7] = {1, 2, 3, 3, 3, 3, 3};

        cout << "first occurence of 3 index is " << firstOccurence(even, 7, 3) << endl;
        cout << "last occurence of 3 index is " << lastOccurence(even, 7, 3) << endl;
        cout << "total no occurence is " << lastOccurence(even, 7, 3) - firstOccurence(even, 7, 3) + 1 << endl;
        // total no of occurence
        return 0;
}
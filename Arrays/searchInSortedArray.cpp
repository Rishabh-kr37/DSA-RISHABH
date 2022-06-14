#include <iostream>
using namespace std;

int getpivot(int arr[], int n)
{
        int s = 0;
        int e = n - 1;
        int mid = s + (e - s) / 2;

        while (s < e)
        {
                if (arr[mid] >= arr[0])
                {
                        s = mid + 1;
                }
                else
                {
                        e = mid;
                }
                mid = s + (e - s) / 2;
        }
        return s;
}

int binarySearch(int arr[], int size, int e, int key)
{
        int start = 0;
        int end = size - 1;

        int mid = start + (end - start) / 2;
        // int mid = (start + end) / 2; In this case when no is
        //  intmax the value will be overflow

        while (start <= end)
        {
                if (arr[mid] == key)
                {
                        return mid;
                }
                // go to right wala part

                if (key > arr[mid])
                {
                        start = mid + 1;
                }
                else
                {
                        end = mid - 1;
                }
                mid = start + (end - start) / 2;
                // mid = (start + end) / 2;
        }
        return -1;
}

int findPosition(int arr[], int n, int k)
{
        int pivot = getpivot(arr, n);
        if (k >= arr[pivot] && k <= arr[n - 1]) // bs on second line else
        {
                return binarySearch(arr, pivot, n - 1, k);
        }
        else
        {
                return binarySearch(arr, 0, pivot - 1, k); // bs on first line
        }
}

void printArray(int arr[], int n)
{
        for (int i = 0; i < n; i++)
        {
                cout << arr[i] << " ";
        }
        cout << endl;
}

int main()
{

        int boy[8] = {7, 8, 1, 2, 3, 4, 5, 6};
        int index = findPosition(boy, 8, 5);
        printArray(boy, 8);
        cout << "here" << index << endl;
}

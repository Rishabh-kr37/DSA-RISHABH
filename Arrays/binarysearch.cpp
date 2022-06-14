#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
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
                else // key < key
                {
                        end = mid - 1;
                }
                mid = start + (end - start) / 2;
                // mid = (start + end) / 2;
        }
        return -1;
}

int main()
{
        int even[6] = {2, 4, 6, 12, 18, 20};
        int odd[5] = {3, 8, 11, 14, 16};

        int evenindex = binarySearch(even, 6, 20);
        cout << "Index of 20 is " << evenindex << endl;

        int oddindex = binarySearch(odd, 5, 44);
        cout << "Index of 11 is " << oddindex << endl;

        return 0;
}
#include <iostream>
using namespace std;

int firstoccurence(int arr[], int size, int key)
{

        int start = 0;
        int end = size - 1;

        int mid = start + (end - start) / 2;
        int ans = -1;

        while (start <= end)
        {

                if (key == arr[mid])
                {

                        ans = mid;
                        end = mid - 1;
                }
                else if (key > arr[mid])
                {
                        start = mid = 1;
                }
                else if (key < arr[mid])
                {
                        end = mid - 1;
                }
                mid = start + (end - start) / 2;
        }
        return ans;
}
int lastoccurence(int arr[], int size, int key)
{
        int start = 0;
        int end = size - 1;
        int mid = start + (end - start) / 2;

        int ans = -1;

        while (start <= end)
        {

                if (key == arr[mid])
                {

                        ans = mid;
                        start = mid + 1;
                }
                else if (key < arr[mid])
                {

                        end = mid - 1;
                }
                else if (key > arr[mid])
                {

                        start = mid + 1;
                }
                mid = start + (end - start) / 2;
        }
        return ans;
}

int main()
{
        int boy[6] = {11, 22, 33, 55, 33, 66};
        cout << "first ocuurence index is " << firstoccurence(boy, 6, 33) << endl;
        cout << "last occurence index is " << lastoccurence(boy, 6, 33) << endl;

        return 0;
}
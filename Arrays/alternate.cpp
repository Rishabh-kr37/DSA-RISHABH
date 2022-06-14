#include <iostream>
using namespace std;

void swap(int arr[], int size)

{

        for (int i = 0; i < size; i = i + 2)
        {

                if (i + 1 < size)
                {
                        swap(arr[i], arr[i + 1]);
                }
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
        int arr[5] = {11, 22, 33, 44, 55};

        swap(arr, 5);
        printArray(arr, 5);

        return 0;
}
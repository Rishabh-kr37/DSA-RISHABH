#include <iostream>
using namespace std;

int bubblesort(int arr[], int n)
{

        for (int i = 0; i < n; i++)
        {
                // for round 1 to n-1

                for (int j = 0; j < n - i; j++)
                {
                        // process index till (n -i)th index
                        if (arr[j] > arr[j + 1])
                        {
                                swap(arr[j], arr[j + 1]);
                        }
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
        int boy[6] = {3, 4, 9, 7, 6, 2};
        bubblesort(boy, 6);
        printArray(boy, 6);
}
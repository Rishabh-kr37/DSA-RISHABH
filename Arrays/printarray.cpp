
#include <iostream>
using namespace std;

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
        int arr[6] = {1, 2, 3, 4, 5, 6};

        printArray(arr, 6);
}
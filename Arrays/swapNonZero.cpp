#include <iostream>
using namespace std;

void swap(int arr[], int size)
{

        int i = 0;
        for (int j = 0; j < size; j++)
        {
                if (arr[j] != 0)
                {
                        swap(arr[i], arr[j]);
                        i++;
                }
        }
}
void print(int arr[], int n)
{

        for (int i = 0; i < n; i++)
        {
                cout << arr[i] << " ";
        }
        cout << endl;
}

int main()
{

        int arr1[6] = {0, 1, 0, 2, 3, 0};
        swap(arr1, 6);
        print(arr1, 6);

        return 0;
}
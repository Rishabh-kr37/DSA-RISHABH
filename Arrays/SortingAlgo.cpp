#include <iostream>
using namespace std;

int sorting(int arr[], int n)
{
        for (int i = 0; i < n - 1; i++)
        {
                int minindex = i;

                for (int j = i + 1; j < n; j++)
                {

                        if (arr[j] < arr[minindex])
                        {
                                minindex = j;
                        }
                }
                swap(arr[i], arr[minindex]);
        }
}

void print(int arr[], int size)
{

        for (int i = 0; i < size; i++)
        {
                cout << arr[i] << " ";
        }
        cout << endl;
}

int main()
{

        int boy[6] = {3, 4, 9, 7, 6, 2};
        sorting(boy, 6);
        print(boy, 6);
}
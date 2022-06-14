#include <iostream>
using namespace std;

void shiftall(int arr[], int left, int right)
{

        while (left <= right)
        {

                if (arr[left] < 0 && arr[right] < 0) // n n
                {
                        left++;
                }
                else if (arr[left] > 0 && arr[right] < 0) // p n
                {
                        int temp = arr[left];
                        arr[left] = arr[right];
                        arr[right] = temp;
                        left++;
                        right--;
                }

                else if (arr[left] > 0 && arr[right] > 0) // p p
                {
                        right--;
                }
                else // n p
                {
                        left++;
                        right--;
                }
        }
}

void printArray(int arr[], int n)
{

        for (int i = 0; i <= n; i++)
        {
                cout << arr[i] << " ";
        }
        cout << endl;
}

int main()
{
        int boy[] = {-12, 11, -13, -5,
                     6, -7, 5, -3, 11};
        int boy_size = sizeof(boy) /
                       sizeof(boy[0]);
        shiftall(boy, 0, boy_size - 1);
        printArray(boy, boy_size - 1);
        return 0;
}
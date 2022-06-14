#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col) // function to search
{

        for (int row = 0; row < 3; row++)
        {
                for (int col = 0; col < 4; col++)
                {

                        if (arr[row][col] == target)
                        {
                                return 1;
                        }
                }
        }
        return 0;
}

int main()
{
        int arr[3][4]; // size=row*col ya fir col*row

        for (int i = 0; i < 3; i++) // taking input in array
        {
                for (int j = 0; j < 4; j++)

                {
                        cin >> arr[i][j];
                }
        }

        for (int i = 0; i < 3; i++) // printing output
        {
                for (int j = 0; j < 4; j++)

                {
                        cout << arr[i][j] << " ";
                }
                cout << endl;
        }

        cout << " Enter the element to search " << endl;
        int target;
        cin >> target;

        if (isPresent(arr, target, 3, 3))
        {
                cout << " Element found " << endl;
        }
        else
        {
                cout << " Not Found" << endl;
        }

        return 0;
}
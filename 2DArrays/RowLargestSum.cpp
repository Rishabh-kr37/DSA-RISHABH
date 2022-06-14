#include <iostream>
#include <limits.h>
using namespace std;

void printSum(int arr[][4], int i, int j)
{
        cout << "Printing Sum -> " << endl;
        for (int i = 0; i < 3; i++)
        {
                int sum = 0;
                for (int j = 0; j < 4; j++)
                {
                        sum += arr[i][j];
                }
                cout << sum << " ";
        }

        cout << endl;
}

int largestRowSum(int arr[][3], int row, int col)
{

        int maxi = INT_MIN;
        int rowIndex = -1;

        for (int row = 0; row < 3; row++)
        {
                int sum = 0;
                for (int col = 0; col < 3; col++)
                {
                        sum += arr[row][col];
                }

                if (sum > maxi)
                {
                        maxi = sum;
                        rowIndex = row;
                }
        }

        cout << "the maximum sum is " << maxi << endl;
        return rowIndex;
}

int main()
{

        int arr[3][3];

        cout << "Enter the elements " << endl;
        // taking input -> row wise input
        for (int row = 0; row < 3; row++)
        {
                for (int col = 0; col < 3; col++)
                {
                        cin >> arr[row][col];
                }
        }

        for (int row = 0; row < 3; row++)
        {
                for (int col = 0; col < 3; col++)

                {
                        cout << arr[row][col] << " ";
                }
                cout << endl;
        }

        int ansIndex = largestRowSum(arr, 3, 3);
        cout << " Max row is at index " << ansIndex << endl;

        return 0;
}
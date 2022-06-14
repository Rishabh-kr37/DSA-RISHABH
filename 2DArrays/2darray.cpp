#include <iostream>
using namespace std;

int main()
{
        // taking input in 2d array
        int arr[3][4];

        for (int row = 0; row < 3; row++)
        {
                for (int col = 0; col < 4; col++)

                {
                        cin >> arr[row][col];
                }
        }

        // prining outpt
        for (int row = 0; row < 3; row++)
        {
                for (int col = 0; col < 4; col++)

                {
                        cout << arr[row][col] << " ";
                }
                cout << endl;
        }
        return 0;
}
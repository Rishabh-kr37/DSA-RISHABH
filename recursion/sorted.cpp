#include <iostream>
using namespace std;

int sorted(int arr[], int size)
{

        // base case

        if (size == 0 || size == 1) // index 0 and 1 are checked
        {

                return true;
        }

        if (arr[0] > arr[1])
        {
                return false;
        }
        else
        {
                bool remainingpart = sorted(arr + 1, size - 1); // recursion calls // remaing index chk from indx +1 and size -1
                return remainingpart;
        }
}

int main()
{

        int arr[5] = {2, 5, 7, 9, 10};

        int size = 5;

        bool ans = sorted(arr, size);

        if (ans)
        {

                cout << "Array is sorted" << endl;
        }
        else
        {
                cout << "Array is not sorted" << endl;
        }

        return 0;
}
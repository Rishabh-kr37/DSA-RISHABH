// SUM OF N NUMBERS USING RECURSION

#include <iostream>
using namespace std;

void printsum(int n, int sum) // N=INPUT SUM=0;
{
        if (n < 1)
        {
                cout << sum << endl;
                return;
        }

        printsum(n - 1, sum + n); // RECURSION CALL
}

int main()
{

        int n;
        cout << "enter the elements " << endl;

        cin >> n;

        printsum(n, 0);

        return 0;
}
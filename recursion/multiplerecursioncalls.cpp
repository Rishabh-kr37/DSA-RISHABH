#include <iostream>
using namespace std;

int f(int n) // N=4
{
        if (n <= 1) // 4 NOT LESS THAN 1 OR NOT = TO 1 HENCE NOT EXCETUTED.
                return n;
        int last = f(n - 1);  // THIS F(3) CALLS FIRST
        int slast = f(n - 2); // F(2)

        return last + slast; // AFTER RETURNING LAST=2 AND SLAST = 1 =3.
}

int main()
{

        cout << f(4);

        return 0; // OUTPUT =3.
}
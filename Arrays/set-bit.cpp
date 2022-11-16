#include <iostream>
using namespace std;

int main()
{

        cout << " enter number" << endl;
        int num;
        cin >> num;
        bool a = num & (1 << 2); // formual

        if (a == true)
        {
                cout << "set bit" << endl;
        }
        else
        {
                cout << "not a set bit" << endl;
        }
        return 0;
}
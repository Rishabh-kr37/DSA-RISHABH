#include <iostream>
using namespace std;

bool checkpalindrome(string str, int i, int j)
{

        // base case
        if (i > j)
                return true;

        if (str[i] != str[j])
                return false;

        else
        {
                // recursive call
                return checkpalindrome(str, i + 1, j - 1);
        }
}

int main()
{

        string name = "bookkoob";

        bool ispalindrome = checkpalindrome(name, 0, name.length() - 1);

        if (ispalindrome)
        {
                cout << "its a palindrome" << endl;
        }
        else
        {

                cout << "its not a palindrome" << endl;

                return 0;
        }
}
#include <iostream>
using namespace std;

char tolowercase(char ch) // function to convert upper case letter into lowercase.
{
        if (ch >= 'a' && ch <= 'z')
                return ch;
        else
        {
                char temp = ch - 'A' + 'a';
                return temp;
        }
}

bool checkpalidrome(char a[], int n) // this function is case senstive.
{
        int start = 0;
        int end = n - 1;

        while (start <= end)
        {
                if (tolowercase(a[start]) != tolowercase(a[end])) // tolowercase function used in this line.
                {
                        return 0;
                }
                else
                {
                        start++;
                        end--;
                }
        }
        return 1;
}

int getlength(char name[]) // function to find the length of string
{
        int count = 0;

        for (int i = 0; name[i] != '\0'; i++)
        {
                count++;
        }
        return count;
}

int main()
{

        char boy[5];
        cout << "Enter any Name " << endl;
        cin >> boy;

        int len = getlength(boy);

        cout << "THIS IS PALINDROME OR NOT " << checkpalidrome(boy, len);

        return 0;
}
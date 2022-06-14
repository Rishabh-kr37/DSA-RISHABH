#include <iostream>
using namespace std;

void reverse(char name[], int n) // Function to reverse the string
{
        int start = 0;
        int end = n - 1;

        while (start < end)
        {

                swap(name[start++], name[end--]);
        }
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

        char name[20];
        cout << "enter your name " << endl;
        cin >> name;
        int len = getlength(name);
        cout << "length of name is " << len << endl;

        reverse(name, len);
        cout << "your reverse name is " << name << endl;

        return 0;
}
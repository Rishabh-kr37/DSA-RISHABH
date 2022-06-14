#include <iostream>
using namespace std;

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

        char name[5];
        cout << "ENTER YOUR NAME " << endl;
        cin >> name;

        int len = getlength(name);

        cout << "YOUR NAME IS " << name << endl;
        cout << "Length of your name is " << len << endl;

        return 0;
}
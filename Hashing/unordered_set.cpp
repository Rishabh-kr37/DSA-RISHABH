#include <iostream>
using namespace std;

#include <unordered_set>

int main()
{

        unordered_set<int> s;

        s.insert(1);
        s.insert(2);
        s.insert(3);
        s.insert(4);
        s.insert(5);

        for (auto it = s.begin(); it != s.end(); it++)
                cout << (*it) << endl;

        cout << "size of elements are : " << s.size() << endl;

        // s.clear();

        // cout << "size of elements are : " << s.size() << endl;

        int key = 5;

        if (s.find(key) == s.end())
        {
                cout << "key is not present" << endl;
        }
        else
        {
                cout << "key is  present" << endl;
        }

        int deleted_key(3);

        s.erase(deleted_key);

        for (auto it = s.begin(); it != s.end(); it++)
                cout << (*it) << endl;

        cout << "size of elements are : " << s.size() << endl;

        if (s.count(5)) // count return 1 if element is found else return 0 when element is not found.
        {
                cout << "present" << endl;
        }
        else
        {
                cout << "not present" << endl;
        }
}
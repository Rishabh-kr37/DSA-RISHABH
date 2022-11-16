#include <iostream>
using namespace std;
#include <unordered_map>

int main()
{

        unordered_map<string, int> umap;

        umap["sikha"] = 11;
        umap["rishabh"] = 22;
        umap["shubham"] = 33;
        umap["mummy"] = 44;
        umap["papa"] = 55;

        cout << umap.size() << endl; // size

        for (auto itr = umap.begin(); itr != umap.end(); itr++) // iterator
        {
                cout << itr->first << " " << itr->second << endl;
        }

        string key = "papa"; // searching
        umap.erase(key);

        key = "mummy";
        umap.erase(key);

        if (umap.find(key) != umap.end())
        {
                cout << "present" << endl;
        }
        else
        {
                cout << "not present" << endl;
        }

        if (umap.find(key) != umap.end())
        {
                auto temp = umap.find(key);
                cout << "key is " << temp->first << endl;

                cout << "value is " << temp->second << endl;
        }

        // insert
        umap.insert(make_pair("mobile", 1700));

        for (auto itr = umap.begin(); itr != umap.end(); itr++) // iterator
        {
                cout << itr->first << " " << itr->second << endl;
        }

        umap.size();
}
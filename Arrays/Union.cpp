// FINDING THE UNION --Union of two arrays can be defined as the common and distinct elements in the two arrays.
// TC=O(N+M)
// SC=0(N+M)

#include <iostream>
using namespace std;
#include <bits/stdc++.h>

vector<int> findunion(int arr1[], int arr2[], int n, int m)
{
        map<int, int> mp; // map contain key and value without duplicate
        vector<int> unio; // to store the map first element only
        for (int i = 0; i < n; i++)
        {
                mp[arr1[i]]++; // storing the arr1 elements into map
        }
        for (int i = 0; i < m; i++)
        {
                mp[arr2[i]]++; // storing the arr2 elements into map
        }
        for (auto &it : mp)
        {
                unio.push_back(it.first); // storing the first elements from map into unio vector of int type.
        }
        return unio;
}

int main()
{

        int arr1[] = {1, 1, 2, 1, 3, 4, 4, 5, 5};
        int n = 9;
        int arr2[] = {1, 2, 2, 3, 4, 5};
        int m = 6;

        vector<int> solve = findunion(arr1, arr2, n, m);

        for (auto &val : solve)
        {
                cout << val << " ";
        }
        return 0;
}

/*

USING SET
TC=O(N+M)
SC=O(1)
#include <bits/stdc++.h>

using namespace std;

vector < int > FindUnion(int arr1[], int arr2[], int n, int m) {
  set < int > s;
  vector < int > Union;
  for (int i = 0; i < n; i++)
    s.insert(arr1[i]);
  for (int i = 0; i < m; i++)
    s.insert(arr2[i]);
  for (auto & it: s)
    Union.push_back(it);
  return Union;
}

int main()

{
  int n = 10, m = 7;
  int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr2[] = {2, 3, 4, 4, 5, 11, 12};
  vector < int > Union = FindUnion(arr1, arr2, n, m);
  cout << "Union of arr1 and arr2 is  " << endl;
  for (auto & val: Union)
    cout << val << " ";
  return 0;
}
 */

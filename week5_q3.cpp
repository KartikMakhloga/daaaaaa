/*
 You have been given two sorted integer arrays of size m and n. Design an algorithm and implement
it using a program to find list of elements which are common to both. (Time Complexity = 
O(m+n))

*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;
    vector<int> arr1(n);
    cout << "enter array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int m;
    cout << "enter m" << endl;
    cin >> m;
    vector<int> arr2(m);
    cout << "enter array elements" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    int i = 0;
    int j = 0;
    vector<int> v;
    while (n > i && m > j)
    {
        if (arr1[i] == arr2[j])
        {
            v.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
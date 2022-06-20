/* 
Given an already sorted array of positive integers, design an algorithm and implement it using a
program to find whether given key element is present in the array or not. Also, find total number
of comparisons for each input case. (Time Complexity = O(logn), where n is the size of input).

USING RECURSION
*/

#include<iostream>
using namespace std;
void binarysearch(int arr[],int low,int mid,int high,int key)
{
    static int counter=0;
    if(low>high)
    {
        cout<<"Not found"<<endl;
        counter++;
        return;
    }
    else
    if(arr[mid]==key)
    {
        cout<<"Element found"<<endl;
        return;
    }
    else
    if(arr[mid]>key)
      high=mid-1;
    else
    if(arr[mid]<key)
    {
      low=mid+1;
    }
    mid=(low+high)/2;
    binarysearch(arr,low,mid,high,key);
}
int main()
{
    int n = 0, key, counter = 0;
    cout<<"Name-Kartik Makhloga Section-h Student Id-20011322\n";
    cout << "Enter total number:" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element at " << i + 1 << ":";
        cin >> arr[i];
    }
    cout << "Enter the key to search";
    cin >> key;
    int low = 0,high=n,mid=(low+high)/2;
     binarysearch(arr, low, mid, high, key);
    return 0;
}

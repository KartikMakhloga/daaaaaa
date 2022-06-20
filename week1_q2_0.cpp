/* 
Given an already sorted array of positive integers, design an algorithm and implement it using a
program to find whether given key element is present in the array or not. Also, find total number
of comparisons for each input case. (Time Complexity = O(logn), where n is the size of input).
*/


#include<iostream>
using namespace std;
int main()
{
    int n=0,key,counter=0;
    cout<<"Name-Kartik Makhloga Section-h Student Id-20011322\n";
    cout<<"Enter total number:"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element at"<<i+1<<":";
        cin>>arr[i];
    }
    cout<<"Enter the key to search";
    cin>>key;
    int low=0,high=n-1,mid;
    while(low<high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==key)
        {
            cout<<"Number found"<<endl;
            counter++;
            break;
        }
        else
        if(arr[mid]>key)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if(counter==0)
    {
        cout<<"Not found"<<endl;
    }
    return 0;
}

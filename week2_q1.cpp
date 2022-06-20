/*
Given a sorted array of positive integers containing few duplicate elements, design an algorithm
and implement it using a program to find whether the given key element is present in the array or
not. If present, then also find the number of copies of given key. (Time Complexity = O(log n))

*/

#include<iostream>
using namespace std;
int duplicate(int arr[],int n,int key)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            count++;
        }
    }
   return count;
}
int main()
{
     int n,key;
     cout<<"Name-Kartik Makhloga Section-h Student Id-20011322\n";
     cout<<"Enter the no. of elements:";
     cin>>n;
     int arr[n];
     cout<<"Enter the element:";
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     cout<<"Enter the element to search:";
     cin>>key;
     cout<<"Element is present "<<duplicate(arr,n,key)<<" times";
}

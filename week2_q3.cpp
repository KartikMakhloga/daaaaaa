/*
 Given an array of nonnegative integers, design an algorithm and a program to count the number
of pairs of integers such that their difference is equal to a given key, K.
*/

#include<iostream>
using namespace std;
int count(int arr[],int n,int key)
{    
     int count=0;
     for(int i=0;i<n;i++)
     {
         for(int j=i+1;j<n;j++)
         {
           if(arr[i]-arr[j]==key || arr[j]-arr[i]==key)
           {
               count++;
           }
         }
     }
    return count;
}
int main()
{
     int n,key;
     cout<<"Name-Kartik Makhloga Section-h Student Id-20011322\n";
     cout<<"Enter the number of elements:";
     cin>>n;
     int arr[n];
     cout<<"Enter the elements:";
     for(int i=0;i<n;i++)
     {
       cin>>arr[i];
     }
     cout<<"Enter the key:";
     cin>>key;
     cout<<"Number of pairs where difference of elements is equal to key:"<<count(arr,n,key);
}

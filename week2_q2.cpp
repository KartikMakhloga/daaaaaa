/*
Given a sorted array of positive integers, design an algorithm and implement it using a program to 
find three indices i, j, k such that arr[i] + arr[j] = arr[k].
*/

#include<iostream>
using namespace std;
void sum(int arr[],int n)
{
   cout<<"arr[i]+arr[j]=arr[k]"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                 if( arr[i]+arr[j]==arr[k] )
                 {
                    cout<<"\nCondition true for i="<<i<<" j="<<j<<" k="<<k<<endl;
                 }
            }
        }
    }
}
int main()
{
    int key,n;
    cout<<"Name-Kartik Makhloga Section-h Student Id-20011322\n";
    cout<<"Enter the no. of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter the element:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sum(arr,n);
    return 0;
}

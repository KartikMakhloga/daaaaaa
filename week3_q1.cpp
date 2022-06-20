/*
 Given an unsorted array of integers, design an algorithm and a program to sort the array using
insertion sort. Your program should be able to find number of comparisons and shifts ( shifts -
total number of times the array elements are shifted from their place) required for sorting the array.
*/

#include<iostream>
using namespace std;
int insertion(int arr[],int n)
{    int count=0;
	for(int i=1;i<n;i++)
	{
		int x=arr[i];
		int j=i-1;
		count++;
		while(j>-1 && arr[j]>x)
		{
			arr[j+1]=arr[j];
			j--;
			count++;
		}
		
	   arr[j+1]=x;
	   if(x>arr[j])
	   { 
	      count++;
	   }
	}
	return count;
}
int main()
{
	int n;
	cout<<"Name-Kartik Makhloga Section-h Student Id-20011322\n";
	cout<<"Enter the no. of terms:";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int count=insertion(arr,n);
     cout<<"No. of comparisons:"<<count<<endl;
    for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
    }	
	return 0;
}

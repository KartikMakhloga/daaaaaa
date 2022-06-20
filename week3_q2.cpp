/*
 Given an unsorted array of integers, design an algorithm and implement a program to sort this
array using selection sort. Your program should also find number of comparisons and number of
swaps required.
*/

#include<iostream>
using namespace std;
int selection(int arr[],int n)
{    int count;
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
			count++;
		}
		if(min!=i)
		{
			int temp=arr[min];
		      arr[min]=arr[i];
		      arr[i]=temp;
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
	int count=selection(arr,n);
	cout<<"No. of comparisons:"<<count<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}

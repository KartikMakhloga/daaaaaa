/*
 Given an unsorted array of positive integers, design an algorithm and implement it using a program 
to find whether there are any duplicate elements in the array or not. (use sorting) (Time Complexity 
= O(n log n))

*/

#include<iostream>
using namespace std;
void merge(int arr[],int left, int mid,int right)
{
	int n1=mid-left+1,n2=right-mid;
	int leftarr[n1],rightarr[n2];
	for(int i=0; i<n1; i++)
	leftarr[i]=arr[left+i];
	for(int i=0; i<n2; i++)
	rightarr[i]=arr[mid+i+1];
	int i=0,j=0,k=left;
	while(i<n1 && j<n2)
	{
		if(leftarr[i]<=rightarr[i])
		arr[k++]=leftarr[i++];
		else
		arr[k++]=rightarr[j++];
	}
	while(i<n1)
	arr[k++]=leftarr[i++];
	while(j<n2)
	arr[k++]=rightarr[j++];
}
void mergesort(int arr[],int left,int right)
{
	if(left>=right)
	return;
	int mid=left+(right-left)/2;
	mergesort(arr,left,mid);
	mergesort(arr,mid+1,right);
	merge(arr,left,mid,right);
}
int main()
{
	int n,flag=0;
	cout<<"Name-Kartik Makhloga Section-h Student Id-20011322\n";
	cout<<" Enter the number of elements in an array:"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Elements :"<<"\n";
	for(int i=0; i<n; i++)
	cin>>arr[i];
	mergesort(arr,0,n-1);
	for(int i=0; i<n-1; i++)
	{
	int j=i+1;
	if(arr[i]==arr[j])
	  {
	flag=1;
	break;
      }
    }
    if(flag == 1)
    	cout<<"YES "<<"\n";
	else
	cout<<"NO"<<"\n";

    }

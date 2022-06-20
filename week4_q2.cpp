/*
 Given an unsorted array of integers, design an algorithm and implement it using a program to sort 
an array of elements by partitioning the array into two subarrays based on a pivot element such
that one of the sub array holds values smaller than the pivot element while another subarray 
holds values greater than the pivot element. Pivot element should be selected randomly from the 
array. Your program should also find number of comparisons and swaps required for sorting the
array.
*/

#include<iostream>
using namespace std;
int count=0;
int partition(int arr[],int low,int high)
{
	int i=low,j=high+1;
	int pivot=arr[low];
	while(i<j)
	{
		do{
			i++;
			count++;
		}while(arr[i]<=pivot && i<=high);
		do{
			j--;
			count++;
		}while(arr[j]>pivot);
		
		if(i<j)
		{
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	 arr[low]=arr[j];
	 arr[j]=pivot; 
	return j;
}
void quicksort(int arr[],int low,int high)
 {  
    if(low<high)
    {
	 int mid=(low+high)/2;
	 int j=partition(arr,low,high);
	 quicksort(arr,low,j-1);
	 quicksort(arr,j+1,high);
    }
}
int main()
{
	int n;
	cout<<"Name-Kartik Makhloga Section-h Student Id-20011322\n";
	cout<<"Enter the no. of terms:";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	quicksort(arr,0,n-1);
	cout<<"Number of comparisons:"<<count-2<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}

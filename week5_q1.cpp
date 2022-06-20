/*
Given an unsorted array of alphabets containing duplicate elements. Design an algorithm and
implement it using a program to find which alphabet has maximum number of occurrences and
print it. (Time Complexity = O(n)) (Hint: Use counting sort)
*/

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int n;
// 	char val;
//     cout<<"Name-Kartik Makhloga Section-h Student Id-20011322\n";
//     cout<<"Enter no of elements::";
// 	cin>>n;
// 	char arr[n];
//     cout<<"Enter elements::";
// 	for(int i=0;i<n;i++){
// 	cin>>arr[i];
//     }
// 	int max=0;
// 	for(int i=0;i<n;i++)
// 		if(arr[i]>max)
// 		max=arr[i];
// 	int count[max+1]={0};
    
// 	for(int i=0;i<n;i++)
// 		{
// 		count[arr[i]]++;	
// 		}
// 	int maxi=0;
// 	for(int i=0;i<max+1;i++)
// 		{if(maxi<count[i])
// 		{maxi=count[i];
// 		val=i;}		


// }
// cout<<val;
// }
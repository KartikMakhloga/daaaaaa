/*Given an array of nonnegative integers, design a linear algorithm and implement it using a program 
to find whether given key element is present in the array or not. Also, find total number of
comparisons for each input case. (Time Complexity = O(n), where n is the size of input)

USING RECURSION
*/

#include<iostream>
using namespace std;

void searchf(int arr[],int n,int search)
{
    static int i=0,counter=0;
    if(arr[i]==search)
    {
        cout<<"Element found"<<endl;
        cout<<"Element's position is :"<<(i+1)<<endl;
        counter++;
    }
    else
    if(i==n)
    {
        cout<<"Element not found"<<endl;
        counter++;
    }
    else
    if(counter!=0)
    {
        return;
    }
    else
    {
        i++;
        searchf(arr,n,search);
    }
}
int main()
{
    int n=0,key;
    cout<<"Name-Kartik Makhloga Section-h Student Id-20011322\n";
    cout<<"Enter the number of terms:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter number"<<(i+1)<<":";
        cin>>arr[i];
    }
    cout<<"Enter the number to search:";
    cin>>key;
    searchf(arr,n,key);
    return 0;
}



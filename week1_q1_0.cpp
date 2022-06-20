/*Given an array of nonnegative integers, design a linear algorithm and implement it using a program 
to find whether given key element is present in the array or not. Also, find total number of
comparisons for each input case. (Time Complexity = O(n), where n is the size of input)
*/

#include<iostream>
using namespace std;
int main()
{
    int n=0,key,counter=0;
    cout<<"Name-Kartik Makhloga Section-H Student Id-20011322\n";
    cout<<"Enter the total number to enter"<<"\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the number"<<(i+1)<<":";
        cin>>arr[i];
    }
    cout<<"Enter the number to search:"<<"\n";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            cout<<"Element found at position "<<i+1<<endl;
            counter++;
        }
    }
    if(counter==0)
    {
        cout<<"Element not found"<<endl;

    }
    return 0;
}

/*
Given an already sorted array of positive integers, design an algorithm and implement it using a
program to find whether a given key element is present in the sorted array or not. For an array
arr[n], search at the indexes arr[0], arr[2], arr[4],. ,arr[2k
] and so on. Once the interval (arr[2k
] <
key < arr[ 2k+1] ) is found, perform a linear search operation from the index 2k
to find the element
key. (Complexity < O(n), where n is the number of elements need to be scanned for searching):

Jump Search
*/


#include <bits/stdc++.h>
using namespace std;

int find_key(int arr[],int n,int key) {
    int step=2;
    int prev=0;
    while(arr[min(step,n)-1]<key) {
        prev=step;
        step+=2;
        if(prev >=n) return -1;
    }
    while(arr[prev]<key) {
        prev++;
        if(prev==min(step,n)) return -1;
    }

    if(arr[prev]==key) return 0;

    return -1;
}

int main() {
    int n,i,key;
    cout<<"Name-Kartik Makhloga Section-h Student Id-20011322\n";
    cout<<"Enter no of elements::";
    cin>>n;
    cout<<"Enter elements::";
    int arr[n];
    for(i=0;i<n;i++) cin>>arr[i];
    cout<<"Enter key::";
    cin>>key;
    int flag=find_key(arr,n,key);
    if(flag==-1) cout<<"Key not found";
    else cout<<"Key found";
}
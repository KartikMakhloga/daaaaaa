/*
Given an unsorted array of integers, design an algorithm and implement it using a program to find 
whether two elements exist such that their sum is equal to the given key element. (Time
Complexity = O(n log n))

*/

#include<iostream>
using namespace std;

void merge(int a[], int l, int m, int h){
    int i=l, j=m+1, k=l;
    int b[100];
    while(i<=m && j<=h){
        if(a[i]<a[j]){
            b[k++]=a[i++];
        }
        else{
            b[k++]=a[j++];
        }
    }
    for(; i<=m; i++){
        b[k++]=a[i];
    }
    for(; j<=h; j++){
        b[k++]=a[j];
    }
    for(i=l; i<=h;i++){
        a[i]=b[i];
    }
}

void MergeSort(int a[], int l ,int h){
    if(l<h){
        int m=(l+h)/2;
        MergeSort(a,l,m);
        MergeSort(a,m+1,h);

        merge(a,l,m,h);
    }
}

int main(){
    int n;
    cout<<"Name-Kartik Makhloga Section-h Student Id-20011322\n";
    cout<<"Enter no of elements::";
    cin>>n;
    cout<<"Enter elements::";
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cout<<"enter key element ";
    cin>>key;
    MergeSort(a,0,n-1);
    int l=0;
    int h=n-1;
    while(l<h){
        if(l+h == key){
            cout<<"exist";
            break;
        }
        else if(l+h > key)
            h--;
        else
            l++;
    }
}

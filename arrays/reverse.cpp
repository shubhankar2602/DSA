#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void rev(int arr[],int start,int end){
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    d=d%n;
    rev(arr,0,n-d-1);
    rev(arr,n-d,n-1);
    rev(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
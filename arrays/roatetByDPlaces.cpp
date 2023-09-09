#include<iostream>
#include <bits/stdc++.h>
// #include<algorithm>
using namespace std;

//brute rotate fucntion by d places
// int rotate(int arr[],int n,int d){
//     while(d--){
//          int temp=arr[0];
//         for (int i=1;i<n;i++){
//             arr[i-1]=arr[i];
//         }
//         arr[n-1]=temp;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//optiomal solution

// reverse funtion without stl
// void reverse(int arr[],int start,int end){
//     while(start<=end){
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }

int rotateOpt(int arr[],int n,int d){
    d=d%n;
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}
int main()
{
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    // rotate(arr,n,d);
    rotateOpt(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

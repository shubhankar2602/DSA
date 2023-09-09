#include<iostream>
using namespace std;
// void removeDup(int arr[],int n){
//     for(int i=0;i<n;i++){
//         if(arr[i]==arr[i+1]){
//             arr[i]=arr[i+1];
//             n--;
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int removeDup(int arr[],int n){
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             if(arr[i]!=arr[j]){
//                 arr[i+1]=arr[j];
//                 n--;       
//             }
//         }
//     }
//     return n;
// }

int removeDup(int arr[],int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    n=i+1;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return i+1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    removeDup(arr,n);
    
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    return 0;
}
#include<iostream>
using namespace std;

int getLargest(int arr[],int n){
    int largest = 0;
    int second;
    for(int i=1; i<n ;i++){
        if(arr[i]>arr[largest]){
            largest = i;
        }
    }
    return arr[largest];
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<getLargest(arr,n);
    return 0;
}

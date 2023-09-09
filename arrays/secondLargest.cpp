#include<iostream>
using namespace std;

int getSLargest(int arr[],int n){
    int largest = 0;
    int second = -1;
    for(int i=1; i<n ;i++){
        if(arr[i]>arr[largest]){
            second = largest;
            largest = i;
        }
        else if(arr[i]<largest && arr[i]<second){
            second = i;
        }
    }
    return arr[second];
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<getSLargest(arr,n);
    return 0;
}

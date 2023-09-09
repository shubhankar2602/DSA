#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void rotate(vector<int>&arr,int k){


}
int main()
{
    int n,d;
    cin>>n>>d;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    rotate(arr,d);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
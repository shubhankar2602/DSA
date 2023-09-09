#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> countFrequency(int n, int x, vector<int> nums){
    // Write your code here.

    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[nums[i]]++;
    }

    for(int i =1 ; i<=x ;i++){
        cout<<mpp[i]<<" ";
    }
    // return result;
}

int main()

{
    int n,x;
    cin>>n>>x;

    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[v[i]]++;
    }

    for(int i =1 ; i<=n ;i++){
        cout<<mpp[i]<<" ";
    }
    return 0;
}
// 6 4
// 1 3 4 3 4 1
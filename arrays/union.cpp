#include<iostream>
#include <bits/stdc++.h>
using namespace std;
//brute solution
vector < int > Union(vector < int > a, vector < int > b) {
    // Write your code here
    int n1 = a.size();
    int n2 = b.size();
    set<int> st;
    for(int i=0;i<n1;i++){
        st.insert(a[i]);
    }
    for(int i=0;i<n2;i++){
        st.insert(b[i]);
    }
    vector<int> temp;
    for(auto it : st){
        temp.push_back(it);
    }
    return temp;
}


int main()
{
    int n1,n2;
    cout<<"Enter size of array 1 and array 2 respectively"<<endl;
    cin>>n1>>n2;
    vector<int> arr1,arr2,answer;
    cout<<"Enter array 1"<<endl;
    for(int i=0;i<n1;i++){
        int x;
        cin>>x;
        arr1.push_back(x);
    }
    cout<<"Enter array 2"<<endl;
    for(int i=0;i<n2;i++){
        int x;
        cin>>x;
        arr2.push_back(x);
    }
    answer=Union(arr1,arr2);
    for(int i = 0;i<answer.size();i++){
        cout<<answer[i]<<" ";
    }
    return 0;
}
/*Test cases

5 3
1 2 3 4 6
2 3 5
==============================
4 3
1 2 3 3
2 2 4
==============================
9 5
1 1 2 3 5 5 5 10 10 
2 4 7 10 10 

*/
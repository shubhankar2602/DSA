#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // pre-fetching of hash array
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]] += 1;
    }

    int q;
    cin>>q;
    while(q--){
        int testNum;
        cin>>testNum;
        cout<<hash[testNum]<<endl;
    }
    return 0;
}
/*size array queires 

5 
1 2 4 1 2
5
1 2 7 12 4

#############################################
 5
 1 2 4 1 2
 5
 1 2 7 12 4

 */
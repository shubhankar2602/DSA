#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    //all the characters
    int hash[256] = {0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }

    //lowercase strings
    // int hash[26] = {0};
    // for(int i=0;i<s.size();i++){
    //     hash[s[i]-'a']++;
    // }
    
    //uppercase strings
    // int hash[26] = {0};
    // for(int i=0;i<s.size();i++){
    //     hash[s[i]-'A']++;
    // }
    

    int q;
    cin>>q;
    while(q--){
        char ch;
        cin>>ch;
        cout<<hash[ch]<<endl;
    }
    
    return 0;
}

/*
I/P:-
abcdab3ehg
5
a b u w 3

O/P:-
2
2
0
0
1
*/
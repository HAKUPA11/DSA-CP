// M A P S   T O   H A V E   T H E    F R E Q U E N C Y

//maps are similar to array just the thing is that the index can be anything
// you can hace even characters as our index or a string
//map that stores the count for each  value is known as frequency map
//useful when the count of each character is req. multiple times
#include <bits/stdc++.h>
using namespace std;
#define make(v)  for(auto &i:v) cin>>i
#define prnt(v)  for(auto &i:v) cout<<i<<endl
#define ll       long long
// int main() {
//     // int n;cin>>n;

//     map<string, int> mp;
//     map<char, int> mp1;
//     string s;cin>>s;
//     mp["abc"]= 1;
//     cout<<mp["abc"]<<"\n";
//     //to count freq of each char/letter in a string
//     for(auto c :s){
//             mp1[c]++;
//     }

// }

int main(){
    // ++a and a++ concepts
    // int a=0, b=0;
    // cout<<a++<<endl<<++b<<endl;
    // cout<<a;
    //uncomment them and check once
    // we usually first increase the freq and then use it therefore we
    //generally use ++mp[c];
    //eg:
    map<char, int>mp;
    int maxi=0;
    string s;cin>>s;
    for(auto c: s ) maxi=max(maxi, ++mp[c]);
// we first increased the value and then took the value
//lets say if we take mp[c]++ then maxi will tak max of maxi and mp[c] , and at the beginning mp[c] would always we empty ie.=0 also maxi =0 initially, therefore always maxi would remain maxi only it wont update
    for(auto c: s)
        if(mp[c]==maxi) cout<<c;

}







//S O R T I N G  and  C U S T O M    S O R T I N G

// Small concept there is a diff between not decreasing and increasing
//eg: 1 2 2 2 3  is "not decreasing" but not "increasing" 



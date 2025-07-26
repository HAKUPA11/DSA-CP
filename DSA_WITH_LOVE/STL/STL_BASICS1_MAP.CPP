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

<<<<<<< HEAD
// int main(){
//     // ++a and a++ concepts
//     // int a=0, b=0;
//     // cout<<a++<<endl<<++b<<endl;
//     // cout<<a;
//     //uncomment them and check once
//     // we usually first increase the freq and then use it therefore we
//     //generally use ++mp[c];
//     //eg:
//     map<char, int>mp;
//     int maxi=0;
//     string s;cin>>s;
//     for(auto c: s ) maxi=max(maxi, ++mp[c]);
// // we first increased the value and then took the value
// //lets say if we take mp[c]++ then maxi will tak max of maxi and mp[c] , and at the beginning mp[c] would always we empty ie.=0 also maxi =0 initially, therefore always maxi would remain maxi only it wont update
//     for(auto c: s)
//         if(mp[c]==maxi) cout<<c;
=======
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
//for(auto c: s) maxi = max(maxi, ++mp[c]); how does this line increments the count of each char also how does it  updates maxi to store the highest frequency found
/*🧩 1. mp[c]
This accesses the map mp with key c (a character from string s).

If c is not yet in the map, mp[c] will automatically initialize its value to 0.
This is a key feature of C++'s std::map.

🧩 2. ++mp[c]
This increments the value stored at mp[c] (i.e., the frequency of character c).

For example:

First time seeing 'a' → mp['a'] = 0, then ++mp['a'] becomes 1.

Second time → mp['a'] = 1, then ++mp['a'] becomes 2, and so on.

So this part updates the frequency count of character c.

🧩 3. maxi = max(maxi, ++mp[c]);
++mp[c] returns the new incremented count of character c.

max(maxi, ++mp[c]) compares:

the current maximum frequency stored in maxi, and

the new count of c.

The maximum of the two is stored back into maxi.
🔁 Example: s = "ababa"
Let's walk through this loop:

cpp
Copy
Edit
string s = "ababa";
map<char, int> mp;
int maxi = 0;

for (auto c : s)
    maxi = max(maxi, ++mp[c]);
Iteration	c	++mp[c] (after increment)	maxi = max(maxi, ++mp[c])
1	       'a'      	1	                      1
2	       'b'	        1	                      1
3	       'a'        	2	                      2
4	       'b'       	2                         2
5	       'a'       	3	                      3

At the end, maxi = 3 (because 'a' occurred 3 times).*/
// we first increased the value and then took the value
//lets say if we take mp[c]++ then maxi will tak max of maxi and mp[c] , and at the beginning mp[c] would always we empty ie.=0 also maxi =0 initially, therefore always maxi would remain maxi only it wont update
    for(auto c: s)
        if(mp[c]==maxi) cout<<c;
>>>>>>> 912a225be06025cd976d52a7b9d64a970083a2ec

// }







//S O R T I N G  and  C U S T O M    S O R T I N G

// Small concept there is a diff between not decreasing and increasing
//eg: 1 2 2 2 3  is "not decreasing" but not "increasing" 







// STL more content
//MAPS store a value for a unique key (sorted by the key)
//Dearch, Removal, insertion of an ekement is O(logN)
//i.e maps are similar to vectors, but they can have any value as an index
//also they are sorted by index.

signed main(){
    map<int, int> mp;//it can be seen that i havent decided the sixe of the map
    //maps are stored using a pairs
    //eg{ {1, 7} , ....., at 1000000 position we would have {1000000, 5}} 
    mp[1]=5;
    mp[1]=7; //note: {1, 5} would be changed to {1, 7}
    mp[1000000]=5;
    cout<<mp[1000000]<<endl;

    //in c++ 17 or after : we can use STRUCTURED BINDING
    // for(auto [a, b]:mp){
    //     cout<<a<<" "<<b<<endl;
    // }

// code to know my current cpp version:

    // if(__cplusplus==202002L) cout<<"c++20"<<endl;
    // else if(__cplusplus==201402L) cout<<"c++14\n";
    // else if(__cplusplus==201703L) cout<<"c++17\n";
    // else if(__cplusplus==201103L) cout<<"c++11\n";
    // else if(__cplusplus==199711L) cout<<"c++98\n";
    // else cout<<"pre-standard\n";
    
    
    //the universal snippet:
    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    //upside code "passes element by value" i.e each "i" is a copy of the key-value pair 
    //whatever changes made to 'i' do not affect the original map
        for(auto &i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    // this involves "passing by reference"
    //i.e i is  a reference to the key-value pair  in the original map

    // for XAMPLE:

//     map<string, int> mp = {{"a", 1}, {"b", 2}};

// // By value
// for (auto i : mp) {
//     i.second += 10;
// }
// cout << mp["a"] << endl; // Still prints 1

// // By reference
// for (auto &i : mp) {
//     i.second += 10;
// }
// cout << mp["a"] << endl; // Now prints 11
}


// SOME IMP INBUILT FXNS:
// mp.contains(5);  // return a boolean value showing if 5 exists
// mp.find(5);  // returns an iterator to the position of the value
// if it doesnt exists mp.find() would return mp.end()
// i.e why we write like this :

//if(mp.find(5) != mp.end()) if true means5 exists
//if(mp.find(5) == mp.end()) if true means 5 doesnt exists

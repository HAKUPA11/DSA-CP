// SEARCHING is the process of finding some imp stuff/imp info
// in a container depending on some conditions

// IMPORTANT
// PREFIX SUMS
// FREQUENCY ARRAYS
// BINARY SEARCH

// P R E F I X   S U M S
// suppose i have an array
// 4 3 5 2 1
// taking the sum of all prefixes 
// so the prefixes will be
                // SUM
// 4 ,             4   
// 4 3,            7
// 4 3 5,          12
// 4 3 5 2,        14
// 4 3 5 2 1       15
// a prefis sum stores the sum  of the prefix of an array at each index
// and takes O(N) time complexity to compute

// prefix[k]=sum of array from 0 to k;

// prefis sums can be used to answer queries such as
// "Sum of elements of array from [L, R] in O(N) time complexity"
// we can use two loops in order to calculate the prefix sums
#include <bits/stdc++.h>
using namespace std;
#define make(v)  for(auto &i:v) cin>>i
#define prnt(v)  for(auto &i:v) cout<<i<<endl
#define ll       long long
// int main() {

//     int n;cin>>n;
//     int ar[n];
//     for(int i=0;i<n;i++)
//         cin>>ar[i];
    
//     int p[n];
    
//     for(int i=0;i<n;i++){
//         p[i]=0;
//         for(int j=0;j<=i;j++){
//             p[i]+=ar[j];
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<p[i]<<" ";
//     }
// }
    // this was brute force approach therefore time complexity will be O(N2)
// we can have this
// int main(){
//     int n;cin>>n;
//     int ar[n];
//     for(int i=0;i<n;i++){
//         cin>>ar[i];
//     }
//     int sum=0;
//     int p[n];
//     for(int i=0;i<n;i++){
//         sum+=ar[i];
//         p[i]=sum;
//     }
//     for(int i=0;i<n;i++){
//         cout<<p[i]<<" ";
//     }
// }
// in this time compl O(N)
//also we can use this p[i]=p[i-1]+a[i]
// which is the consept that we would not be repeating the sum from beginning
// rather just add the new element in the existing p[i] which would also have stored the sum only
//also in this case i would have to start fro i=1 because p[i-1] would not exist for i==0;
//toh p[i-1] would actually be working like a sum here



// QUESTION
//INDICES 0 1 2 3 4 5 6 7 8 9 
//N:      1 3 4 7 9 8 0 2 5 6
//S: [2, 4], [3, 3], [1, 5], 
//CALCULATE THE SUM FOR EACH SUBARRAY
// CONSTRAINT IS  N<=  1e5 and S <= 1e6
// THE BRUTE FORCE APPPROACH TO SOLVE THIS WILL BE:
// int main(){
//     int s;cin>>s;
//     int size;cin>>size;
//     vector<int>v(size);
//     make(v);
//     while(s--){//O(S)
//         int left, right, ans=0;
//         cin>>left>>right;
//         for(int i=left;i<=right;i++){ //O(N)
//             ans+=v[i];
//         }
//         cout<<ans<<" ";
//     }
// }
// time complexity wqould be O(N*S) because the for loop inside is o(n) but that loop runs s times for s pairs
// if at worst case n=1e6 and s = 1e6 then n*s be 1e12
//which would be too slow
// now lets say we have the prefix sum with us
//INDICES  0  1  2  3  4  5  6  7  8  9 
//N:       1  3  4  7  9  8  0  2  5  6
//prx sum: 1  4  8  15 24 32 32 34 39 45
//now if someone wants to get the sum for [2, 4]
// which is  4 + 7 + 9
//then we can just remove 1 + 3 from 24
//i.e if you want the sum from [L, R] THat will be
// PREFIX SUM OF "R" - PREFIX SUM OF "L-1";
// this way can convert the complexity from O(NQ) ---> O(N+Q)
int main(){
    int n;cin>>n;
    vector<int>v(n);
    make(v);
    vector<int>p(n);
    p[0]=v[0];
    for(int i=1;i<n;i++){
        p[i]=p[i-1]+v[i];
    }
    int q; cin>>q;
    while(q--){
        int l, r;
        cin>>l>>r;
        if(l != 0) cout<<p[r]-p[l-1] <<endl;
        else cout<<p[r]<<endl;
    }
}


// G E N E R A L   P R O B L E M S   O N   T H I S:
//1.PRINT ALL THE VALUES WHICH ARE GREATER  THAN GIVEN INTEGER
// 2.FOR EACH ELMENT, PRINT IF IT HAS THE MAXIMUM FREQUENCY IN THE ARRAY
// 3.QUERIES ON NUMBER OF PRIMES IN THE RANGE[L, R]IN O(1);
//2nd solution is in map cpp inside stl folder

#include<bits/stdc++.h>
using namespace std;

#define make(v)  for(auto &i:v) cin>>i
#define prnt(v)  for(auto &i:v) cout<<i<<" "
#define ll        long long

// https://cses.fi/problemset/task/1094
// INCREASING ARRAY
// int main(){
//     ll n;
//     cin>>n;
//     vector<ll>v(n);
//     make(v);
//     ll cnt=0;
//     for(ll i=0;i<(ll)v.size()-1;i++){//point to be noted that v.size() is of type size_t which is unsigned but long long is signed and i am comparing "i" with .size() two different datatypes 
//         if(v[i]<=v[i+1]){//therefore solution to this would be to type cast .size() into long long or i could have used "n"
//         continue;
//         }else{
//             cnt+=v[i]-v[i+1];
//         }
//     }
//     cout<<cnt;
// }
// LOGIC - THERE IS NO REASON IN INCREASING THE VALUE OF FIRST ELEMENT 
// LET'S SAY IF THE SECOND ELEMENT IS GREATER OR EVEN EQUAL TO THE FIRST ELEMENT THEN IT IS OKAY 
// IF IT IS NOT THEN , WE WANT THAT ELEMENT TO EITHER GREATER OR EQUAL, NOW SINCE WE WANT MINIMUM NUMBER OF MOVES 
// THUS WE WILL MAKE IT JUST EQUAL! FOR THAT WE WILL INCREASE IT BY THE DIFFERENCE OF SECOND AND FIRST ELEMENT 
// BECAUSE THAT IS WHAT NEEDED TO MAKE TE SECOND ELEMENT EQUAL TO THE FIRST ELEMENT


// https://cses.fi/problemset/task/1083
//MISSING NUMBER

int main(){
    ll n;
    ll total_sum, sum=0;
    cin>>n;
    total_sum=(n*(n+1))/2;
    vector<ll> v(n-1);
    make(v);
    for(ll i=0;i<n-1;i++){
        sum+=v[i];
    }
    cout<<total_sum-sum;

}
// LOGIC - FIRST I AM SORTING THE VECTOR SO THAT I CAN HAVE A CHECK IF THE DEFFERENCE IS 1 BETWEEN THE CONSECUTIVE NUMBERS IF IT IS NOT
// THAT IS WHERE THE MISSING NUMBER IS SINCE IT IS NOT 1 DEFINITEKY IT HAS TO BE 2 THUS THE OUTPUT SHOULD BE ITERATION I.E "i"+"2" BUT WITH THIS LOGIUC WE'LL
// HAVE PROBLEM WHAT IF WE ALREADY HAVE SORTED VECTOR AND THE LAST MOST DIGIT IS MISSING I.E. 
// 5
// 1 2 3 4 THIS TEST CASE IT WILL PRINT NOTHING
// THUS BETTER TO HAVE A "CNT" VARIABLE

// CORRECT_LOGIC
// FIND THE SUM OF ALL THE ELEMENTS USING FORMULA AS YOU KNOW THE VALUE OF "n" THEN TAKE THE SUM FROM THE VECTOR ELEMENT
// SUBTRACT TO FIND THE MISSING NUMBER

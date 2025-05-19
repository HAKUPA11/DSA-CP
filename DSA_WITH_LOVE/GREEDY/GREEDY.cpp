#include<bits/stdc++.h>
using namespace std;

#define make(v)  for(auto &i:v) cin>>i
#define prnt(v)  for(auto &i:v) cout<<i<<" "
#define ll        long long

// https://cses.fi/problemset/task/1094
// I N C R E A S I N G     A R R A Y
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
//             v[i+1]+=v[i]-v[i+1];//to update the the last to last element
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
//M I S S I N G   N U M B E R

// int main(){
//     ll n;
//     ll total_sum, sum=0;
//     cin>>n;
//     total_sum=(n*(n+1))/2;
//     vector<ll> v(n-1);
//     make(v);
//     for(ll i=0;i<n-1;i++){
//         sum+=v[i];
//     }
//     cout<<total_sum-sum;

// }
// LOGIC - FIRST I AM SORTING THE VECTOR SO THAT I CAN HAVE A CHECK IF THE DEFFERENCE IS 1 BETWEEN THE CONSECUTIVE NUMBERS IF IT IS NOT
// THAT IS WHERE THE MISSING NUMBER IS SINCE IT IS NOT 1 DEFINITEKY IT HAS TO BE 2 THUS THE OUTPUT SHOULD BE ITERATION I.E "i"+"2" BUT WITH THIS LOGIUC WE'LL
// HAVE PROBLEM WHAT IF WE ALREADY HAVE SORTED VECTOR AND THE LAST MOST DIGIT IS MISSING I.E. 
// 5
// 1 2 3 4 THIS TEST CASE IT WILL PRINT NOTHING
// THUS BETTER TO HAVE A "CNT" VARIABLE

// CORRECT_LOGIC
// FIND THE SUM OF ALL THE ELEMENTS USING FORMULA AS YOU KNOW THE VALUE OF "n" THEN TAKE THE SUM FROM THE VECTOR ELEMENT
// SUBTRACT TO FIND THE MISSING NUMBER



// https://cses.fi/problemset/task/1713
// C O U N T I N G    D I V I S O R S

// int main(){
//     ll t, cnt=0;
//     cin>>t;
//     while(t--){
//         ll x;
//         cin>>x;
//         bool check_if_perfect_sqr=0;
//         if(floor(sqrt(x))==sqrt(x)) check_if_perfect_sqr=1;
//         for(ll i=2;i<=sqrt(x);i++){
//             if(x%i==0) cnt+=2; 
//         }
//         if(check_if_perfect_sqr) cnt--;
//         cout<<cnt+2;
//         cnt=0;
//     }
// }// with this approach my time limit is getting exceeded
//L E A R N I N G-- TECHINQUE TO CHECK SQUARE ROOT i.e if sqrt function gives the exact value as that of floor(sqrt()) then it is a perfect square



// https://codeforces.com/problemset/problem/1374/B
// M U L T I P L Y    B Y    2    D I V I D E    B Y    6

// int main(){
//     ll t;
//     cin>>t;
//     while(t--){
//         ll num, power_of2=0, power_of3=0;;
//         cin>>num;
//         while(num%2 == 0){
//             power_of2++; num/=2;
//         }
//         while(num%3==0){
//             power_of3++; num/=3;
//         }
//         if(num>1 || power_of2>power_of3){
//         cout<<"-1"<<endl;
//         }else{
//             cout<<(power_of3-power_of2)+power_of3<<endl;
//         }
//     }
// }



// SOLVED IN CONTEST
// int main(){
//     ll t;
//     cin>>t;
//     while(t--){
//         ll num;
//         cin>>num;
//         vector<ll>ar(num);
//         make(ar);
//         bool mark=0;
//         bool all_1=1;
//         for(ll i=0;i<num;i++){
//             if(ar[i]==ar[i+1] && ar[i]==0){
//                 mark=1;
//                 break;
//             }
//         }
//         for(ll i=0;i<num;i++){
//             if(ar[i]==0) all_1=0;
//         }
//         if(mark || all_1){
//             cout<<"yes\n";
//         }else{
//             cout<<"no\n";
//         }
//     }
// }

// https://codeforces.com/problemset/problem/1327/A
// S U M    O F    O D D    I N T E G E R S
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        if((n%2==0 && k%2==0)&& n>=k){
            cout<<"YES\n";
        }else if((n%2!=0 && k%2!=0)&& n>=k){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}
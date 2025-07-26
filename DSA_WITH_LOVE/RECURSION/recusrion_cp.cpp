#include <bits/stdc++.h>
using namespace std;
#define make(v)  for(auto &i:v) cin>>i
#define prnt(v)  for(auto &i:v) cout<<i<<endl
#define ll       long long

//print increasing number from 1 to n

//print decreasing no.from n to 1

//print factorial of a number

//check if given string is a palindrome or not

//linear search

//nth fibonacci number(memoization)

//print subsequence

//count subsequence with given sum

//a function calling itself is called recursion
//  return type______f(){
// [      ] base case (where the recursion terminates generrally)
// [  f()   ] body of the function, where generally recursion call is made
//  }


// S O L N 1:
// void print(int i, int n){

//     cout<<i<<" ";
//     if(i==n) return;
    
//     print(i+1, n);
// }
// int main() {
//     int n;cin>>n;
//     print(1, n);
// }

// S O L N  2:
//M E T H O D  1:
// void print(int n){

//     if(n==0) return;

//     cout<<n<<" ";
//     print(n-=1);
// }
// int main() {
//     int n;cin>>n;
//     print(n);
// }

//M E T H O D   2:
// void print(int i, int n){

//     if(i==n) {
//         cout<<i<<" ";
//         return;
//     }

//     print(i+1, n);//just exchange the lines of function and cout
//     cout<<i<<" ";

// }
// int main() {
//     int n;cin>>n;
//     print(1, n);
// }


// S O L N   3:
// int factorial(int i){
//     int prod=i;
//     int fact;
//     if(i==0) fact=fact*1;
//     else fact=prod*factorial(i-1);
    

// }
// int main(){
//     int N;cin>>N;
//     int fact=factorial(N);
//     cout<<fact;
// }

//S O L N   4

// checking would be done when i>j

// bool check_palindrome(int i, int j, string s){
//     if(i>j) return true;
//     if(s[i]!=s[j]) return false;
//     return check_palindrome(i+1, j-1, s);
// }

// int main(){
//     string str;cin>>str;
//     if(check_palindrome(0, str.length()-1, str)) cout<<"yes";
//     else cout<<"no";

// }



//S O L N   5   "LINEAR SEARCH"

// N O T E: THERE ARE usually 3 things which are always needed to pass
// while solving an array related problem
//they are index(this varies), length(this is fixed)[used to check if the array has ended], and the array(this is also fixed) itself

bool found(int i,int n, int ar[8]){
    if(i==n) return false;//base case for: ki bhai i==n i.e array has ended and till now ni mila element therefore return false
    if(ar[i]==11) return true;
    return found(i+1, n, ar);
}


int main(){
    int ar[8]={1, 2, 3, 4, 5, 11, 12, 13};
    if(found(0, 8, ar)) cout<<"element found";
    else cout<<"no";
}

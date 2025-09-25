#include <bits/stdc++.h>
using namespace std;
#define make(v)  for(auto &i:v) cin>>i
#define prnt(v)  for(auto &i:v) cout<<i<<endl
#define ll       long long

//print increasing number from 1 to n ✅

//print decreasing no.from n to 1  ✅

//print factorial of a number  ✅

//check if given string is a palindrome or not  ✅

//linear search  ✅

//nth fibonacci number(memoization)  ✅

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

// int fact(int n){
//     if(n==0) return 1; 
//     return n * fact(n-1);
// }
// int main() {
//     ios::sync_with_stdio(false); cin.tie(nullptr);
//     cout<<fact(7);
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
// ~~~~~~~~~~~~~~~~~~~~~~~~alternate which i later wrote myself```````````````````````````````

// bool palindrome(string n, int l, int r){
//     if(l>r) return 1;
//     if(n[l]==n[r]) return palindrome(n, l+1, r-1);
//     else return false;
// }
// int main() {
//     ios::sync_with_stdio(false); cin.tie(nullptr);
//     string s; cin>>s;
//     cout<<palindrome(s, 0, s.length()-1);
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

// ~~~~~~~~~~~~~~~aagey ka code i wrote myself:~~~~~~~~~~~~~~
// bool linear_search(vector<int>v, int n, int i){
//     if(i==v.size()) return false;
//     if(v[i]!=n) return linear_search(v, n, i+1);
//     else return true;
// }
// int main() {
//     ios::sync_with_stdio(false); cin.tie(nullptr);
//     vector<int>v(5);
//     make(v);
//     int n;cin>>n;
//     cout<<linear_search(v, n, 0);
// }



// SOLN 6 PRINTING nTH FIBONACCI

int FIBO(int n){
    if(n<=1) return n;// hamara base case hai
    return (FIBO(n-1)+FIBO(n-2));
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n;cin>>n;

    cout<<FIBO(n);
}
// 0 1 1 2 3 5 8 ...
//recursion tree:
//             FIBO(4)
//            /       \
//       FIBO(3)      FIBO(2)
//       /    \        /    \
//  FIBO(2) FIBO(1) FIBO(1) FIBO(0)
//   /    \
// FIBO(1) FIBO(0)

// discussion abut the TIME COMPLEXITY:
// SINCE EACH NODE IS CALLING TWO NODES FURTHER THEREFORE WE WOULD BE 
//END UP TRAVELLING 2^N NODES/NUMBER THEREFOR THE TC IS
//O(2^N)

//AND space complexity is the height of the recursive tree which is :
//O(N)

//SOME MORE DISCUSSION;
//fr FIBO(2), we have to make recursion tree twice (or would need to calculate it twice )
// the ideal thing would be to calculate FIBO(2) once and store its value which can be used later on
// this way we reduce the time complexity from 2^N to O(N):
// here's is the needed code

// int FIBO(int n, vector<int>& dp) {
//     if (n <= 1) return n;
//     if (dp[n] != -1) return dp[n]; // check if already computed and stored
//     return dp[n] = FIBO(n - 1, dp) + FIBO(n - 2, dp);
// }

// int main() {
//     ios::sync_with_stdio(false); cin.tie(nullptr);
//     int n; cin >> n;
//     vector<int> dp(n+1, -1); // initialize dp array with -1
//     cout << FIBO(n, dp);
// }

// this is what called as ~~~~~~~~~~~~~~~MEMOISATION~~~~~~~~~~~~~



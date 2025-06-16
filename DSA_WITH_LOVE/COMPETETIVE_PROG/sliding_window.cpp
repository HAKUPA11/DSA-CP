// PROBLEM 1 :
// GIVEN AN ARRAY FIND THE SUM OF ELEMENTS  OF THE SUBARRAY OF SIZE "K"
// WITH MAXIMUM SUM

// CAN WE OPTIMIZE THE SOLUTION  FOR ABOVE PROBLEM
 
// ORIGIN OF SLIDING WINDOW PROBLEMS

// PROBLEM 2:
// FIND THE NEGATIVE NUMBER  IN EVERY WINDOW OF SIZE "K"

// PROBLEM 3 :
// GIVEN A STRING , CALCULATE THE MAXIMUM LENGTH OF A SUBSTRING IN WHICH 
// ANY CHARACTER DOES NOT REPEAT ITSELF

// TYPES OF SLIDING WINDOWS:
// a) FIXED SIZED
// b) VARIABLE SIZED

#include<bits/stdc++.h>
using namespace std;

#define make(v)  for(auto &i:v) cin>>i
#define prnt(v)  for(auto &i:v) cout<<i<<" "
#define ll       long long


// problem 1    HINT: BY DEFAULT SUBARRAY MEANS A SMALLER PART AND THAT SMALLER PART HAS TO BE CONTAGIOUS 
//USING   B R U T E   F O R C E
// int main(){
//     int n, k;
//     cin>>n>>k;
//     int sum=0;
//     vector<int>v(n);
//     vector<int>sub_v;//(n-k+1);
//     make(v);
//     for(int i=0;i<v.size()-k+1;i++){
//         for(int j=0;j<k;j++){
//             sum=sum+v[i+j];
//         }
//         sub_v.push_back(sum);
//         sum=0;
//     }
//     auto max_ment = max_element(sub_v.begin(), sub_v.end());
//     cout << *max_ment<<endl;
//     prnt(sub_v);
    
    
// }
// TEST CASES:
// a)
// 5 2
// 1 3 5 2 7
// 9
// b)
// 7 3
// -3 1 3 5 -2 7 9
// 14
// CODE PROBLEMS
// WHEN I WAS DOING THIS vector<int> sub_v(n - k + 1);
// This creates a vector sub_v with (n-k+1) elements, all initialized to 0. LIKE THIS 0 0 0...(N-K+1) TIMES AND THEN AFTERWARDS THE PUSH BACKED ELEMENTS
// Which means you're adding new elements to the end of the already allocated vector — not replacing the initial zeros.


// 🔴 Efficiency (O(n × k)) or (O(N^2))
// In this method i was recalculating the sum from scratch for every window.
// If n = 1e5 and k = 1e4, this becomes very slow.
// Using sliding window to get O(n) time.

// vector<int> sub_v(n - k + 1);
// “To store the sum of every subarray of size k,
// I realized that the first subarray starts at index 0,
// and the last possible subarray of size k starts at index n - k.
// So there are (n - k + 1) subarrays total.”

// Example:
// If n = 5 and k = 3,
// Valid starting indices are i = 0, 1, 2
// → Total = 5 - 3 + 1 = 3 subarrays.

// for (int i = 0; i < v.size() - k + 1; i++) {
// “I want to start from every index i where I can take a subarray of size k.
// So i must go from 0 to n - k.
// Hence the loop runs i < n - k + 1 times.”

//     for (int j = 0; j < k; j++) {
//         sum += v[i + j];
//     }“I want the sum of elements from v[i] to v[i + k - 1],
// so I run an inner loop for k steps and add those elements.”

// CORE LOGIC "I calculated how many subarrays of size k exist by doing n - k + 1,
// so I made a loop from 0 to n - k.
// For each starting index i, I added up k elements from i onward.
// I stored each of these sums in a vector and finally got the maximum."

//how ever in this method since we are making an extra vector thus space
//reqd is more we can get a solution with lesser space comp, and same time comp
//using same logic just the way of writing the code will be different

// int maxi =INT_MIN;
// for int i=0;i<n;i++{
//     int sum=0;
//     for(int j=i;j<k+i-1;j++){
//         sum+=v[j];
//     }
//     maxi=max(maxi, sum);
// }
// this is the logic

// C O M I N G   T O   S L I D I N G   W I N D O W   T E C H N I Q U E
// ADD NEXT TO THE LAST ELEMENT OF THE SUBARRAY &
// SUBTRACT FIRST ELEMENT OF THE SUBARRAY

int main(){
    int n ,k;
    cin>>n>>k;
    int arr[n];//or i can use vector also
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int maxi=INT_MIN;
    //we just have to only ,calc the first window sum and afterwards we just slide the window
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    maxi=max(maxi, sum);
    //use another loop to slide windpw one at a time
    for(int i=k;i<n;i++){//because k is next to the current end point
        int add_index=i;
        int remove_index=i-k;
        sum=sum+arr[add_index]-arr[remove_index];
        //here you have the sum of next window
        maxi=max(maxi, sum);
    }
    cout<<maxi<<"\n";
}


// H O W    D O E S    S L I D I N G    W I N D O W    P R O B L E M S    L O O K 
// LIKE
// 1) FIXED SIZE
// 2)VARIABLE SIZE( CALLED AS 2 POINTERS) 

// FIXED SIZE WINDOWS
// these windpws come in the picture when we are supose to deal with 
// contagious parts of the array which are sub arrays also it might be 
// possible that you will be given a string, then substring can also be 
// asked, another type would be -size would be given, another type-calculate
// from each window

// in the previous questio done all of these checks were checked

// PROBLEM 2:
// GIVEN AN ARRAY. CALCULATE FIRST NEGATIVE INTEGER OF EACH SUBARAY OF SIZE "K"

// WITH BRUTE FORCE APPROACH IT BECOMES VERY EASY HOWEVER
// LET US THINK OF A O(N) SOLN
// WE WILL USE DEQUE FOR THAT
// WE STORE ALL THE NEGATIVE NUMBERS THEN CHECK EACH WINDOW , IF ANY NEGATIVE NUMBER AMONG THE NUMBERS WE STORED, AND THAT NUMBER WE HAVE TO COUT/ REPORT
int main(){

}
TEST CASES:
9 3
-3 2 7 -1 2 -2 5 8 9
-3 -1 -1 -1 -3 -3 0



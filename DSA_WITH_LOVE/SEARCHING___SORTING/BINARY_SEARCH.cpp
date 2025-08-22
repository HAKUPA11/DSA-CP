// B I N A R Y   S E A R C H
// binary search is a searching algo for a sorted collection of a data

//it divides the range to search by half every iteration

//time comp : O(log N)

// takes  ~20 iterations to search 10^6 elements 
//reason tc: is O(N)
//every time we are dividing by 2
//lets say we had 'N' elements and lets say we divided "N" by "2" "K"(K is the number of iterations) times unless and until we got to 1 value
//i.e every time we are getting rid of half values until we get 1  value
// (((N/2) /2) /2) /2 /2 /2... K-TIMES = 1
// N/2^K = 1
// N = 2^K
// or K=log2(N) because everytime we are getting rid of half of the elements

#include<bits/stdc++.h>
using namespace std;

bool search(vector<int>a,int target){
    int left=0, right=a.size()-1;
    
    while(left<=right){ // why this condn because we have[L, R] AS RANGE if L>R then [L, R] doesnt make any sense bcuase then that range will have 0 elements satisfying L>R
        int mid= (left+right)/2;
        if(a[mid]==target) return true;

        if(a[mid]<target) left=mid+1;
        if(a[mid]>target) right=mid-1;
    }
    return false;// if not element is found
}

int main(){
    vector<int>v={1, 23, 45, 121, 177, 189};
    bool found=search(v, 177);
    if(found) cout<<"ELEMENT FOUND";
    else cout<<"ELEMENT NOT FOUND";
}

//O U E S T I O N
//SUPPOSE WE HAVE TO FIND THE INDEX OF LAST OCCURRENCE OF THE TARGET
// EG: 1 1 1 2 2 2 3 3 5

// NOTE: THE RANGE [L, R] in binary search is not just for finding the wright value
// but it is also the range/piece of potentiial solutions
// we will take the middle elementsa each time
// in this case we already got the middle element which is 2


//B I N A R Y    S E A R C H    [PREDICATE FXN]
//binary search works on a set of elements where the 'predicate'   fxn is applied to as follows:
//  T T T T ... T T F F ... F F F F
//BINARY SEARCH WILL MOVE-
// 'L' to 'mid' when predicate is true;
// 'R' to 'mid' when predicate is false;
// TWO POINTER
// *The two pointer algorithm is typically used for finding solutions in pairs 
//these pairts are the pairs where the two pointer are pointing to.
//eachvariable moves in a single direction, and they only traverse the arraysingle time.

//therefore time complexity will be O(N+M) WHERE N AND M  are the time complexities for the two variables

//sometmes , two pointers is able to replacew binary search , reducing the time complexity
//and making the implementation easier.

// or it is used to give a range of soln 
// EXAMPLES:
// Suppose you have an array:
// A = [1, 3, 4, 5, 7, 8, 9]
// Let’s say you want to find a pair that sums to 10.
// You can use two pointers to do this efficiently.
// Indexes:   0   1   2   3   4   5   6
// Array:    [1,  3,  4,  5,  7,  8,  9]
//            ^                       ^
//         left                    right
// Check if A[left] + A[right] == 10
// If sum < 10, move left rightwards
// If sum > 10, move right leftwards

// other example is that we can use it for reversing a array or a string
// same approach fr checking a palindrome
//other example is merging sorted array
// i.e
//A: [1, 3, 5, 7]
//B: [2, 4, 6, 8]
// merged: [1, 2, 3, 4, 5, 6, 7, 8]
//we can simply do thuis in O((n+m)log(n+m)) but that will be slow
// we can also do it in O(n+m) using two pointers

// code:
// int main(){
//     int n, m;cin>>n>>m
//     int a[n], b[m];
//     for(int i=0;i<n;i++) cin>>a[i];
//     for(int i=0;i<m;i++) cin>>b[i];

//     int i=0, j=0;
//     while(i<n || j<m){
//         if(i==n) cout<<b[j++] << " "; //cout<<b[j]<<" "; and then j++
//         else if(j==m) cout<<a[i++]<< " ";
//         else if(a[i] < b[j]) cout << a[i++] << " ";
//         else cout << b[j++] << " ";
//     }
// }

//approach for yhe above code is that we have two pointers i and j
// i is for the first array and j is for the second array
// we will check if i is equal to n, then we will print the element at j and increment j
// if j is equal to m, then we will print the element at i and increment i
// if a[i] is less than b[j], then we will print the element at i and increment i
// else we will print the element at j and increment j
// this will give us the merged array in sorted order
///diagram:
// A: [1, 3, 5, 7]
// B: [2, 4, 6, 8]
// merged: [1, 2, 3, 4, 5, 6, 7, 8]
// schematic diagram:
// A: [1, 3, 5, 7]
//       ^
// B: [2, 4, 6, 8]
//       ^
// Merged: []

// Step 1: Compare A[0]=1 and B[0]=2 → 1 is smaller, add to Merged
// Merged: [1]

// A: [1, 3, 5, 7]
//           ^
// B: [2, 4, 6, 8]
//       ^
// Merged: [1]

// Step 2: Compare A[1]=3 and B[0]=2 → 2 is smaller, add to Merged
// Merged: [1, 2]

// A: [1, 3, 5, 7]
//           ^
// B: [2, 4, 6, 8]
//           ^
// Merged: [1, 2]

// Step 3: Compare A[1]=3 and B[1]=4 → 3 is smaller, add to Merged
// Merged: [1, 2, 3]

// A: [1, 3, 5, 7]
//               ^
// B: [2, 4, 6, 8]
//           ^
// Merged: [1, 2, 3]

// Step 4: Compare A[2]=5 and B[1]=4 → 4 is smaller, add to Merged
// Merged: [1, 2, 3, 4]

// A: [1, 3, 5, 7]
//               ^
// B: [2, 4, 6, 8]
//               ^
// Merged: [1, 2, 3, 4]

// Step 5: Compare A[2]=5 and B[2]=6 → 5 is smaller, add to Merged
// Merged: [1, 2, 3, 4, 5]

// A: [1, 3, 5, 7]
//                   ^
// B: [2, 4, 6, 8]
//               ^
// Merged: [1, 2, 3, 4, 5]

// Step 6: Compare A[3]=7 and B[2]=6 → 6 is smaller, add to Merged
// Merged: [1, 2, 3, 4, 5, 6]

// A: [1, 3, 5, 7]
//                   ^
// B: [2, 4, 6, 8]
//                   ^
// Merged: [1, 2, 3, 4, 5, 6]

// Step 7: Compare A[3]=7 and B[3]=8 → 7 is smaller, add to Merged
// Merged: [1, 2, 3, 4, 5, 6, 7]

// A: [1, 3, 5, 7]
//                       ^
// B: [2, 4, 6, 8]
//                   ^
// Merged: [1, 2, 3, 4, 5, 6, 7]

// Step 8: A is exhausted, add remaining B[3]=8
// Merged: [1, 2, 3, 4, 5, 6, 7, 8]


// ANOTHER EXAMPLE:
// FIND I, J such that Ai + Aj = K where A and B are sorted arrays

// B I N A R Y   S E A R C H
// binary search is a searching algo for a sorted collection of a data

//it divides the range to search by half every iteration

//time comp : O(log N)

// takes  ~20 iterations to search 10^6 elements 
//reason tc: is O(N)
//every time we are dividing by 2
//lets say we had 'N' elements and lets say we divided "N" by "2" "K"(K is the number of iterations) times unless and until we got to 1 value
// N/2/2/2/2/2/2... K-TIMES = 1
// N/2^K = 1
// N = 2^K
// or K=log2(N) because everytime we are getting rid of half of the elements

//CODE TO KNOW IF THE ELEMENT IS PRESENT IN THE ARRAY
// jiust hover the image name
//heres the code [img_bs.jpg]

// // bool search(vector<int>a, target){
//     int left=0, right=a.size()-1;
    
//     while(left<=right){
//         int mid= (left+right)/2;
//         if(a[mid]==target) return true;

//         if(a[mid]<target) left=mid+1;
//         if(a[mid]>target) right=mid-1;
//     }
//     return false;// if not element is found
// // }

//O U E S T I O N
//SUPPOSE WE HAVE TO FIND THE INDEX OF LAST OCCURRENCE OF THE TARGET
// EG: 1 1 1 2 2 2 3 3 5

// NOTE: THE RANGE [L, R] in binary search is not just for finding the wright value
// but it is also the range/piece of potentiial solutions
// we will take the middle elementsa each time
// in this case we already got the middle element which is 2
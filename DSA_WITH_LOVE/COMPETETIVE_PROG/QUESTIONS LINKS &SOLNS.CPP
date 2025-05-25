// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1?page=1&status=attempted&sortBy=submissions
// GFG MAX SUM OF SUBARRAY OF SIZE K
// SOLN
//         int sum=0;
//         for(int i=0;i<k;i++){
//             sum+=arr[i];
//         }
//         int maxi=INT_MIN;
//         maxi=max(maxi, sum);
//         for(int i=k;i<arr.size();i++){
//             int add_index=i;
//             int remove_index=i-k;
//             sum=sum+arr[add_index]-arr[remove_index];
//             maxi=max(sum, maxi);
//         }
//         return maxi;
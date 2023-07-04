//* https://practice.geeksforgeeks.org/problems/maximum-index3307/1
//* https://www.geeksforgeeks.org/given-an-array-arr-find-the-maximum-j-i-such-that-arrj-arri/
//* https://discuss.geeksforgeeks.org/comment/d412aa4632e969c2a3e4f040a918f8bb
//* https://youtu.be/saVArT5fO4M

class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        // code here
        
        int minLeft[n], maxRight[n];
        
        minLeft[0] = arr[0], maxRight[n-1] = arr[n-1];
        
        // minLeft
        for(int i = 1; i < n; i++){
            minLeft[i] = min(minLeft[i-1], arr[i]);
        }
        
        // maxRight
        for(int i = n-2; i >= 0; i--){
            maxRight[i] = max(maxRight[i+1], arr[i]);
        }
        
        // maxDiff
        int left = 0, right = 0, maxDiff = 0;
        while(left < n && right < n){
            // if(minLeft[left] <= maxRight[right]){
            //     maxDiff = max(maxDiff, right-left);
            //     right++;
            // }
            // else{
            //     left++;
            // }
            
            while(right < n && minLeft[left] <= maxRight[right]){
                right++;
            }
            maxDiff = max(maxDiff, right - left - 1);
            left++;
        }
        
        return maxDiff;
    }
};
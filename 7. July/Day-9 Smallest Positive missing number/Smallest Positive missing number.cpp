//* https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1
//* https://www.geeksforgeeks.org/find-the-smallest-positive-number-missing-from-an-unsorted-array/
//* https://www.youtube.com/watch?v=VyGxfKpsSpw

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        
        
        //* Using Maps
        // map<int, int> mp;
        // for(int i = 0; i <  n; i++){
        //     if(arr[i] >= 1){
        //         mp[arr[i]]++;
        //     }
        // }
        
        // int i = 1;
        // for(auto it : mp){
        //     if(i != it.first){
        //         return i;
        //     }
        //     i++;
        // }
        
        // return i;
        
        
        //* Another Method
        bool present[n+1] = {false};
        
        for(int i = 0; i < n; i++){
            if(arr[i] > 0 && arr[i] <= n){
                present[arr[i]] = true;
            }
        }
        
        for(int i = 1; i <= n; i++){
            if(present[i] == false){
                return i;
            }
        }
        return n+1;
    } 
};
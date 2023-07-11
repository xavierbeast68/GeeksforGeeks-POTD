//* https://practice.geeksforgeeks.org/problems/find-triplets-with-zero-sum/1
//* https://www.geeksforgeeks.org/find-triplets-array-whose-sum-equal-zero/
//* https://www.youtube.com/watch?v=D159Sijy7ng

class Solution{
public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
        bool found = false;

        for (int i = 0; i < n - 1; i++) {
            // Find all pairs with sum equals to
            // "-arr[i]"
            unordered_set<int> s;
            for (int j = i + 1; j < n; j++) {
                int x = -(arr[i] + arr[j]);
                if (s.find(x) != s.end()) {
    
                    found = true;
                }
                else
                    s.insert(arr[j]);
            }
        }
    
        return found;
    }
};
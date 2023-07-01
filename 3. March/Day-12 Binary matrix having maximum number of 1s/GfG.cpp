//* https://practice.geeksforgeeks.org/problems/77e1c3e12cd148f835d53eb168d4472b2ff539fa/1


//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> mat, int n) {
        //code here
        
        int maxCount = -1, maxRow = -1;
        
        for(int i = 0; i<n; ++i){
            int count = 0;
            for(int j = 0; j<n; ++j){
                if(mat[i][j] == 1){
                    count++;
                }
            }
            
            if(count > maxCount){
                maxCount = count;
                maxRow = i;
            }
        }
        
        vector<int> ans{maxRow, maxCount};
        
        return ans;
    }
};

    // { Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<vector<int>> arr(n, vector<int> (n));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> arr[i][j];
        Solution obj;
        vector<int> ans = obj.findMaxRow(arr, n);
        for(int val : ans) {
            cout << val << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends
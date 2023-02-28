//* https://practice.geeksforgeeks.org/problems/d4aeef538e6dd3280dda5f8ed7964727fdc7075f/1
//* https://www.youtube.com/watch?v=oTqi1Fnuioo


//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> optimalArray(int n,vector<int> &a){
        // Code here
        
        vector<int> ans;
        vector<int> sum(n,0);
        ans.push_back(0);
        sum[0] = a[0];
        for(int i = 1 ; i < n ; ++i){
            sum[i] += sum[i-1] + a[i];
            
            int j = i/2;
            // if number of elements (i+1) is odd
            if(i%2 == 0){
                int left = sum[j-1];
                int right = sum[i] - sum[j];
                ans.push_back(right - left);
            } 
            // case when number of elements till i are even
            else{
                int left = sum[j];
                int right = sum[i] - sum[j];
                ans.push_back(right - left);
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        Solution obj;
        vector<int> ans=obj.optimalArray(n,a);
        for(auto ele:ans){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
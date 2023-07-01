//* https://practice.geeksforgeeks.org/problems/a7a4da81b20f4a05bbd93f5786fcf7478298f4f5/1
//* https://www.youtube.com/watch?v=Borx2oATvLI

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<long long int> minimumSquares(long long int L, long long int B)
    {
        // code here
        
        long long  int k = __gcd(L, B);
        long long int n = (L*B)/(k*k);
        vector<long long int> answer {n, k};
        return answer;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int L, B;
        cin>>L>>B;
        
        Solution ob;
        vector<long long int> ans = ob.minimumSquares(L, B);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}
// } Driver Code Ends
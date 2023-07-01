//* https://practice.geeksforgeeks.org/problems/13eb74f1c80bc67d526a69b8276f6cad1b8c3401/1
//* https://www.youtube.com/watch?v=O1ziPY4hHb0
//* https://www.youtube.com/watch?v=5uTGxfB-RzI

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int checkCompressed(string S, string T) {
        // code here
        
        int n = S.length();
        int m = T.length();
        int i = 0, j = 0;
        
        while(i < n && j < m){
            if(isdigit(T[j])){
                int count = 0;
                while(j < m && isdigit(T[j])){
                    count = count*10 + (T[j] - '0');
                    j++;
                }
                i += count;
            }
            
            else if(S[i] == T[j]){
                i++;
                j++;
            }
            else if(S[i] != T[i]){
                return 0;
            }
        }
        return i == n && j == m;   
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S,T;
        
        cin>>S>>T;

        Solution ob;
        cout << ob.checkCompressed(S,T) << endl;
    }
    return 0;
}
// } Driver Code Ends
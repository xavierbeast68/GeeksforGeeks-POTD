//* https://practice.geeksforgeeks.org/problems/d7cd0429f9cf85f421831c4f6d50fad99566c1f9/1

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
    //Complete the function and return minimum number of operations
    public:
    int checkPalin(string temp, int num, int m){
        int start = 0, end = temp.length()-1, op = 0;
        while(start <= end){
            if(temp[start] != temp[end]){
                op++;
                if(start >= num && end <= (num + m -1)){
                    return 1e9;
                }
            }
            start++;
            end--;
        }
        
        return op;
    }
    int specialPalindrome(string s1, string s2){
        //Code Here
        
        int n = s1.length();
        int m = s2.length();
        int mini = 1e9;
        string temp = s1;
        
        for(int i = 0; i <= n-m; ++i){
            int op = 0;
            for(int j = 0; j < m; ++j){
                
                if(temp[i+j] != s2[j]){
                    op++;
                }
                temp[i+j] = s2[j];
            }
            
            mini = min(mini, op + checkPalin(temp, i, m));
            temp = s1;
        }
        
        if(mini == 1e9){
            return -1;
        }
        return mini;
    }
};

//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        Solution obj;
        int ans = obj.specialPalindrome(s1,s2);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends
//* https://www.youtube.com/watch?v=bHs4YBG-3aQ
//* https://practice.geeksforgeeks.org/problems/07e45fe40846bc670ad2507d2c649304699768b9/1


//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    //*brute-force solution->
    // string  decimal_to_binary(int n){
    //     string s = "";
    //     while(n > 0 ){
    //         int d = n % 2;
    //         s = to_string(d) + s;
    //         n = n / 2;
    //     }
    //     return s;
    // }
    // void solve(string& s){
    //     for(int i = 0 ; i < s.length(); ++i){
    //         if(s[i] == '1' && s[i+1] == '1' && s[i+2] == '1'){
    //             s[i+2] = '0';
    //             i = i + 2;
    //         }
    //     }
    // }
    // int binary_to_decimal(string s){
    //     int ans = 0, pow = 1;
    //     for(int i = s.length()-1; i >= 0; --i){
    //         if(s[i] == '1'){
    //             ans = ans + pow;
    //         }
    //         pow *= 2;
    //     }
    //     return ans;
    // }
    // int noConseBits(int n) {
    //     // code here
    //     if(n < 7){
    //         return n;
    //     }
    //     string s = decimal_to_binary(n);
    //     solve(s);
    //     int ans = binary_to_decimal(s);
    //     return ans;
    // }

    //*optimized-> using Bit Manipulation
    int noConseBits(int n)
    {
        // code here
        int cnt = 0;
        for (int i = 31; i >= 0; i--)
        {
            int mask = (1 << i);
            if (n & mask)
            {
                cnt++;
                if (cnt == 3)
                {
                    n = n & (~mask);
                    cnt = 0;
                }
            }
            else
            {
                cnt = 0;
            }
        }
        return n;
    }
};

//{ Driver Code Starts.

int main()
{

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--)
    {

        int n;
        cin >> n;
        int ans = sol.noConseBits(n);
        cout << ans << '\n';
    }

    return 0;
}

// } Driver Code Ends
//* https://practice.geeksforgeeks.org/problems/d25f415de2ff3e02134de03e17ad019d723ab2e9/1
//* https://www.youtube.com/watch?v=WGQVse9-j8c&ab_channel=CodeFreaks

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    long long calAmt(int x, string &s, string a)
    {
        stack<char> st;

        long long ans = 0;
        int n = s.length();
        int i = 1;
        st.push(s[0]);
        while (i < n)
        {
            char ch = s[i];

            if (ch == a[1] && !st.empty() && st.top() == a[0])
            {
                ans += x;
                st.pop();
            }
            else
            {
                st.push(ch);
            }
            i++;
        }
        s = "";
        while (!st.empty())
        {
            s = (st.top()) + s;
            st.pop();
        }
        return ans;
    }
    long long solve(int X, int Y, string S)
    {
        // code here

        if (S.length() == 1)
        {
            return 0;
        }

        string a = "pr", b = "rp";
        if (X < Y)
        {
            swap(X, Y);
            swap(a, b);
        }

        return calAmt(X, S, a) + calAmt(Y, S, b);
    }
};

//{ Driver Code Starts.
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X, Y;
        cin >> X >> Y;
        string S;
        cin >> S;
        Solution obj;
        long long answer = obj.solve(X, Y, S);
        cout << answer << endl;
    }
}
// } Driver Code Ends
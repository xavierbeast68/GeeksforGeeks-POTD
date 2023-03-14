//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    long long maxPossibleValue(int n, vector<int> a, vector<int> b)
    {
        // code here

        int countPairs = 0;
        long long ans = 0;
        int mini = INT_MAX;

        for (int i = 0; i < n; ++i)
        {
            if (b[i] > 1)
            {
                countPairs += b[i] / 2;
                ans += 2 * (b[i] / 2) * a[i];
                mini = min(mini, a[i]);
            }
        }

        if (countPairs % 2 == 1)
        {
            ans -= 2 * mini;
        }

        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++)
        {
            cin >> B[i];
        }
        Solution obj;
        auto ans = obj.maxPossibleValue(N, A, B);
        cout << ans << endl;
    }
}
// } Driver Code Ends
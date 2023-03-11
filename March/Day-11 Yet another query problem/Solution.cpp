//* https://practice.geeksforgeeks.org/problems/ad6699d4aaf84c74b119fac3b65e9ceb3fc8ef14/1
//* https://www.youtube.com/watch?v=opVJo0lBxOk
//* https://www.youtube.com/watch?v=Tx-ch39Svck

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> solveQueries(int n, int num, vector<int> &a, vector<vector<int>> &q)
    {
        // code here

        vector<int> v(n);

        unordered_map<int, int> mp;

        for (int i = n - 1; i >= 0; --i)
        {
            mp[a[i]]++;
            v[i] = mp[a[i]];
        }

        vector<int> ans;

        for (auto x : q)
        {
            int cnt = 0;
            for (int i = x[0]; i <= x[1]; ++i)
            {
                if (v[i] == x[2])
                {
                    cnt++;
                }
            }

            ans.push_back(cnt);
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
        int num;
        cin >> num;
        vector<int> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        vector<vector<int>> Q(num, vector<int>(3));
        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> Q[i][j];
            }
        }
        Solution obj;
        vector<int> res = obj.solveQueries(N, num, A, Q);

        for (auto ele : res)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends
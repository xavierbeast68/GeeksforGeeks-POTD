//* https://practice.geeksforgeeks.org/problems/c670bf260ea9dce6c5910dedc165aa403f6e951d/1
//* https://www.youtube.com/watch?v=nvzxNppUIt0&ab_channel=CodeFreaks

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array
{
public:
    template <class T>
    static void input(vector<T> &A, int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};

// } Driver Code Ends
class Solution
{
public:
    vector<int> getDistinctDifference(int N, vector<int> &A)
    {
        // code here

        if (N == 1)
        {
            return vector<int>(1, 0);
            ;
        }

        unordered_map<int, int> mpl, mpr;
        vector<int> left(N, 0);
        vector<int> right(N, 0);
        mpl[A[0]]++;
        mpr[A[N - 1]]++;

        for (int i = 1; i < N; ++i)
        {
            left[i] = mpl.size();
            mpl[A[i]]++;
        }
        for (int i = N - 2; i >= 0; --i)
        {
            right[i] = mpr.size();
            mpr[A[i]]++;
        }

        vector<int> ans(N);
        for (int i = 0; i < N; ++i)
        {
            ans[i] = left[i] - right[i];
        }

        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    scanf("%d ", &t);
    while (t--)
    {

        int N;
        scanf("%d", &N);

        vector<int> A(N);
        Array::input(A, N);

        Solution obj;
        vector<int> res = obj.getDistinctDifference(N, A);

        Array::print(res);
    }
}

// } Driver Code Ends
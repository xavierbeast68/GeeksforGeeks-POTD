//* https://practice.geeksforgeeks.org/problems/0960a833f70b09c59444ea487f99729929fc8910/1
//* https://www.youtube.com/watch?v=_asnPb5AFtM&ab_channel=CodeFreaks


//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

long long int no_of_subarrays(int n, vector<int> &arr)
{
    // Write your code here.

    long long ans = 0;

    int i = 0, j = 0, sum = 0;
    while (j < n)
    {
        sum += arr[j];

        while (i <= j && sum != 0)
        {
            sum -= arr[i];
            i++;
        }

        if (sum == 0)
        {
            ans += (j - i + 1);
        }
        j++;
    }

    return ans;
}

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << no_of_subarrays(n, arr) << endl;
    }
}

// } Driver Code Ends
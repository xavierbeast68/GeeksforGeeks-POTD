//* https://practice.geeksforgeeks.org/problems/d54c71dc974b7db3a200eb63f34e3d1cba955d86/1
//* https://www.youtube.com/watch?v=XstNUEYQMiQ
//* https://www.youtube.com/watch?v=593sZ1cyomA

//{ Driver Code Starts
// Initial Template for CPP

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    long long maxTripletProduct(long long arr[], int n)
    {
        // Complete the function

        sort(arr, arr + n);

        long long a = arr[0] * arr[1] * arr[n - 1];
        long long b = arr[n - 1] * arr[n - 2] * arr[n - 3];

        return max(a, b);
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        long long arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.maxTripletProduct(arr, n);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
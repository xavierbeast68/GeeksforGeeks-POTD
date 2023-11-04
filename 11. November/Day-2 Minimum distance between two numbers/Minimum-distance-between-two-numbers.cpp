//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        
        unordered_map<int,vector<int>> mp;
        
        for(int i = 0; i < n; ++i){
            if(a[i] == x){
                mp[x].push_back(i);
            }
            if(a[i] == y){
                mp[y].push_back(i);
            }
        }
        
        if(mp.find(x) == mp.end() || mp.find(y) == mp.end()) return -1;
        
        // for(auto it : mp[x]){
        //     cout << it << " ";
        // }
        // cout << endl;
        // for(auto it : mp[y]){
        //     cout << it << " ";
        // }
        // cout << endl;
        
        int dist = INT_MAX;
        int sz = mp[y].size();
        for(int it : mp[x]){
            
            int ind2 = upper_bound(mp[y].begin(), mp[y].begin(), it) - mp[y].begin();
            int ind1 = ind2 - 1;
            
            // cout << ind1 << " " << ind2 << endl;
            
            if(ind2 == 0) dist = min(dist, abs(mp[y][ind2]-it));
            else if(ind2 == sz) dist = min(dist, abs(mp[y][ind1]-it));
            else dist = min({dist, abs(mp[y][ind2]-it), abs(it-mp[y][ind1])});
        }
        
        return dist;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends
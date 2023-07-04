//* https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1
//* https://www.geeksforgeeks.org/number-subarrays-product-less-k/
//* https://youtu.be/SGCol3kojos
//* https://www.youtube.com/watch?v=NbgRSeV_ypU

class Solution{
public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        
        int ans = 0;
        int i = 0, j = 0;
        long long prod = 1;
        while(j < n){
            prod = prod*(1LL*a[j]);
            
            while(i <= j && prod >= k){
                prod = prod / (1LL*a[i]);
                
                ans += (j-i);
                
                i++;
            }
            
            j++;
        }
        
        ans += (j-i)*(j-i+1)/2;
        return ans;
    }
};
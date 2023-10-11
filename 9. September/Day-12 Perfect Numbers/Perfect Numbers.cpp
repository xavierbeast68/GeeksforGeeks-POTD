class Solution {
public:
    int isPerfectNumber(long long N) {
        // code here
        
        if(N == 1){
            return 0;
        }
        
        long long sum = 1;
        
        long long n = sqrt(N);
        for(long long num1 = 2; num1 <= n; num1++){
            if(N%num1 == 0){
                long long num2 = N / num1;
                
                if(num1 == num2) sum += num1;
                else sum += (num1 + num2);
            }
        }
        
        return sum == N;
    }
};
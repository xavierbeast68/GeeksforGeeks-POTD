//* https://practice.geeksforgeeks.org/problems/set-bits0143/1
//* https://www.geeksforgeeks.org/count-set-bits-in-an-integer/

class Solution {
public:
    int setBits(int N) {
        // Write Your Code here
        
        int cnt = 0;
        
        // for(int i = 0; i < 32; i++){
        //     int mask = 1 << i;
        //     if(mask & N){
        //         cnt++;
        //     }
        // }

        while(N > 0){
            N = N & (N-1);
            cnt++;
        }
        
        return cnt;
    }
};
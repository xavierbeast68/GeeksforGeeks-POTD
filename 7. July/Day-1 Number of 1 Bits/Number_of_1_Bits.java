
class Solution {
    static int setBits(int N) {
        // code here
        
        int cnt = 0;

        // for(int i = 0; i < 32; i++){
        //     int mask = 1 << i;
        //     if((mask & N) != 0){
        //         cnt++;
        //     }
        // }

        while(N > 0){
            N = N & (N-1);
            cnt++;
        }
        
        return cnt;
    }
}
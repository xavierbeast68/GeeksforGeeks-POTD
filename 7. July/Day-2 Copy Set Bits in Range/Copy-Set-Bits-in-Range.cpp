//* https://practice.geeksforgeeks.org/problems/copy-set-bits-in-range0623/1

class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        // code here
        
        for(int i = l-1; i <= r-1; i++){
            int mask = 1 << i;
            if(mask & y){
                x |= mask;
            }
        }
        
        return x;
    }
};
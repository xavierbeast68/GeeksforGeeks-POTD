//* https://www.youtube.com/watch?v=WNwUCXQ7tKc
//* https://www.geeksforgeeks.org/happy-number/
//* https://www.youtube.com/watch?v=wuYM12cIErM

class Solution{
public:
    int nextHappy(int N){
        // code here
        
        if(N == 1 || N == 7){
            return N;
        }
        
        int num = N + 1;
        while(true){
            if(happy(num)){
                break;
            }
            
            num++;
        }
        
        return num;
    }
    
    bool happy(int num){
        int sum = num, x = num;
        
        while(sum > 9){
            
            sum = 0;
            
            while(x > 0){
                int d = x % 10;
                sum += d*d;
                x = x / 10;
            }
            
            if(sum == 1){
                return 1;
            }
            
            x = sum;
        }
        
        if(sum == 7){
            return 1;
        }
        return 0;
    }
};
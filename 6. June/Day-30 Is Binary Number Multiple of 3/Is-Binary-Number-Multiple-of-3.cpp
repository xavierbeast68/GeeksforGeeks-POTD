//* https://practice.geeksforgeeks.org/problems/is-binary-number-multiple-of-30654/1
//* https://www.youtube.com/watch?v=47idbQCetJ8&ab_channel=CodeFreaks
// https://www.youtube.com/watch?v=Sd2ZjG20iUA&ab_channel=Pepcoding
// https://stackoverflow.com/questions/52216489/how-to-know-number-is-divisible-by-3-or-any-odd-number-using-bitwise-operator-in#:~:text=Count%20the%20number%20of%20non,number%20is%20divisible%20by%203.


class Solution{
public:	
		
	int isDivisible(string s){
	    //complete the function here

	    // Method-1
	    int sum = 0, x = 1, n = s.length(), ind = 0;
	    while(ind < n){
	        if(s[n-1-ind] == '1'){
	            sum = (sum + x) % 3;
	        }
	        x = (x * 2) % 3;
	        ind++;
	    }
	    if(sum % 3 == 0){
	        return 1;
	    }
	    else{
	        return 0;
	    }
	    
	    
	    // Method-2
	   // int even = 0, odd = 0;
	   // for(int i = 0; i < s.size(); i++){
	   //     if(i%2 == 0){
	   //         even += s[i]-'0';
	   //     }
	   //     else{
	   //         odd += s[i] - '0';
	   //     }
	   // }
	    
	   // int delta = abs(even - odd);
	   // if(delta % 3 == 0){
	   //     return 1;
	   // }
	   // else{
	   //     return 0;
	   // }
	}

};
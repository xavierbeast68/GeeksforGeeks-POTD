//* https://practice.geeksforgeeks.org/problems/2d3fc3651507fc0c6bd1fa43861e0d1c43d4b8a1/1
//* https://www.youtube.com/watch?v=UiST2GTQnJs

//{ Driver Code Starts
//Initial Template for Java
import java.io.*;
import java.util.*; 
class GFG{
    public static void main(String args[]) throws IOException { 
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        
        while(t-- > 0){
            int N = Integer.parseInt(read.readLine().trim());
            String input_line[] = read.readLine().trim().split("\\s+");
            int A[]= new int[N];
            for(int i = 0; i < N; i++)
                A[i] = Integer.parseInt(input_line[i]);
            input_line = read.readLine().trim().split("\\s+");
            int B[]= new int[N];
            for(int i = 0; i < N; i++)
                B[i] = Integer.parseInt(input_line[i]);

            Solution ob = new Solution();
            long ans = ob.maxPossibleValue(N, A, B); 
            System.out.println(ans);
        }
    } 
} 
// } Driver Code Ends


//User function Template for Java
class Solution 
{ 
    long maxPossibleValue(int n, int a[] ,int b[]) { 
        // code here
        
        int countPairs = 0;
        long ans = 0;
        int min = Integer.MAX_VALUE;
        
        for(int i = 0; i < n; ++i){
            if(b[i] > 1){
                countPairs += b[i]/2;
                ans += 2*(b[i]/2) * a[i];
                min = Math.min(min, a[i]);
            }
        }
        
        if(countPairs%2 == 1){
            ans -= 2*min;
        }
        
        return ans;
    }
}
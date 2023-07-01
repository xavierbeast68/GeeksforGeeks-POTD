//* https://practice.geeksforgeeks.org/problems/d54c71dc974b7db3a200eb63f34e3d1cba955d86/1
//* https://www.youtube.com/watch?v=593sZ1cyomA
//* https://www.youtube.com/watch?v=XstNUEYQMiQ

//{ Driver Code Starts
//Initial Template for Java

/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;

// } Driver Code Ends
//User function Template for Java

class Solution {
    Long maxTripletProduct(Long arr[], int n) {
        // Complete the function

        Arrays.sort(arr);

        long a = arr[0] * arr[1] * arr[n - 1];
        long b = arr[n - 1] * arr[n - 2] * arr[n - 3];

        return Math.max(a, b);
    }
}

// { Driver Code Starts.

// Driver class
class Array {

    // Driver code
    public static void main(String[] args) throws IOException {
        // Taking input using buffered reader
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int testcases = Integer.parseInt(br.readLine());

        // looping through all testcases
        while (testcases-- > 0) {

            int sizeOfArray = Integer.parseInt(br.readLine());

            Long[] arr = new Long[sizeOfArray];

            String line = br.readLine();
            String[] elements = line.trim().split("\\s+");

            for (int i = 0; i < sizeOfArray; i++) {
                arr[i] = Long.parseLong(elements[i]);
            }

            Solution obj = new Solution();
            Long res = obj.maxTripletProduct(arr, sizeOfArray);
            System.out.println(res);
        }
    }
}

// } Driver Code Ends
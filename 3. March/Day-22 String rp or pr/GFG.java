//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int t = Integer.parseInt(br.readLine());

        while (t > 0) {

            String input_line1[] = br.readLine().trim().split("\\s+");
            int X = Integer.parseInt(input_line1[0]);
            int Y = Integer.parseInt(input_line1[1]);

            String S = br.readLine();

            Solution ob = new Solution();

            System.out.println(ob.solve(X, Y, S));

            t--;
        }
    }
}
// } Driver Code Ends

// User function Template for Java

class Solution {
    public static long calAmt(int amt, String s, char c1, char c2) {
        String temp = s;
        Stack<Character> st = new Stack<>();

        long cnt = 0, ans = 0;
        int n = s.length();
        int i = 0;
        while (i < n) {
            char ch = s.charAt(i);

            if (ch == c1) {
                st.push(ch);
            } else if (ch == c2) {
                if (!st.isEmpty()) {
                    cnt++;
                    st.pop();
                }
            } else {
                ans += cnt * amt;
                cnt = 0;
                st = new Stack<>();
            }
            i++;
        }

        if (cnt != 0) {
            ans += cnt * amt;
        }
        return ans;
    }

    static long solve(int X, int Y, String S) {
        // code here

        if (S.length() == 1) {
            return 0;
        }

        long cntAmt1 = calAmt(X, S, 'p', 'r');
        long cntAmt2 = calAmt(Y, S, 'r', 'p');

        return Math.max(cntAmt1, cntAmt2);
    }
}

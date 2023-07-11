//* https://practice.geeksforgeeks.org/problems/find-nth-element-of-spiral-matrix/1
//* https://www.geeksforgeeks.org/print-kth-element-spiral-form-matrix/

class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int A[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
        
        if (n < 1 || m < 1)
            return -1;

        /*....If element is in outermost ring ....*/
        /* Element is in first row */
        if (k <= m)
            return A[0][k - 1];
    
        /* Element is in last column */
        if (k <= (m + n - 1))
            return A[(k - m)][m - 1];
    
        /* Element is in last row */
        if (k <= (m + n - 1 + m - 1))
            return A[n - 1][m - 1 - (k - (m + n - 1))];
    
        /* Element is in first column */
        if (k <= (m + n - 1 + m - 1 + n - 2))
            return A[n - 1 - (k - (m + n - 1 + m - 1))][0];
    
        /*....If element is NOT in outermost ring ....*/
        /* Recursion for sub-matrix. &A[1][1] is
        address to next inside sub matrix.*/
        return findK((int(*)[MAX])(&(A[1][1])), n - 2, m - 2, k - (2 * n + 2 * m - 4));
    }
};
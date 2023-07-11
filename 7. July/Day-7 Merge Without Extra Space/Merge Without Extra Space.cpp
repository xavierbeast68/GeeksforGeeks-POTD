//* https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1
//* https://www.youtube.com/watch?v=n7uwj04E0I4
//* https://youtu.be/ULM2BXaE8EQ
//* https://www.geeksforgeeks.org/merge-two-sorted-arrays-o1-extra-space/

class Solution{
public:
    //Function to merge the arrays.
    void merge(long long arr1[], long long arr2[], int n, int m) 
    { 
        // code here 
        int i = 0, j = 0, k = n - 1;

        // Until i less than equal to k
        // or j is less than m
        while (i <= k && j < m) {
            if (arr1[i] < arr2[j])
                i++;
            else {
                swap(arr2[j++], arr1[k--]);
            }
        }
        
        // Sort first array
        sort(arr1, arr1 + n);
    
        // Sort second array
        sort(arr2, arr2 + m);
    } 
};
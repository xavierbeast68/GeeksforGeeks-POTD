// https://practice.geeksforgeeks.org/problems/floor-in-bst/1

class Solution{

public:
    void dfs(Node* root, int x, int& ans){
        if(root == NULL){
            return;
        }
        
        if(root->data == x){
            ans = x;
            return;
        }
        
        if(root->data < x){
            ans = root->data;
            dfs(root->right, x, ans);
        }
        
        if(root->data > x){
            dfs(root->left, x, ans);
        }
    }
    int floor(Node* root, int x) {
        // Code here
        
        int ans = -1;
        dfs(root, x, ans);
        
        return ans;
    }
};
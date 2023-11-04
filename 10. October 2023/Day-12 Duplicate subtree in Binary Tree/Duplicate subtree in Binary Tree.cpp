// https://practice.geeksforgeeks.org/problems/duplicate-subtree-in-binary-tree/1
// https://discuss.geeksforgeeks.org/comment/1f423d9cdf9e09fec207c12f0c322896

/*The structure of the Binary Tree Node  is
struct Node
{
  char data;
  struct Node* left;
  struct Node* right;
};*/

class Solution {
public:
    map<string, int>mp;
    
    string solve(Node* root){
        if(!root) return "$";
        
        string s="";
        
        if(!root->right and !root->left){
            s+=to_string(root->data);
            return s;
        }
        
        s+=to_string(root->data);
        
        s+='/';
        s+=solve(root->left);
        
        s+='/';
        s+=solve(root->right);
        
        mp[s]++;
        
        return s;
    }
    
    /*This function returns true if the tree contains 
    a duplicate subtree of size 2 or more else returns false*/
    int dupSub(Node *root) {
        solve(root);
        for(auto it:mp)
        if(it.second>=2) return true;
        return false;
    }
};
#include<bits/stdc++.h>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode * tmp = root;
        while(tmp->val!=val){
            if(val>tmp->val && tmp->right!=NULL)tmp=tmp->right;
            if(val<tmp->val && tmp->left!=NULL)tmp=tmp->left;
            
            if((val<tmp->val && tmp->left==NULL) || (val>tmp->val && tmp->right==NULL))return NULL;
            if(tmp==NULL)return NULL;
        }
        return tmp;
    }
};


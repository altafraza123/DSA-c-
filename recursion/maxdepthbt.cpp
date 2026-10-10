#include <iostream>
using namespace std;
class TreeNode{
    public:
    
        int data;
        TreeNode*left;
        TreeNode* right;


        TreeNode(int val){
            data=val;
            left=NULL;
            right=NULL;
        }

    };
    class Solution{
    public:    
    int maxDepth(TreeNode* root){
        if(root==NULL ) return 0;
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);

        return 1 + max(left,right);
    }

};
int main(){
    
    
    TreeNode* root= new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->left->left= new TreeNode(5);
    
    Solution obj;
    cout<<obj.maxDepth(root);
}
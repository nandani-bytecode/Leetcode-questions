/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// class Solution {
// public:
//     TreeNode* deleteNode(TreeNode* root, int key) {
//         if(root->val == key){
//             root->left->left = root->left;
//             return root->left;
//         }
//         if(root->val > key){
//             root->left = deleteNode(root->left, key);
//         } 
//         else{
//             root->right = deleteNode(root->right,key);
//         }
//         return root;
//     }
// };


class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) return NULL;

        if(key < root->val) {
            root->left = deleteNode(root->left, key);
        } else if(key > root->val) {
            root->right = deleteNode(root->right, key);
        } else {
            
            if(root->left == NULL) {
                return root->right;
            } else if(root->right == NULL) {
                return root->left; 
            } else {
                TreeNode* successor = minValueNode(root->right);
                root->val = successor->val;
                root->right = deleteNode(root->right, successor->val);
            }
        }
        return root;
    }

    TreeNode* minValueNode(TreeNode* node) {
        TreeNode* current = node;
        while(current->left != NULL) {
            current = current->left;
        }
        return current;
    }
};

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
//     int kthSmallest(TreeNode* root, int k) {//used inorder traversal
//         int count = 0;
//         stack<TreeNode*> st;
//         TreeNode* node = root;
//         vector<int> inorder;
//         while(true){
//             if(node != NULL){
//                 st.push(node);
//                 node = node->left;
//             }
//             else{
//                 node = st.top();
//                 st.pop();
//                 inorder.push_back(node->val);
//                 count++;
//                 if(count == k) break;
//                 node = node->right;
//             }
//         }
//         return node->val;
//     }
// };


// class Solution {
// public:
//     void inorderTraversal(TreeNode* node, int k ,stack<int>& st , int count){
        
//         if(node == NULL) return;
        
//         inorderTraversal(node->left , k , st, count);
        
//         st.push(node->val);
//         count++;
//         if(count == k) return;
        
//         inorderTraversal(node->right, k , st, count);
 
//     }
//     int kthSmallest(TreeNode* root, int k) {
//         stack<int> st;
//         int count = 0;
//         inorderTraversal(root , k , st, count);
//         return st.top();
//     }
// };

class Solution {
public:
    void inorderTraversal(TreeNode* node, int k, int &count, int &ans) {
        if (node == NULL) return;

        inorderTraversal(node->left, k, count, ans);

        count++;
        if (count == k) {
            ans = node->val;
            return;
        }

        inorderTraversal(node->right, k, count, ans);
    }

    int kthSmallest(TreeNode* root, int k) {
        int count = 0;
        int ans = -1;
        inorderTraversal(root, k, count, ans);
        return ans;
    }
};

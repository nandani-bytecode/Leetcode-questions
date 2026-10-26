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
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {//used inorder traversal
        int count = 0;
        stack<TreeNode*> st;
        TreeNode* node = root;
        vector<int> inorder;
        while(true){
            if(node != NULL){
                st.push(node);
                node = node->left;
            }
            else{
                node = st.top();
                st.pop();
                inorder.push_back(node->val);
                count++;
                if(count == k) break;
                node = node->right;
            }
        }
        return node->val;
    }
};
class Solution {
public:
   int sumOfLeftLeaves(TreeNode* root) { 
     // Check if the left child of the root exists:
           //1.If the left child exists and it is a leaf node (i.e., it has no children), add its value to ans.
           //2.If the left child exists and it is not a leaf node, recursively call the sumOfLeftLeaves function for the left child.
      //Recursively call the sumOfLeftLeaves function for the right child of the root.
        if (!root)
            return 0;
        int ans = 0; 
        if (root->left) {
            if (!root->left->left && !root->left->right)  
                ans += root->left->val;
            else
                ans += sumOfLeftLeaves(root->left);
        }
        
        ans += sumOfLeftLeaves(root->right);
        return ans;
   }
};
class Solution { //BFS approach quite time and space consuming
public:
   int sumOfLeftLeaves(TreeNode* root) {
        if (!root) {
            return 0;
        }
        
        queue<pair<TreeNode*, bool>> q;  // (node, is_left)
        q.push({root, false});
        int totalSum = 0;
        
        while (!q.empty()) {
            auto [node, isLeft] = q.front();
            q.pop();
            
            if (isLeft && !node->left && !node->right) {
                totalSum += node->val;
            }
            
            if (node->left) {
                q.push({node->left, true});
            }
            if (node->right) {
                q.push({node->right, false});
            }
        }
        
        return totalSum;
    }
};
class Solution { //dfs approach
public:
    int sumOfLeftLeaves(TreeNode* root) {
       return dfs(root, false);
    }
    
    int dfs(TreeNode* node, bool isLeft) {
        if (!node) {
            return 0;
        }
        if (!node->left && !node->right) { // Leaf node
            return isLeft ? node->val : 0;
        }
        int leftSum = dfs(node->left, true);    // Traverse left child
        int rightSum = dfs(node->right, false); // Traverse right child
        return leftSum + rightSum;
    }
};

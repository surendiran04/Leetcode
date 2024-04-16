class Solution {
public:
    TreeNode* add(TreeNode* root, int val, int depth, int curr) {
        if (!root)
            return nullptr;

        if (curr == depth - 1) {
            TreeNode* lTemp = root->left;
            TreeNode* rTemp = root->right;

            root->left = new TreeNode(val);
            root->right = new TreeNode(val);
            root->left->left = lTemp;
            root->right->right = rTemp;

            return root;
        }

        root->left = add(root->left, val, depth, curr + 1);
        root->right = add(root->right, val, depth, curr + 1);

        return root;
    }

    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if (depth == 1) {
            TreeNode* newRoot = new TreeNode(val);
            newRoot->left = root;
            return newRoot;
        }

        return add(root, val, depth, 1);
    }
};
class Solution { //recursive dfs approach beats 90%
public:
    void dfs(TreeNode* root, int val, int depth, int level){
        if (!root) return;
        if (level<depth-1){
            dfs(root->left, val, depth, level+1);
            dfs(root->right, val, depth, level+1);
        }
        else{
            TreeNode* ptr=root->left;
            root->left=new TreeNode(val);
            root->left->left=ptr;

            ptr=root->right;
            root->right=new TreeNode(val);
            root->right->right=ptr;
        }

    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if (depth==1){
            TreeNode* ptr=new TreeNode(val);
            ptr->left=root;
            return ptr;
        }
        dfs(root, val, depth, 1);
        return root;
    }
};

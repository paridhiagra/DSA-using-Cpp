class Solution {
public:
    int maxSum = 0;

    struct Info {
        bool isBST;
        int sum;
        int minVal;
        int maxVal;
    };

    Info dfs(TreeNode* root) {
        if (!root)
            return {true, 0, INT_MAX, INT_MIN};

        auto left = dfs(root->left);
        auto right = dfs(root->right);

        if (left.isBST && right.isBST && root->val > left.maxVal && root->val < right.minVal) {
            int currSum = root->val + left.sum + right.sum;
            maxSum = max(maxSum, currSum);
            return {true, currSum, min(root->val, left.minVal), max(root->val, right.maxVal)};
        }

        return {false, 0, 0, 0};
    }

    int maxSumBST(TreeNode* root) {
        dfs(root);
        return maxSum;
    }
};

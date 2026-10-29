
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);

        int ans = root->val;

        while (!q.empty()) {
            int size = q.size();

            for (int i = 0; i < size; i++) {
                TreeNode* curr = q.front();
                q.pop();

                if (i == 0) {
                    ans = curr->val;
                }

                if (curr->left != nullptr) {
                    q.push(curr->left);
                }

                if (curr->right != nullptr) {
                    q.push(curr->right);
                }
            }
        }

        return ans;
    }
};

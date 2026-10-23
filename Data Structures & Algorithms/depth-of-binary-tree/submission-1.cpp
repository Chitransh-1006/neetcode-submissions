class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)return 0;
        queue<TreeNode*>q;
        q.push(root);
        int d = 0;
        while(!q.empty()){
            int n=q.size();
            d++;
            while(n--){
                TreeNode*curr = q.front();
                q.pop();
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
            }
        }
        return d;
    }
};

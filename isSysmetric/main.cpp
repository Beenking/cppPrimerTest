#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isMirrorTree(TreeNode *p, TreeNode *q) {
        cout << "<<<<   ";
        if(p == NULL)
            return q == NULL;
        if(q == NULL)
            return false;
        if(p->val != q->val){
            return false;
        }
        return isMirrorTree(p->left, q->right) && isMirrorTree(p->right, q->left);
    }

    bool isSymmetric(TreeNode *root) {
        if(root == NULL)
            return true;
        return isMirrorTree(root->left, root->right);
    }
};

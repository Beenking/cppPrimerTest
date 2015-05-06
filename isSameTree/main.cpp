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
    bool isSameTree(TreeNode *p, TreeNode *q) {
        cout << "<<<<   ";
        if(p == NULL)
            return q == NULL;
        if(q == NULL)
            return false;
        if(p->val != q->val){
            return false;
        }
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        // return (p->val != q->val) ? false : (isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};

int main(){
    TreeNode *root1, node1(1), node2(2), node3(3);
    root1 = &node1, node1.left = &node2, node1.right = &node3;
    TreeNode *root2 = root1;

    Solution s;
    cout << s.isSameTree(root1, root2);
}

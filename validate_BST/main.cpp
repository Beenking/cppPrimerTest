#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<int> vi;
    void middleTraversal(TreeNode *root){
        cout << " <<< ";
        if(root != NULL){
            middleTraversal(root->left);
            vi.push_back(root->val);
            middleTraversal(root->right);
        }
    }
    bool isValidBST(TreeNode *root) {
        middleTraversal(root);
        return is_sorted(vi.begin(), vi.end());
    }
};

int main(){
    int i = 7;
    char* c[i];

    TreeNode *root, node1(1);
    root = &node1;
    Solution s;
    auto b = s.isValidBST(root);

    return 0;
}

#include <vector>
#include <stack>
#include <iostream>
using namespace std;

 class TreeNode {
 public:
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {

public:
    vector<int> inorderTraversal(TreeNode *root) {
        static vector<int> result = {};
        if(root!=NULL){
        inorderTraversal(root->left);
        result.push_back(root->val);
        inorderTraversal(root->right);
        }
        return result;
    }


    vector<int>  inorderTraversal2(TreeNode* root)
    {
        vector<int> result;
        stack<TreeNode*> s;
        while ((NULL != root) || !s.empty())
        {
            if (NULL != root)
            {
                s.push(root);
                root = root->left;
            }
            else
            {
                root = s.top();
                result.push_back(root->val);
                s.pop();
                root = root->right;
            }
        }
        return result;
    }

};

int main(){
    TreeNode node1(1),node2(2);
    node1.left = &node2;

    TreeNode *root = &node1;
    Solution sol;
    vector<int> result = sol.inorderTraversal2(root);
    for(auto i: result){
        cout << i << endl;
    }
}

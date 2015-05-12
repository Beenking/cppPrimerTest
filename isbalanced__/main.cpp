#include <iostream>
#include <cmath>
using namespace std;

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};

class Solution {
public:
    bool IsBalanced_Solution(TreeNode* pRoot) {
        if(pRoot == NULL)
            return true;
        return IsBalanced_Solution(pRoot->right)&&IsBalanced_Solution(pRoot->left)&&abs(height(pRoot->right)-height(pRoot->left))<=1;
    }

private:
    int height(TreeNode* pRoot){
        if(pRoot == NULL)
            return 0;
        else
            return std::max(height(pRoot->left), height(pRoot->right)) + 1;
    }

};

int main(){
    return 0;
}

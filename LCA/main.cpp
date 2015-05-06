#include <iostream>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int v):val(v),left(nullptr),right(nullptr){}
};


Node* getLCA(Node* root, Node* node1, Node* node2){
    if(root == nullptr){
        return nullptr;
    }
    if(root == node1 || root == node2){
        return root;
    }
    Node* left = getLCA(root->left, node1, node2);
    Node* right = getLCA(root->right, node1, node2);

    if(left != nullptr && right != nullptr){
        return root;
    }else if(left != nullptr){
        return left;
    }else if(right != nullptr){
        return right;
    }else{
        return nullptr;
    }
}


int main(){
    Node node1(1), node2(2), node3(3), node4(4), node5(5),
            node6(6), node7(7), node8(8);
    Node* root = &node1;
    node1.left = &node2; node1.right = &node3;
    node2.left = &node4; node2.right = &node5;
    node3.left = &node6; node3.right = &node7;
    node4.left = &node8;

    Node* result = getLCA(root, &node5, &node8);
    cout << result->val << endl;
    return 0;
}



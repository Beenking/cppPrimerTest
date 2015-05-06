#include <iostream>
#include <stack>

using namespace std;

struct Node{
    int self;
    Node* right;
    Node* left;
};

const int TREE_SIZE = 9;
std::stack<Node*> unvisited;
Node nodes[TREE_SIZE];
Node* current;

int main(){
    //初始化树
    for(int i=0; i<TREE_SIZE; i++)
    {
        nodes[i].self = i;
        int child = i*2+1;
        if(child<TREE_SIZE) // Left child
            nodes[i].left = &nodes[child];
        else
            nodes[i].left = NULL;
        child++;
        if(child<TREE_SIZE) // Right child
            nodes[i].right = &nodes[child];
        else
            nodes[i].right = NULL;
    }

    unvisited.push(&nodes[0]); //先把0放入UNVISITED stack

    // 只有UNVISITED不空
    while(!unvisited.empty())
    {
        current=(unvisited.top()); //当前应该访问的
        unvisited.pop();
        if(current->right!=NULL)
            unvisited.push(current->right); // 把右边压入 因为右边的访问次序是在左边之后
        if(current->left!=NULL)
            unvisited.push(current->left);
        cout<<current->self<<endl;
    }
}

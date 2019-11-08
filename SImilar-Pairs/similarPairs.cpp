#include <iostream>
#include <cstddef>

using namespace std;

struct Tree {
    int data;
    Tree *left;
    Tree *right;
};

Tree* newTreeNode(int value) {
    Tree *node = new Tree;
    node->data = value;
    node->left = NULL;
    node->right = NULL;

    return node;   
}

Tree* insertNode(int )

int main(void) {
    
    int n, a, b, c, d, ;

    cin >> n;
    cin >> a >> b;
    cin >> c >> d;
    Tree *root = newTreeNode(a);
    root->left = newTreeNode(b);
    root->right = newTreeNode(d);
    
    for(int i = 0; i < n - 2; i++) {
        
    }

    return 0;
}
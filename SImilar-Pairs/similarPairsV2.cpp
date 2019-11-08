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

void insertNode(Tree* &node, int father, int value) {

	if(node->data == father){
		if(node->left == NULL)
			node->left = newTreeNode(value);
		else
			node->right = newTreeNode(value);
	}
	else {
		insertNode(searchNode(node, father), father, value);
	}
}

Tree* searchNode(Tree* &node, int father) {

}

int main(void) {
    
    int n, a, b;
    Tree* root = NULL;

    cin >> n;
    cin >> a >> b;
    root = newTreeNode(a);
    insertNode(root, a, b);
    for(int i = 0; i < n - 1; i++) {
    	cin >> a >> b;
    	insertNode(root, a, b);
    }

    return 0;
}
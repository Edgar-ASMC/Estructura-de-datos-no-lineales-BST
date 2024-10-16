#include <iostream>

#include "BinaryTree.h"

int main()
{
    std::cout << "Hello, World!" << std::endl;

    BinaryTree tree;

    tree.root = tree.insert(tree.root, 50);
    tree.root = tree.insert(tree.root, 30);
    tree.root = tree.insert(tree.root, 70);

    int valueToSearch = 30;
    Node* result = tree.search(tree)
    return 0;
}

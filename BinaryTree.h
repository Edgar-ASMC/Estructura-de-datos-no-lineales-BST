//
// Created by Edgar on 08/10/2024.
//

#ifndef BINARYTREE_H
#define BINARYTREE_H
using namespace std;

struct Node {
    int data;
    Node* rigth;
    Node* left;

    Node(int value);
};

class BinaryTree {
public:
    Node* root;

    BinaryTree();
    Node* insert(Node* node, int value);
    void preorder(Node* node);
};



#endif //BINARYTREE_H

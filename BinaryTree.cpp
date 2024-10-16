//
// Created by Edgar on 08/10/2024.
//

#include "BinaryTree.h"
#include <iostream>

using namespace std;

Node::Node(int value) {
    data = value;
    left = nullptr;
    rigth = nullptr;
}

BinaryTree::BinaryTree() {
    root = nullptr;
}


Node* BinaryTree::insert(Node *node, int value) {
    if(node == nullptr) {
        return new Node(value);
    }
    if(value < node->data) {
        node->left = insert(node->left, value);
    } else {
        node->rigth = insert(node->rigth, value);
    }
    return node;
}

Node *BinaryTree::search(Node *node, int value) {
    if(node == nullptr || node-> data == value)
}
#include "BTNode.hpp"
#include "BST.hpp"
#include "BST.cpp"
#include <iostream>

int main()
{
    BST<int> root;
    root.insert(1);
    root.insert_recursive(2);
    root.insert_recursive(3);
    root.insert_recursive(4);

    root.inorder();

    return 0;
}
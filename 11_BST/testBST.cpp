#include "BTNode.hpp"
#include "BST.hpp"
#include "BST.cpp"
#include <iostream>

int main()
{
    BST<int> tree;

    tree.insert(2);
    tree.insert(1);
    tree.insert(3);
    tree.insert(4);
    
    tree.insert(6);

    tree.print();

    // TODO check with search as an argument
    BTNode<int>* t = tree.search(2);
    tree.rotateRight(t);
    tree.print();

    // tree.inorder();  
    // tree.preorder();  
    // tree.postorder(); 

    // std::cout << "Is Full? " << (tree.isFullTree() ? "Yes" : "No") << std::endl;

    // BTNode<int>* parent = tree.search_parent(4);
    // if (parent) 
    // {
    //     std::cout << "Parent of 4 is: " << parent->data << std::endl;
    // }

    // tree.print();
    
    // tree.deleteNode(2);
    
    // tree.print();
    
    // tree.deleteNode(3);
    
    // tree.print();

    return 0;
}
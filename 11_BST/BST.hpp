#ifndef BST_HPP
#define BST_HPP

#include "BTNode.hpp"

template <typename T>
class BST
{
    private:
        BTNode<T>* root;
        
        void inorder(BTNode<T>* node) const;

    public:
        BST();

        bool empty() const;
        void insert(const T& val);

        // Traversals of the tree
        void inorder() const;

};

#endif
#ifndef BST_HPP
#define BST_HPP

#include "BTNode.hpp"

#include <string>

template <typename T>
class BST
{
    private:
        BTNode<T>* root;
        
        void inorder(BTNode<T>* node) const;
        BTNode<T>* insert_recursive(BTNode<T>* node, const T& val);
        
        void preorder(BTNode<T>* node) const;
        void postorder(BTNode<T>* node) const;
        
        bool isFullTree(BTNode<T>* node) const;

        void deleteLeaf(BTNode<T>* child, BTNode<T>* parent);
        void deleteNodeWithOneChild(BTNode<T>* child, BTNode<T>* parent);
        
        void deleteNodeWithTwoChildren(BTNode<T>* node);
        
        void print(const std::string& prefix, BTNode<T>* node, bool isRight) const;

    public:
        BST();

        bool empty() const;
        void insert(const T& val);
        void insert_recursive(const T& val);

        // Traversals of the tree
        void inorder() const;
        void preorder() const;
        void postorder() const;

        bool isFullTree() const;

        BTNode<T>* search(const T& val) const;
        BTNode<T>* search_parent(const T& val) const;

        BTNode<T>* getMinNode() const;
        BTNode<T>* getMinNode(BTNode<T>* node) const;

        void deleteNode(const T& val);
        void print() const;

        int getHeight(const BTNode<T>* node) const;
        int getBalance(const BTNode<T>* node) const;

        void rotateRight(BTNode<T>* & node);
        void rotateLeft(BTNode<T>* & node);



};

#endif
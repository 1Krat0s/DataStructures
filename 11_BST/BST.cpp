#include "BST.hpp"
#include <iostream>

template <typename T>
BST<T>::BST()
{
    root = nullptr;
}

template <typename T>
bool BST<T>::empty() const
{
    return (root == nullptr);
}

template <typename T>
void BST<T>::insert(const T& val)
{
    if (empty())
    {
        root = new BTNode<T>(val);
        return;
    }
    
    // Iterative approach
    BTNode<T>* cur = root;
    BTNode<T>* prev = root;
    while (cur)
    {
        prev = cur;
        if (cur->data > val)
        {
            cur = cur->left;
        }
        else
        {
            cur = cur->right;
        }
    }
    if (prev->data > val)
    {
        prev->left = new BTNode<T>(val);
    }
    else
    {
        prev->right = new BTNode<T>(val);
    }
}

template <typename T>
void BST<T>::inorder() const
{
    std::cout << "Inorder: [ ";
    inorder(root);
    std::cout << "]\n";
}

template <typename T>
void BST<T>::inorder(BTNode<T>* node) const
{
    if (!node)
    {
        return;
    }
    
    inorder(node->left);
    std::cout << node->data << ' ';
    inorder(node->right);
    
}

template <typename T>
void BST<T>::insert_recursive(const T& val)
{
    root = insert_recursive(root, val);
}

template <typename T>
BTNode<T>* BST<T>::insert_recursive(BTNode<T>* node, const T& val)
{
    if (!node)
    {
        return new BTNode<T>(val);
    }

    if (val > node->data)
    {
        node->right = insert_recursive(node->right, val);
        return node;
    }
    else
    {
        node->left = insert_recursive(node->left, val);
        return node;
    }
}

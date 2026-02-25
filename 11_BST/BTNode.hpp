#ifndef BTNODE_HPP
#define BTNODE_HPP

template <typename T>
class BTNode
{
    public:
        T data;
        BTNode<T>* left;
        BTNode<T>* right;

        BTNode(const T& val = T(), BTNode<T>* l = nullptr, BTNode<T>* r = nullptr) : data(val), left(l), right(r) {}; 
};

#endif
#ifndef CLLIST_HPP
#define CLLIST_HPP

#include "DLLNode.hpp"

template <typename T>
class CLList 
{
    private:
    DLLNode<T>* tail;
    int list_size;

    public:
        CLList();                          
        bool empty() const;                
        void push_front(const T& val);     
        void push_back(const T& val);      
        void print() const;                  
        void pop_back();                   
        void pop_front();     
                     
};


#endif
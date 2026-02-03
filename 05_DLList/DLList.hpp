#ifndef DLLIST_HPP
#define DLLIST_HPP

#include "DLLNode.hpp"

template <typename T>
class DLList
{
    private:
        DLLNode<T>* head; // Pointer to the first node
        DLLNode<T>* tail; // Pointer to the last node
        unsigned list_size;

    public:
        // No-arg constuctor
        DLList();

        // Copy constructor (TODO)
        // DLList(const DLList<T>& other);

        // Assignment operator (TODO)
        // DLList<T>& operator=(const DLList<T>& other);

        // The destuctor
        // ~DLList();


        unsigned size() const; // Returns the size of the list
        bool empty() const; // Returns true if list is empty
        void push_front(const T& val); // Inserts the new node at the beginning
        void print() const; // Prints the list
        // void push_back(const T& val); // Inserts the new node at the end

        // void pop_front(); // Remove the first element (node)
        // void clear(); // Clears the whole list
        
        // // TODO
        void pop_back(); // Remove the last element (node)


};


#endif
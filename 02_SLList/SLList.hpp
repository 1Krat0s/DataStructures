#ifndef SLLIST_HPP
#define SLLIST_HPP

#include "SLLNode.hpp"

class SLList
{
    private:
        SLLNode* head;
        unsigned list_size;

    public:
        // No-arg constuctor
        SLList();

        unsigned size() const; // Returns the size of the list
        bool empty() const; // Returns true if list is empty
        void push_front(int val); // Inserts the new node at the beginning
        void print() const; // Prints the list

        // TODO
        void push_back(int val); // Inserts the new node at the end


};


#endif
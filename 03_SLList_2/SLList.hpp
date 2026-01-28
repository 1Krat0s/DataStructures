#ifndef SLLIST_HPP
#define SLLIST_HPP

#include "SLLNode.hpp"

class SLList
{
    private:
        SLLNode* head; // Pointer to the first node
        SLLNode* tail; // Pointer to the last node
        unsigned list_size;

    public:
        // No-arg constuctor
        SLList();

        // Copy constructor (TODO)
        SLList(const SLList& other);

        // Assignment operator (TODO)
        SLList& operator=(const SLList& other);

        // The destuctor
        ~SLList();


        unsigned size() const; // Returns the size of the list
        bool empty() const; // Returns true if list is empty
        void push_front(int val); // Inserts the new node at the beginning
        void print() const; // Prints the list
        void push_back(int val); // Inserts the new node at the end

        void pop_front(); // Remove the first element (node)
        void clear(); // Clears the whole list
        
        // TODO
        void pop_back(); // Remove the last element (node)


};


#endif
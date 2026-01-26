#include "SLList.hpp"
#include <iostream>

SLList::SLList()
{
    head = nullptr;
    list_size = 0;
}

unsigned SLList::size() const
{
    return list_size;
}

bool SLList::empty() const
{
    return (size() == 0);
}

void SLList::push_front(int val)
{
    // Add new node at the beginning
    // SLLNode* new_node = new SLLNode(val);
    // new_node -> next = head;
    // head = new_node;

    // Alternative way
    head = new SLLNode(val, head);

    // Increase the list size
    list_size++;
}

void SLList::print() const
{
    std::cout << "{ ";
    SLLNode* cur = head;
    
    while (cur)
    {
        std::cout << cur -> data;
        if (cur -> next)
        {
            std::cout << " -> ";
        }

        cur = cur -> next; // Goes to the next node
    }

    std::cout << " }" << std::endl;
}

void SLList::push_back(int val)
{
    if (empty())
    {
        head = new SLLNode(val);
    }
    else
    {
        SLLNode* cur = head;
        
        while (cur -> next)
        {
            cur = cur -> next;
        }
        cur -> next = new SLLNode(val);
    }

    list_size++;
}
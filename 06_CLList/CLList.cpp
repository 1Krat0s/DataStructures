#include "CLList.hpp"

#include <iostream>

template <typename T>
CLList<T>::CLList()
{
    tail = nullptr;
    list_size = 0;

}

template <typename T>
void CLList<T>::push_front(const T& val)
{
    if (empty())
    {
        tail = new DLLNode<T>(val);
        tail -> prev = tail;
        tail -> next = tail;
    }
    else
    {
        tail -> next = new DLLNode<T>(val, tail, tail -> next);
        tail -> next -> next -> prev = tail -> next;
    }
    
    list_size++;
}

template <typename T>
void CLList<T>::push_back(const T& val)
{
    if (empty())
    {
        tail = new DLLNode<T>(val);
        tail -> prev = tail;
        tail -> next = tail;
    }
    else
    {
        tail -> next = new DLLNode<T>(val, tail, tail -> next);
        tail -> next -> next -> prev = tail -> next;
        tail = tail -> next;
    }
    
    list_size++;
}

template <typename T>
void CLList<T>::print() const
{
    if (empty())
    {
        return;

    }
    
    DLLNode<T>* cur = tail -> next;
    do
    {
        std::cout << cur -> data;
        if (cur -> next != tail -> next) // not the last node
        {
            std::cout << " -> ";
        }

        cur = cur -> next;
    } while (cur != tail -> next);
}

template <typename T>
void CLList<T>::pop_front() 
{
    if (empty()) 
    {
        return;
    }

    DLLNode<T>* head = tail->next;
    if (list_size == 1) 
    {
        delete head;
        tail = nullptr;
    } 
    else 
    {
        tail->next = head->next;
        head->next->prev = tail;
        delete head;
    }
    list_size--;
}

template <typename T>
void CLList<T>::pop_back() 
{
    if (empty()) 
    {
    return;
    }

    if (list_size == 1) 
    {
        delete tail;
        tail = nullptr;
    } 
    else 
    {
        DLLNode<T>* old_tail = tail;
        tail = tail->prev;     
        tail->next = old_tail->next; 
        old_tail->next->prev = tail; 
        delete old_tail;
    }
    list_size--;
}

template <typename T>
bool CLList<T>::empty() const 
{
    return (list_size == 0);
}

template <typename T>
void CLList<T>::print_backwards() const 
{
    if (empty()) 
    {
        return;
    }
    DLLNode<T>* cur = tail;

    do 
    {
        std::cout << cur->data;
        if (cur != tail->next) 
        { // not the last node
            std::cout << " <- ";
        }
        cur = cur->prev;
    } while (cur != tail);
    
    std::cout << std::endl;
}
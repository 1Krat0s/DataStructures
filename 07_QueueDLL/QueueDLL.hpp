#ifndef QueueDLL_HPP
#define QueueDLL_HPP

#include "DLList.hpp"

template <typename T>
class QueueDLL
{
    private:
       DLList<T> data;

    public:

        int size() const; // TODO
        bool empty() const;
        void print() const;
        void clear(); // TODO

        void enqueue(const T& val);
        T dequeue();// Throws std::out_of_range exception

        const T& front() const; // TODO - Return the first element in the queue
};

#endif
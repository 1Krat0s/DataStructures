#ifndef QUEUEARRAY_HPP
#define QUEUEARRAY_HPP

template <typename T, int size = 100>
class QueueArray
{
    private:
        T data[size]; // An array of 100 elements
        int queue_size;
        int front_idx;
        int back_idx;

    public:
        QueueArray();

        int length() const; // TODO
        bool empty() const;
        bool full() const;
        void print() const;
        void clear(); // TODO

        void enqueue(const T& val);
        const T& dequeue(); // Throws std::out_of_range exception

        const T& front(); // TODO - Return the first element in the queue
};

#endif
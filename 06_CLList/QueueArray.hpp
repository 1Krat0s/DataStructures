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
        Queue();

        int size() const;
        bool empty() const;
        bool full() const;

        void enqueue(const T& val);
        const T& dequeue();
};

#endif
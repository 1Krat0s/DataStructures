#ifndef STACK_HPP
#define STACK_HPP


namespace StackArray
{
    template <typename T, int size = 10>
    class Stack
    {
        private:
            T data[size]; // Array of stack elements
            int top_idx; // Index of the top of the stack

        public:
            Stack();

            void push(const T& val);
            bool empty() const;
            bool full() const;
            void print() const;
            T pop();
            const T& top() const;

    };
}

namespace StackList
{
    template <typename T>
    class Stack
    {
        private:
            class Node
            {
                public:
                    T data;
                    Node<T>* next;
                    Node(const T& val = T()) : data(val), next(nullptr) {}

            };
            Node<T>* top_node;

        public:
            Stack();
            ~Stack();

            void push(const T& val);
            bool empty() const;
            void print() const;
            T pop();
            const T& top() const;

    };
}



#endif
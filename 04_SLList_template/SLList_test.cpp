#include "SLList.hpp"
#include "SLList.cpp"
#include <iostream>

int main()
{
    SLList<std::string> list;
    list.push_front("abc");
    list.push_front("def");
    list.push_front("123");
    list.push_front("hello");

    // list.push_back(9);
    // list.push_back(8);
    // list.push_back(7);
    // list.push_back(6);
    
    // list.print();
    
    // list.pop_front();
    // list.pop_front();

    list.print();

    return 0;
}
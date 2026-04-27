#include "Sorting.hpp"
#include <vector>
#include <string>

template <typename T>
void print(const std::vector<T>& v) 
{
    for (int i = 0; i < v.size(); i++) 
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}


int main() 
{
    std::vector<std::string> strings = {"xyz", "abc", "the", "dog", "cat"};
    std::vector<int> ints = {43, 2, -2, 94, 934};
    
    Sorting::selectionSort(strings);
    Sorting::selectionSort(ints);
    
    print(strings);
    print(ints);
    
    std::vector<std::string> strings2 = {"xyz", "abc", "the", "dog", "cat"};
    std::vector<int> ints2 = {43, 2, -2, 94, 934};
    
    Sorting::mergeSort(strings2);
    Sorting::mergeSort(ints2);

    print(strings2);
    print(ints2);
    
    std::vector<std::string> strings3 = {"xyz", "abc", "re", "the", "start", "hash", "graph", "dog", "cat"};
    
    Sorting::mergeSort(strings3);
    
    std::cout << strings3[5] + strings3[4] << std::endl;

    return 0;
}
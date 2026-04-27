#ifndef SORTING_HPP
#define SORTING_HPP
#include <vector>


class Sorting 
{
    private:
        template <typename T>
        static void mergeSort(std::vector<T>& v, int left, int right);
        template <typename T>
        static void merge(std::vector<T>& v, int left, int mid, int right);
        
        template <typename T>
        static int partition(std::vector<T>& v, int left, int right);

        template <typename T>
        static void quickSort(std::vector<T>& v, int left, int right);
        
    public:
        template <typename T>
        static void selectionSort(std::vector<T>& v);

        template <typename T>
        static void mergeSort(std::vector<T>& v);
        
        template <typename T>
        static void quickSort(std::vector<T>& v);
    };


#include "Sorting.tpp"

#endif
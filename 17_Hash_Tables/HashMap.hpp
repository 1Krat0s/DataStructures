#ifndef HASHMAP_HPP
#define HASHMAP_HPP

#include "HashNode.hpp"
#include <vector>

template <typename K, typename V>
class HashMap
{
    private:
        std::vector<HashNode<K, V>*> data;
        int n; // The number of records in the table
        
        HashNode<K, V>* deleted;

        int hash(const K& key) const;
        
        // TODO
        int searchIndex(const K& key) const;

    public:
        HashMap(int size = 31);
        ~HashMap();

        bool empty() const;
        bool full() const;

        void insert(const K& key, const V& value);
        void print() const;

        //TODO
        const V& search(const K& key) const;

        void remove(const K& key);

};

#include "HashMap.tpp"
#endif
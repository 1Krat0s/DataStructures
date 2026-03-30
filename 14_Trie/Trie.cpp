#include "Trie.hpp"
#include <string>
#include <cctype>
#include <vector>
#include <iostream>

Trie::Trie()
{
    root = new TrieNode();
}

Trie::Trie(const std::vector<std::string>& v)
{
    root = new TrieNode();

    for (std::vector<std::string>::size_type i = 0; i < v.size(); ++i)
    {
        insert(v[i]);
    }
}

void Trie::insert(const std::string& s)
{
    TrieNode* cur = root;
    
    for (char c : s)
    {
        if (!isalpha(c))
        {
            continue;
        }

        int i = tolower(c) - 'a';

        if (!cur->children[i])
        {
            cur->children[i] = new TrieNode();
        }

        cur = cur->children[i];
    }

    cur->end_of_word = true;
}

bool Trie::search(const std::string& s) const
{
    TrieNode* cur = root;

    for (char c : s)
    {
        int i = tolower(c) - 'a';

        if (!cur->children[i])
        {
            return false;
        }

        cur = cur->children[i];
    }
    
    return cur->end_of_word;
}

void Trie::print() const
{
    std::string word;

    print(root, word);
}

void Trie::print(const TrieNode* node, std::string& word) const
{
    if (!node)
    {
        return;
    }

    if (node->end_of_word)
    {
        std::cout << word << std::endl;
    }

    for (int i = 0; i < 26; ++i)
    {
        if (node->children[i] != nullptr)
        {
            char ch = static_cast<char>('a' + i);
            
            word.push_back(ch);

            print(node->children[i], word);

            word.pop_back();
        }
    }

}
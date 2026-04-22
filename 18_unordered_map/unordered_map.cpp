#include <iostream>
#include <unordered_map> // Hash Table
#include <vector>
#include <string>

class HashExamples
{
    private:
    
    
    public:
    template <typename T>
    static void countFrequency(const std::vector<T>& v)
    {
        std::unordered_map<T, int> freq;

            for (const T& i : v)
            {
                freq[i]++;
            }
            
            for (const auto& f : freq)
            {
                std::cout << f.first << " : " << f.second << std::endl;
            }
    }

    template <typename T>
    static bool hasDuplicates(const std::vector<T>& v)
    {
        std::unordered_map<T, bool> seen;
        for (const T& item : v) 
        {
            if (seen.find(item) != seen.end()) 
            {
                return true;
            }
            seen[item] = true;
        }
        return false;
    }

    static char firstNonRepeatingChar(const std::string& s)
    {
        std::unordered_map<char, int> counts;
        for (char c : s) 
        { 
            counts[c]++; 
        }
        
        for (char c : s) 
        {
            if (counts[c] == 1) 
            {
                return c;
            }
        }

        return '\0';
    }

    static void groupStrings(const std::vector<std::string>& strings)
    {
        /*
            <first_letter : strings
        */
       std::unordered_map<char, std::vector<std::string>> groups;
        
        for (const std::string& str : strings) 
        {
            if (!str.empty()) 
            {
                groups[str[0]].push_back(str);
            }
        }

        for (const auto& pair : groups) 
        {
            std::cout << pair.first << ": ";

            for (const auto& s : pair.second) 
            {
                std::cout << s << " ";
            }

            std::cout << std::endl;
        }
    
    }
};

int main()
{
    std::unordered_map<std::string, int> grades;

    // Insert
    grades["Michael"] = 90;
    grades["Anna"] = 95;
    grades["John"] = 76;

    // Iterate through the table
    for (const auto& grade : grades)
    {
        std::cout << grade.first << " : " << grade.second << std::endl;
    }
    
    // Search (find method)
    auto it = grades.find("John");

    if (it == grades.end())
    {
        std::cout << "Not found\n";
    }
    else
    {
        std::cout << "Found:\n";
        std::cout << it->first << " : " << it->second << std::endl;
    }

    std::cout << "Count Frequency...\n";
    std::vector<int> v = {1, 2, 3, 4, 1, 2, 2, 2, 5, 5, 12};
    HashExamples::countFrequency(v);
    
    std::cout << "Check Duplicates...\n";
    std::vector<std::string> v2 = {"hello", "apple", "banana", "hey", "ban", "app"};
    std::cout << (HashExamples::hasDuplicates(v2) ? "Yes" : "No") << std::endl;

    std::cout << "\n--- Group Strings by First Letter ---\n";
    HashExamples::groupStrings(v2);
    

    return 0;
}
#ifndef HASH_TABLE_
#define HASH_TABLE_
#include <iostream>
#include "Node.hpp"
using namespace std;

class HashTable
{
private:
    static const int tableSize = 32;
    Node* items[tableSize];
    int totalSize;
public:
    bool inputValidation(string key, string value);
    int hash(string key);
    int countEntryAtIndex(int i);
    HashTable();
    bool isEmpty();
    int getSize();
    bool addValue(string key, string value);
    string getValue(string key);
    bool deleteValue(string key);
    void clearTable();
    bool contains(string key);
    HashTable(HashTable& anotherTable);
    HashTable& operator=(HashTable& anotherTable);

};



#endif // HASH_TABLE_

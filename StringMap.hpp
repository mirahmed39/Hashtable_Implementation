#ifndef _STRING_MAP_H
#define _STRING_MAP_H
#include "HashTable.hpp"
#include <string>

class StringMap
{
private:
    HashTable table;
public:
    StringMap();
    StringMap(StringMap& anotherMap);
    StringMap& operator =(StringMap& anotherMap);
    bool isEmpty();
    int getSize();
    bool addValue(string key, string value);
    string getValue(string key);
    bool deleteValue(string key);
    void clear();
    bool contains(string key);

};
#endif // _STRING_MAP_H

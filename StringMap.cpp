#include "StringMap.hpp"

StringMap::StringMap()
{
    //calls the constructor of hashTable.
}

StringMap::StringMap(StringMap& anotherMap)
{
    table = anotherMap.table;
}

StringMap& StringMap::operator =(StringMap& anotherMap)
{
    table = anotherMap.table;
    return *this;
}

bool StringMap::isEmpty()
{
    return table.isEmpty();
}

int StringMap::getSize()
{
    return table.getSize();
}

bool StringMap::addValue(string key, string value)
{
    return table.addValue(key, value);
}

string StringMap::getValue(string key)
{
    return table.getValue(key);
}

bool StringMap::deleteValue(string key)
{
    return table.deleteValue(key);
}

void StringMap::clear()
{
    table.clearTable();
}

bool StringMap::contains(string key)
{
    return table.contains(key);
}








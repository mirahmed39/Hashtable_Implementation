#include <iostream>
#include <string>
#include <cctype>
#include <cstddef>
#include <stdexcept>
#include "HashTable.hpp"
using namespace std;

HashTable::HashTable()
{
    for(int i = 0; i < tableSize; i++)
    {
        items[i] = nullptr;
    }

    totalSize = 0;
}

bool HashTable::inputValidation(string key, string value)
{
    bool result = true;
    for(int i = 0; i < key.length(); i++)
    {
        if(ispunct(key[i]) && ispunct(value[i]))
            result =  false;
    }
    if(key == "" || value == "")
        result = false;
    return result;
}

int HashTable::hash(string key)
{
    int index;
    int sum = 0;
    for(int i = 0; i < key.length(); i++)
    {
        sum += (int)key[i];
    }
    index = sum%tableSize;

    return index;
}

int HashTable::countEntryAtIndex(int i)
{
    int count = 0;
    if(items[i] == nullptr)
        return count;
    else
    {
        Node* curPtr = items[i];
        while(curPtr != nullptr)
        {
            count++;
            curPtr = curPtr->getNext();
        }
    }
    return count;
}

bool HashTable::isEmpty()
{
    return totalSize== 0;
}

int HashTable::getSize()
{
    return totalSize;
}

bool HashTable::addValue(string key, string value)
{
    bool success = inputValidation(key, value);
    if(success)
    {
        int index =  hash(key);
        Node* ptr = new Node(key, value);
        if(countEntryAtIndex(index) == 0)
        {
            items[index] = ptr;
            totalSize++;
        }
        else
        {
            ptr->setNext(items[index]);
            items[index] = ptr;
            totalSize++;
        }
    }
    return success;
}

string HashTable::getValue(string key)
{
    int index = hash(key);
    int entrySize = countEntryAtIndex(index);
    if(entrySize == 0)
        throw runtime_error("The value associated with the Key does not exist!!!");
    else
    {
        Node* curPtr = items[index];
        if(items[index] == nullptr)
            cout << "Value not found(May be deleted)\n";
        while(curPtr != nullptr)
        {
            if(curPtr->getName() == key)
                return curPtr->getCourse();
            else
                curPtr = curPtr->getNext();
        }
        throw runtime_error("The value associated with the Key does not exist!!!");
    }
}

bool HashTable::deleteValue(string key)
{
    bool result = false;
    int index = hash(key);
    int entrySize = countEntryAtIndex(index);
    if(totalSize ==0)
        return false;
    else if(entrySize ==1 && items[index]->getName() == key)
    {
        delete items[index];
        items[index] = nullptr;
        result = true;
        totalSize--;

    }
    else if(entrySize > 1 && items[index]->getName() == key)
    {
        Node* temp = items[index];
        items[index] = temp->getNext();
        delete temp;
        temp = nullptr;
        result = true;
        totalSize--;
    }
    else if(entrySize > 1)
    {
        Node *curPtr = items[index];
        Node* deletePtr;
        while(curPtr->getNext() != nullptr)
        {
            if(curPtr->getNext()->getName() == key)
            {
                deletePtr = curPtr->getNext();
                curPtr->setNext(deletePtr->getNext());
                delete deletePtr;
                deletePtr = nullptr;
                result = true;
                totalSize--;
                break;
            }
            curPtr = curPtr->getNext();
        }
    }
    return result;
}

void HashTable::clearTable()
{
    for(int i =0; i < tableSize; i++)
    {
        int entrySize = countEntryAtIndex(i);
        if(entrySize ==0)
            continue;
        else if(entrySize ==1)
        {
            delete items[i];
            items[i] = nullptr;
            totalSize--;
        }
        else
        {
            while(countEntryAtIndex(i) != 0)
            {
                Node* temp = items[i];
                items[i] = temp->getNext();
                delete temp;
                temp = nullptr;
                totalSize--;
            }
        }
    }
}

bool HashTable::contains(string key)
{
    bool success = false;
    int index = hash(key);
    int EntrySize = countEntryAtIndex(index);
    Node* curPtr = items[index];
    if(EntrySize == 0)
        return false;
    else
    {
        while(curPtr!= nullptr)
        {
            if(curPtr->getName() == key)
            {
                success = true;
                break;
            }
            else
                curPtr = curPtr->getNext();
        }
    }
    return success;
}

HashTable::HashTable(HashTable& anotherTable)
{
    for(int i = 0; i < tableSize; i++)
    {
        int entrySize = anotherTable.countEntryAtIndex(i);
        if(entrySize ==0)
            items[i] = nullptr;
        else
        {
            Node* curPtr = anotherTable.items[i];
            while(curPtr != nullptr)
            {
                string name = curPtr->getName();
                string course = curPtr->getCourse();
                addValue(name, course);
                curPtr = curPtr->getNext();
            }
        }
    }
}

HashTable& HashTable::operator=(HashTable& anotherTable)
{
    clearTable();
    for(int i = 0; i < tableSize; i++)
    {
        int entrySize = anotherTable.countEntryAtIndex(i);
        if(entrySize ==0)
            items[i] = nullptr;
        else
        {
            Node* curPtr = anotherTable.items[i];
            while(curPtr != nullptr)
            {
                string name = curPtr->getName();
                string course = curPtr->getCourse();
                addValue(name, course);
                curPtr = curPtr->getNext();
            }
        }
    }
    return *this;
}










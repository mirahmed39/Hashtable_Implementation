#ifndef NODE_H_
#define NODE_H_

#include <string>
using namespace std;

class Node
{
private:
    string professorName;
    string course;
    Node* next;
public:
    Node();
    Node(string newProfessorName, string newCourse);
    void setName(const string& newName);
    void setCourse(const string& newCourse);
    void setNext(Node* newPtr);
    string getName();
    string getCourse();
    Node* getNext();
    void printNode();
};


#endif // NODE_H_

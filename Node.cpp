#include "Node.hpp"
#include <iostream>
#include <string>
using namespace std;

Node::Node()
{
    professorName = "";
    course = "";
    next = nullptr;
}

Node::Node(string newProfessorName, string newCourse)
{
    professorName = newProfessorName;
    course = newCourse;
    next = nullptr;
}

void Node::setName(const string& newName)
{

    professorName = newName;
}

void Node::setCourse(const string& newCourse)
{
    course = newCourse;
}

void Node::setNext(Node* newPtr)
{
    next = newPtr;
}

string Node::getName()
{
    return professorName;
}

string Node::getCourse()
{
    return course;
}

Node* Node::getNext()
{
    return next;
}

void Node:: printNode()
{
    cout << "Professor's Name: " << professorName <<endl;
    cout << "Course Name: " << course << endl;
}










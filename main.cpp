#include <iostream>
#include "Node.hpp"
#include "HashTable.hpp"
#include "StringMap.hpp"
#include <string>
using namespace std;

int main()
{/**
    //creating hashTable object and checking isEmpty();
    HashTable t;
    cout << t.isEmpty() << endl;

    // Adding a value index 30. Zamfirescu and gettting the value.
    t.addValue("Christina Zamfirescu", "Graph Theory");
    cout << t.getValue("Christina Zamfirescu") << endl;

    // Adding a value index 10. Sadat and gettting the value.
    t.addValue("Sadat Chowdhury", "Data Strucutre");
    cout << t.getValue("Sadat Chowdhury") << endl;

    //entry size at index 10. Sadat. and it should not be empty now.
    cout << "Total entry:" <<t.countEntryAtIndex(30) << endl;
    cout << t.isEmpty() << endl;
    // adding  2 values to zamfi at index 30. total entry at that index should be 3.
    t.addValue("Christina Zamfirescu", "Capstone Course");
    t.addValue("Christina Zamfirescu", "Graph theory");
    cout << "Count at index 30:" << t.countEntryAtIndex(30) << endl;

    //adding to sadat. and total entry should be 2.
    t.addValue("Sadat Chowdhury", "Computer Architecture");
    cout << "Count at index 10: "<<  t.countEntryAtIndex(10) << endl;

    //deleting a value from zamfi. total entry should be 2.
    t.deleteValue("Christina Zamfirescu");
    cout << "Count at index 30: " << t.countEntryAtIndex(30) << endl;

    //Checking the totalSize of the table.
    cout << "Total Size: " <<t.getSize() << endl;

    //clearing the table and then checking if it is empty.
    //t.clearTable();
    cout << "Emptiness of t: "<< t.isEmpty() << endl;
    //cout << "Contains Sadat: " << t.contains("Sadat Chowdhury") << endl;

    //cout << t.hash("Konstantinos Pouliasis");
    HashTable t2;
    cout <<"Size of t2: " << t2.getSize() << endl;

    // getting value for t
    cout << t.getValue("Christina Zamfirescu") << endl;
    cout << "size of t: " << t.getSize() << endl;

    cout <<"t contains Zamfirescu: " << t.contains("Christina Zamfirescu") << endl;

    HashTable t2;
    t2.addValue("Mir Ahmed", "Software analysis and design");
    t2.addValue("Eric Schweitzer", "Operating System");
    t2.addValue("Subhash Shankar", "Computer Architecture 3");
    t2.addValue("Sami Ahmed","Database");
    t2.addValue("Lex Lei", "Relational Database and SQL");
    t2.addValue("Cullen Schaffer","Quantum Computing");
    t2.addValue("Alexi Nikolaev", "Discrete Structure");
    t2.addValue("Christopher Jaouen","Matrix Algebra");
    t2.addValue("Ioannis Stamos", "3D Vision");
    t2.addValue("Cullen Schaffer", "Programming for everyone");

    cout << t2.getSize() << endl;
    cout << t2.isEmpty() << endl;
    cout << t2.getValue("Lex Lei") << endl;
    cout << "--------------------" << endl;
    //t2.deleteValue("Lex Lei");
    cout << t2.getSize() << endl;
    cout << t2.isEmpty() << endl;
    cout << t2.getValue("Lex Lei") << endl;

    cout << "---------Testing copy Constructor and assignment operator----------\n";
    //HashTable t3(t2);
    //cout << t3.getSize() << endl;
    cout << t2.hash("Cullen Schaffer") << endl;
    for(int i = 0; i < 32; i++)
    {
        cout << t2.countEntryAtIndex(i) << " ";
    }

    cout << endl << t2.contains("Cullen Schaffer") << endl;

    HashTable t3;
    t3 = t2;

    cout << t3.getSize() << endl;
    cout << t2.getSize() << endl;
    cout << "t3 size: " << t3.getSize() << endl;
    t2.deleteValue("Cullen Schaffer");
    t3 = t2;
    cout << t3.getSize() << endl;
    t3.addValue("Saad Mniemneh", "Algorithm for Bioinformatics");
    t2.deleteValue("Sami Ahmed");
    cout << "t2 size: " << t2.getSize() << endl;
    cout << "t3 size: " << t3.getSize() << endl;

    cout << t3.addValue("", "computer theory") << endl;

    //HashTable t4(t3);

    cout <<"Deleting Mir Ahmed should output 1: " <<t2.deleteValue("Mir Ahmed") <<endl;
    cout <<"Deleting Mir should output 0: " << t2.deleteValue("Mir") <<endl;
    cout << "Contains Mir Ahmed should output 0 now: " << t2.contains("Mir Ahmed") << endl; */

    /** Creating a StringMap object and checking if its empty */

    StringMap map1;
    if(map1.isEmpty())
        cout << "Map1 is empty\n";
    else
        cout << "Map1 is not empty\n";

    cout << "Adding values to map1\n";
    map1.addValue("Sadat Chowdhury", "Data Structure and Algorithm");
    map1.addValue("Mir Ahmed", "Graph Theory");
    map1.addValue("Eric Schweitzer", "Operating System");
    map1.addValue("Subhash Shankar", "Computer Architecture 3");
    map1.addValue("Sami Al Daheri","Database Management");
    map1.addValue("Lex Lei", "Relational Database and SQL");
    map1.addValue("Cullen Schaffer","Quantum Computing");
    map1.addValue("Alexi Nikolaev", "Discrete Structure");
    map1.addValue("Christopher Jaouen","Matrix Algebra");
    map1.addValue("Ioannis Stamos", "3D Vision");
    map1.addValue("Cullen Schaffer", "Programming for everyone");

    cout << "Size of the map1: " << map1.getSize() << endl;
    if(map1.isEmpty())
        cout << "Map1 is empty.\n";
    else
        cout << "Map1 is not empty.\n";

    /** checking contains function */
    if(map1.contains("Sadat Chowdhury"))
        cout << "Map1 contains Sadat Chowdhury.\n";
    else
        cout << "Map1 does not contain Sadat Chowdhury.\n";

    /** checking deleteValue and the size again */

    bool success = map1.deleteValue("William Sakas");
    if(success)
        cout << "William Sakas has been deleted successfully.\n";
    else
        cout << "William Sakas does not exist. It cannot be deleted .\n";


    bool success2 = map1.deleteValue("Cullen Schaffer");
    if(success2)
        cout << "Cullen Schaffer has been deleted successfully.\n";
    else
        cout << "Cullen Schaffer does not exist!!!.\n";

    cout << "Size of map1 after deletion: " << map1.getSize() << endl;

    cout << "\nChecking the operator function.\n";
    cout << "Creating another StringMap object map2.\n";

    StringMap map2 = map1;
    cout << "Size of map2: " << map2.getSize() << endl;

    cout << "\nDeleting value from map2 and checking the size.\n";
    map2.deleteValue("Sadat Chowdhury");

    cout << "Size of map2: " << map2.getSize() << endl;

    cout << "\nClearing map1 and checking the size and emptiness\n";
    map1.clear();
    cout << "Size of map1 after clear: " << map1.getSize() << endl;
    if(map1.isEmpty())
        cout << "Map1 is empty now.\n";
    else
        cout << "Map1 is not empty.\n";

    cout << "Congratulations Mir!!! All your functions seem to work fine.\n";





    return 0;
}

# StringMap

~~~
#### Details:
This project implements a StringMap ADT. In general, a Map (Dictionary) is an ADT that maps a key to a value,
and offers efficient operations to add, retrieve, and delete values based on some key. An array T[] 
can be thought of as a kind of "Map"  where the keys are always integers and the values can be anything 
of type T. The Map ADT is a generalization on this concept and, in general, can map any type of key to 
any other typed value. The StringMap you will design must work in the case where the key and value are 
both strings (std:string)

~~~

# ADT Specifications:
###The ADT supports the following operations.

~~~

#####bool isEmpty() 
If the Map contains no elements, this should return true; otherwise, returns false.

~~~
~~~

#####int getSize()
Returns the number of key-value pairs (elements) stored in the Map

~~~
~~~

#####bool addValue(string key, string value)
if the key AND value is valid, stores the valid key-value pair, and returns true
if key or value is invalid (empty string), returns false

~~~
~~~

#####string getValue(string key)
If a value associated with the given key exists, returns it; otherwise throws an exception

~~~
~~~

#####bool deleteValue(string key)
If a value associated with the given key exists, removes it, and returns true; otherwise, returns false.

~~~
~~~

#####void clear() 
Removes all elements. Subsequent call to isEmpty() should yield true

~~~
~~~

#####bool contains(string key)
If a value associated with the given key exists, returns true; otherwise, returns false.

~~~
~~~

#####Copy Constructor
Define an appropriate copy constructor

~~~
~~~

#####Assignment Operator
Define an appropriate assignment operator


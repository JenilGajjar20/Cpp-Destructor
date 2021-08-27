
# C++ Destructor

Destructor is a member function which destructs or deletes an object.

## Syntax
```
~constructor_name();
```
## Properties of destructor
- Destructor function is automatically invoked(called) when the objects are destroyed.
- It cannot be declared static or const.
- The destructor does not have arguments.
- It has not return type not even void.
- An object of a class with a destructor cannot become a member of the union.
- A destructor should be declared in the public section of the class.
- The programmer cannot access the address of destructor.

## When is destructor called?
A destructor is called automatically when the object goes out of scope:
- When the function ends
- When the program ends
- When a block containing local variables ends
- When a delete operator is called

## How destructor are different from a normal member function?
Destructor have same name as the class preceded by a **tilde(~)**. Destructor don't take any argument and don't return anything.

## Can be there more than one destructor in class?
No, there can only be one destructor in a class with a class name preceded by tilde(~), no parameter and also no return type.

## When do we need to write a user-defined destructor?
If we do not write our own destructor in a class then the compiler creates a default destructor. The default destructor works well unless we have dynamically allocated memory or pointer in class.

When a class contains a pointer to memory allocated in class, we should write a destructor to release memory before the class instance is destroyed.

This must be done in order to avoid memory leak.


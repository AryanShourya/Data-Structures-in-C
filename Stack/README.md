# Stacks

Stack Data Structure is a linear data structure that follows LIFO (Last In First Out) Principle , so the last element inserted is the first to be popped out.[^1]

[^1]:Definition taken from geekforgeeks official website. Check them out [here](https://www.geeksforgeeks.org/introduction-to-stack-data-structure-and-algorithm-tutorials/).

![stack basic](https://github.com/AryanShourya/Data-Structures-in-C/raw/main/Stack/pictures/stack_basic.png)

This header file implements stack using array.
structure of stack used in this header file :

![stack structure](https://github.com/AryanShourya/Data-Structures-in-C/raw/main/Stack/pictures/stack_struct_new.png)


## Deploying `stack.h`

- create a C file eg: `file_name.c`
- include the header file `stack.h` in `file_name.c` file
  
  ```c
  #include"stack.h"
  ```
## Creating stack 

Basic operations of integer containing stack : 
- create_stack()
    ```c
    stack *s1 = create_stack('i',5);   // create an integer stack s1 of size = 5
    ```
    >refer to this [table](#creating-stack-of-different-data-types-) for other data types.
- push_int()
    ```c
    push_int(s1,10);                   // push integer value 10 in stack s1
    ```
    >refer to this [table](#insert-elements-of-different-data-types-) for other data types.
- pop()
    ```c
    pop(s1);                       // pop an element from stack s1
    ```
- top_int()
    ```c
    int a = top_int(s1);                // returns the value of topmost element of stack s1
    ```
    >refer to this [table](#fetching-the-top-value-) for other data types.
- isFull()
    ```c
    int flag = isFull(s1);            // returns 0 if stack s1 is full
    ```
- isEmpty()
    ```c
    int flag = isEmpty(s1);       // returns 0 if stack s1 is empty
    ```
#### creating stack of different data types :
If you want to create stack that contains other data types then you can refer to this table :

| Data Type | Function |
|:-----------|:----------|
|integer     |create_stack('i',int val);|
|float       |create_stack('f',float val);|
|double      |create_stack('d',double val);|
|character | create_stack('c',char val);|

#### insert elements of different data types :

To insert value into the stack according to correct datatype refer to this table :


| Data Type | Function |
|:-----------|:----------|
|integer     |push_int(stack name , value);|
|float       |push_float(stack name , value);|
|double      |push_double(stack name , value);|
|character | push_char(stack name , value);|

#### fetching the top value :
For every datatype the function to fetch the top value is different :


| Data Type | Function |
|:-----------|:----------|
|integer     |top_int(stack name);|
|float       |top_float(stack name);|
|double      |top_double(stack name);|
|character | top_char(stack name);|


## Compiling header files

- to _successfully_ run the program we need to compile `file_name.c` along with `stack.c`.
- open `terminal` and write the following commands:
    ```
    gcc file_name.c stack.c -o file_name.c
    ```
    This will create a `file_name.exe` executable file in the same directory
- to run the program:
    
     ```
    ./file_name.exe
    ```

> This header file contains functions for above mentioned data types only. No user defined data types or string is allowed.
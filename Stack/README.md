

# Stacks

![stack structure](Stack/pictures/stack_struct_new.png)
structure of stack used in this header file
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
- push_int()
    ```c
    push_int(s1,10);                   // push integer value 10 in stack s1
    ```
- pop()
    ```c
    pop(s1);                       // pop an element from stack s1
    ```
- top_int()
    ```c
    int a = top_int(s1);                // returns the value of topmost element of stack s1
    ```
- isFull()
    ```c
    int flag = isFull(s1);            // returns 0 if stack s1 is full
    ```
- isEmpty()
    ```c
    int flag = isEmpty(s1);       // returns 0 if stack s1 is empty
    ```

If you want to create stack that contains other data types then you can refer to this table :

| Data Type | Function |
|:-----------|:----------|
|integer     |create_stack('i',int val);|
|float       |create_stack('f',float val);|
|double      |create_stack('d',double val);|
|character | create_stack('c',char val);|

> This header file contains functions for above mentioned data types only. No user defined data types or string is allowed.

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
    gcc file_name.c stack_int.c -o file_name.c
    ```
    This will create a `file_name.exe` executable file in the same directory
- to run the program:
    
     ```
    ./file_name.exe
    ```
    

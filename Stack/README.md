# Stacks

## Using `stack_int.h`

- create a C file eg: `file_name.c`
- include the header file `stack_int.h` in `file_name.c` file
  
  ```c
  #include"stack_int.h"
  ```
## Creating stack 

Basic operations of stack
- make_stack()
    ```c
    stack_int s1 = make_stack(5);   // create a stack s1 of size = 5
    ```
- push()
    ```c
    push(s1,10);                   // push value 10 in stack s1
    ```
- pop()
    ```c
    pop(s1);                       // pop an element from stack s1
    ```
- top()
    ```c
    int a = top(s1);                // returns the value of topmost element of stack s1
    ```
- isFull()
    ```c
    int flag = isFull(s1);            // returns 0 if stack s1 is full
    ```
- isEmpty()
    ```c
    int flag = isEmpty(s1);       // returns 0 if stack s1 is empty
    ```


## Compiling header files

- to _successfully_ run the program we need to compile `file_name.c` along with `stack_int.c`.
- open `terminal` and write the following commands:
    ```
    gcc file_name.c stack_int.c -o file_name.c
    ```
    This will create a `file_name.exe` executable file in the same directory
- to run the program:
    
     ```
    ./file_name.exe
    ```
    

# Queue

Queue is a linear data structure that follows the First-In-First-Out (FIFO) order of operations. This means the first element added to the queue will be the first one to be removed.[^1]

[^1]: definition taken from [geekforgeeks](https://www.geeksforgeeks.org/queue-in-c/) (gfg) official website.

![queue structure](https://github.com/AryanShourya/Data-Structures-in-C/raw/main/queue/pictures/queue_basic.png)

This library uses linked list to implement queue data structure.

![linked list representation queue](https://github.com/AryanShourya/Data-Structures-in-C/raw/main/queue/pictures/queue_ll_represent.png)


## Using "queue.h" header file

- store both files `queue.h` and `queue.c` int the same folder
- create file `filename.c` in the same folder as above mentioned files
- include the header file `queue.h` in `filename.c`
  ```c
  #include"queue.c"
  ```
- create your own queue using the functions in  the header file

### some basic queue operations:
- create a new queue `create_queue()`
    ```c
    queue* q1 = create_queue('i');  // 'i'  indicates it is an integer queue
    ```
    > refer this [table](#creating-queue-of-different-data-types) for other data types.
- insert element into the queue `enqueue_int()`
    ```c
    enqueue_int(q1,5);      // insert the value '5' into queue q1
    ```
    > refer to this [table](#inserting-elements-of-different-data-types-) to insert other data types.
- display the elements of queue `disp_queue()`
    ```c
    disp_queue(q1);          //to dislay elements of the queue
    ```
- return the first element of the queue `front_int()`
    ```c
    int a = front_int(q1);   // returns the element at the front of the queue
    ```
    >refer to this [table](#accessing-front-of-queue-) for other data types.
- deleting elements from the queue `dequeue()`
    ```c
    dequeue(q1);          // deletes one element from the front
    ```
- to check if queue is empty `isQueueEmpty()`
    ```c
    int f = isQueueEmpty(q1);     // returns True if queue is empty
    ```

#### creating queue of different data types :
|data type|function|
|----------|--------|
|integer   |create_int( 'i' );|
|float   | create_float( 'f' );|
|double    | create_double( 'd' );|
|character | create_char( 'c' );|

#### inserting elements of different data types :
|data type|function|
|----------|--------|
|integer   |enqueue_int(queue_name , value );|
|float   | enqueue_float(queue_name , value );|
|double    | enqueue_double(queue_name , value );|
|character | enqueue_char(queue_name , value );|

#### accessing front of queue :

|data type|function|
|----------|--------|
|integer   |front_int( queue_name );|
|float   | front_float( queue_name );|
|double    | front_double( queue_name );|
|character | front_char( queue_name );|

## compiling and running files

- make sure `queue.h` , `queue.c` and your file `filename.c` is in the same directory.
- open `terminal` and write the commands :
    - to compile `queue.c` and `filename.c` file into `.exe` file:
        ```
        gcc queue.c filename.c -o filename
        ```
    - `filename.exe` file will be generated, run this command to execute the program to get the desired output :
        ```
        ./filename.c
        ```

>This header file contains functions for only four data types.
integer, float, double,and character.
user defined data types are not allowed.


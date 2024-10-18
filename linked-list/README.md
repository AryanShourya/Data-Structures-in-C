# Linked List

### Types of Linked list
- [Singly Linked List](#singly-linked-list)
- [Doubly Linked List]()
- [Circular Linked List]()

## Singly Linked List

Singly linked list is a linear data structure in which the elements are not stored in contiguous memory locations and each element is connected only to its next element using a pointer.[^1]

[^1]: definition taken from [Geekforgeeks](https://www.geeksforgeeks.org/introduction-to-singly-linked-list/) official website.

![linked list](https://github.com/AryanShourya/Data-Structures-in-C/raw/c1b78e6e653ebb39be4c0a028b2cd02fa0322324/linked-list/pictures/singly-list-basic.png)


### Using `singlylist.h`

- create a folder and store the `singlylist.h` and `singlylist.c` files
    >NOTE: make sure both files are in the same _folder_.

- create a c file `file_name.c` 
- include the `singlylist.h` header file the `file_name.c` file
    ```c
    #include"singlylist.h"
    ```
- create linked list using the given function. 

#### Some basic Singly Linked List Operation

- create singly linked list `create_slist()`
    ```c
    slist* s1 = create_slist('i');  // returns a pointer to head of a NULL singly list of type integer.
    ```
    > To create singly list of other data types refer to [this](#creating-singly-list-of-different-data-types) table.

- insert element into singly list `insert_slist_int()`
    ```c
    insert_slist_int(s1, 5 , 1);  // insert into list 's1' , val = '5' , pos = '1' . first element starts with 0
    ```
    > To insert into singly list other data types refer to [this](#insert-different-data-types-into-singly-list) table.

- remove element from list `remove_slist()`
    ```c
    remove_slist(s1 ,3);  // remove element from list 's1' at pos = '3'  (indexing starts from 0);
    ```

- display the elements of singly list `disp_slist()`
    ```c
    disp_slist(s1);    // display singly list 's1'
    ```

#### creating singly list of different data types

|Data Types  | functions |
|----------- |-----------|
| integer | create_slist( 'i' );|
| float | create_slist( 'f' );|
| double | create_slist( 'd' );|
| character | create_slist( 'c' );|

#### insert different data types into singly list

|Data Types  | functions |
|----------- |-----------|
| integer | insert_slist_int( list_name , value , position ); |
| float | insert_slist_float( list_name , value , position );|
| double | insert_slist_double( list_name , value , position );|
| character | insert_slist_char( list_name , value , position ); |

> indexing starts from 0 . 
  example : 1 > 2 > 3 > 4 > NULL  is a singly list.
  The position of '1' is '0' and '4' is '3'.



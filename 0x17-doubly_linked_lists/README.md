Doubly Linked Lists in C
This project is part of the Holberton School curriculum and focuses on implementing and using doubly linked lists in C. In this project, you will learn how to work with doubly linked lists, understand their structure, and perform various operations on them.


General Info
A doubly linked list is a data structure that consists of a sequence of elements, each of which contains a reference (or link) to the previous and next elements. In this project, you will learn how to create, manipulate, and use doubly linked lists in C.

Learning Objectives
By the end of this project, you are expected to be able to:

Understand what a doubly linked list is.
Use doubly linked lists in C for various applications.
Efficiently search for information and resources related to doubly linked lists.
Requirements
Allowed editors: vi, vim, emacs.
All files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5).
All files should end with a new line.
A README.md file, at the root of the project folder, is mandatory.
Your code should adhere to the Betty style guide and will be checked using betty-style.pl and betty-doc.pl.
You are not allowed to use global variables.
No more than 5 functions per file.
The only C standard library functions allowed are malloc, free, printf, and exit.
The prototypes of all your functions should be included in your header file called lists.h.
Don't forget to push your header file.
All your header files should use include guards.

Data Structure
For this project, use the following data structure:

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

# 0x1A. C - Hash tables

In this project, we will explore the concept of hash tables in C. Hash tables are a fundamental data structure used to store and retrieve data efficiently. This README.md file serves as a guide to understanding the project, its objectives, requirements, and data structures involved.

## Learning Objectives

By the end of this project, you should be able to:

### General
1. Understand what a hash function is and its purpose.
2. Identify the characteristics that make a good hash function.
3. Explain what a hash table is, how it works, and how to use it.
4. Define what a collision is and explore the main methods to deal with collisions within a hash table.
5. Analyze the advantages and drawbacks of using hash tables.
6. Recognize the most common use cases of hash tables.

## Requirements

### General
1. Allowed Editors: `vi`, `vim`, `emacs`.
2. Code must be compiled on Ubuntu 20.04 LTS using `gcc` with the following options:
   `-Wall -Werror -Wextra -pedantic -std=gnu89`
3. All source code files should end with a new line.
4. A `README.md` file must be present at the root of the project folder.
5. Code must follow the Betty style guidelines and be checked using `betty-style.pl` and `betty-doc.pl`.
6. Global variables are not allowed.
7. Each source code file should contain no more than 5 functions.
8. You may use the C standard library.
9. The prototypes of all functions should be included in a header file named `hash_tables.h`.
10. Don't forget to push your header file.
11. All header files should be include guarded.

## Data Structures

For this project, you will use the following data structures:

```c
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;

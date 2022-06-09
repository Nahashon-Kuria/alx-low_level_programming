# 0x17. C - Doubly linked lists

## More Info

- Please use this data structure for this project:

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

## Tasks

0. Print list

Write a function that prints all the elements of a dlistint_t list.

	> Prototype: size_t print_dlistint(const dlistint_t *h);

	> Return: the number of nodes

	> Format: see example 

 julien@ubuntu:~/0x17. Doubly linked lists$ cat 0-main.c 


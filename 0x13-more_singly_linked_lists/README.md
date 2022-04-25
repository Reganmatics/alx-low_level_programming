# advanced tasks

task 0. Print list
Write a function that prints out all the elements of a __listint_t.__
- Prototype: __size_t print_listint(const listint_t *h);__
- Return: the number of nodes
- Format: see examples
- You are allowed to use __printf__
- file -> [0-print_listint.c]()

task 1. List length
Write a function that returns the number of elements ina linked __listint_t__ list.
- Prototype: __size_t listint_len(const listint_t *h);__
- file -> [1-listint_len.c]()

task2. Add node
Write a function that adds a new node at the beginning of a __listint_t__ list.
- Prototype: __listint_t *add_nodeint(listint_t **head, const int n);__
- Return: the address of the new element, or __NULL__ if it failed

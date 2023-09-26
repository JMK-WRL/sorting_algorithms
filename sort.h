#include <stdio.h>
#include <stdlib.h>


/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/**
 * enum bool - Enumeration of a Boolean value
 * @false: Equals 0.
 * @true: Equals 1.
 */
typedef enum bool
{
	false = 0,
	true
} bool;



void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void swap(int *a, int *b);
void insertion_sort_list(listint_t **list);
void custom_swap_nodes(listint_t **head, listint_t **node1, listint_t *node2);
void selection_sort(int *array, size_t size);
void custom_swap_int(int *a, int *b);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void swap_node_ahead(listint_t **list, listint_t **tail, listint_t **shaker);
void swap_node_behind(listint_t **list, listint_t **tail, listint_t **shaker);
void cocktail_sort_list(listint_t **list);

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdlib.h>
#include "utils.h"
#include <stdbool.h>

typedef struct linked_list_node {
  struct linked_list_node *next;
  void *data;
  size_t size;
} linked_list_node;

typedef struct linked_list {
  linked_list_node *head;
} linked_list;

int add_data( linked_list *list, void *data );
int remove_data( linked_list *list, void *data , size_t size );
int remove_node( linked_list *list, linked_list_node *node );
int find( linked_list *list, void *data, size_t size );

#endif
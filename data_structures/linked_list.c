
#include "linked_list.h"

int add_data( linked_list *list, void *data ) {
  linked_list_node *node = list->head;

  if ( node == NULL ) {
    list->head = data;
    return 0;
  }

  while (node->next != NULL) {
    node = node->next;
  }

  node->next = data;
}

int remove_data( linked_list *list, void *data, size_t size ) {
  linked_list_node *node = list->head;

  while ( !equals(node->data, data, node->size, size) && node !=  NULL ) {
    node = node->next;
  }

  if ( node != NULL ) {
    return remove_node( list, node );
  }

  return 0;
}

int remove_node( linked_list *list, linked_list_node *node ) {
  // NOT IMPLEMENTED
  return 1;
}

int find( linked_list *list, void *data, size_t size ) {
  
  linked_list_node *node = list->head;

  while( node != NULL ) {
    if (equals(node->data, data, node->size, size)) {
      return 1;
    }
  }

  return -1;

}
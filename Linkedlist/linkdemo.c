#include <stdlib.h>
typedef struct node {
    int val;
    struct node * next;
} node_t;

node_t * head = NULL;
head = malloc(sizeof(node_t));
if (head == NULL) {
    return 1;
}

head->val = 1;
head->next = NULL;
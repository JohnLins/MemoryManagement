#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
  int item;
  struct Node* next;
} Node;

 

void unshift(Node** ref, int data) {
  
  struct Node* newNode = (Node*)malloc(sizeof(Node));

  newNode->item = data;
  newNode->next = (*ref);

  
  (*ref) = new_node;
}


void pushAfter(Node* node, int data) {
  if (node == NULL) {
    printf("previous node NULL");
    return;
  }

  Node* new_node = (Node*)malloc(sizeof(Node));
  newNode->item = data;
  newNode->next = node->next;
  node->next = newNode;
}

void push(Node** ref, int data) {
  Node* newNode = (Node*)malloc(sizeof(Node));
  Node* last = *ref;

  newNode->item = data;
  newNode->next = NULL;

  if (*ref == NULL) {
    *ref = newNode;
    return;
  }

  while (last->next != NULL)
    last = last->next;

  last->next = newNode;
  return;
}

void pop(Node** ref, int key) {
  Node *temp = *ref, *prev;

  if (temp != NULL && temp->item == key) {
    *ref = temp->next;
    free(temp);
    return;
  }
  
  while (temp != NULL && temp->item != key) {
    prev = temp;
    temp = temp->next;
  }

  
  if (temp == NULL) return;

  
  prev->next = temp->next;

  free(temp);
}

void display(Node* node) {
  while (node != NULL) {
    printf(" %d ", node->item);
    node = node->next;
  }
}

int indexValue(Node* node, int index){
  int i = 0;
  while (node != NULL && i <= index) {
    if(i == index){
      return node->item;
    }
      node = node->next;
      i++;
    }
    return 0;
}

int main() {
  Node* head = NULL;

  push(&head, 1);
  unshift(&head, 2);
  unshift(&head, 3);
  push(&head, 4);
  pushAfter(head->next, 5);
  printf("Index: %d\n", indexValue(head, 1));
  display(head);
  pop(&head, 3);
  display(head);
}

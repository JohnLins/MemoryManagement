#include <stdio.h> 
#include <stdlib.h> 
  
struct Node { 
    int value; 
    struct Node* next; 
}; 
  

int main() 
{ 
    struct Node* head = NULL; 
    struct Node* second = NULL; 
    struct Node* third = NULL; 
  
    head = (struct Node*)malloc(sizeof(struct Node)); 
    second = (struct Node*)malloc(sizeof(struct Node)); 
    third = (struct Node*)malloc(sizeof(struct Node)); 
  
    
    (*head).value = 5;
    (*head).next = second;  
  
    (*second).value = 8;
    (*second).next = third; 
  
    (*third).value = 37; 
    (*third).next = NULL; 
    
    printf("%d\n", (*head).value); 
    printf("%d\n", (*second).value); 
    printf("%d\n", (*third).value); 
  
    return 0; 
}

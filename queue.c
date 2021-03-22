#include <stdio.h>
#define MAX 10

int QUEUE[MAX],front=-1,rear=-1;

void remove_from_Q(int queue[]);
void push(int queue[], int value)
{
    if(rear==-1)
    {
        front = rear = 0;
        queue[rear] = value;
    }
    else if(rear==MAX-1)
    {
      pop(QUEUE);
      queue[rear] = value;

        return;
    }
    else
    {
        rear++;
        queue[rear] = value;
    }
   
}



void display(int queue[])
{   
    printf("\nqueue: \n");
    if(rear==-1) { 
        printf("\nempty\n"); 
        return; 
    }
    for(int i=front;i<=rear;i++)
    { 
        printf("%d,",queue[i]); 
    }

}


void pop(int queue[])
{
    int value;
    if(front == -1)
    {
        printf("\nempty\n");
        return;
    }
    else if(front == rear)
    {
        value = queue[front];
        front = rear = -1;
    }
    else
    {
        value = queue[front];
        front++;
    }
    printf("\nremoved %d.", value);
}




int main()
{
    float x = 0.0;
   
    
    for(int i = 0; i < 30; i++){
        push(QUEUE,i);
    }
  
    display(QUEUE);
           
        
    return 0;
}

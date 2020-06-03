#include <stdio.h> 
#include <stdlib.h> 


  
typedef struct Queue 
{ 
    int front, rear,size; 
    int  capacity; 
    int* array; 
}Queue; 
 
 Queue* createQueue(int  capacity) 
{ 
     Queue* queue = ( Queue*) malloc(sizeof( Queue)); 
    queue->capacity = capacity; 
    queue->front = queue->size = 0;  
    queue->rear = capacity - 1;  // This is important, see the enqueue 
    queue->array = (int*) malloc(capacity * sizeof(int)); 
    return queue; 
} 

int isFull( Queue* queue) 
{  return (queue->size == queue->capacity);  } 
  
int isEmpty( Queue* queue) 
{  return (queue->size == 0); } 
  
void enqueue( Queue* queue, int item) 
{ 
    if (isFull(queue)) 
        return; 
    queue->rear = (queue->rear + 1)%queue->capacity; 
    queue->array[queue->rear] = item; 
    queue->size = queue->size + 1; 
    printf("%d enqueued to queue\n", item); 
} 
  
int dequeue( Queue* queue) 
{ 
    if (isEmpty(queue)) 
        return -1; 
    int item = queue->array[queue->front]; 
    queue->front = (queue->front + 1)%queue->capacity; 
    queue->size = queue->size - 1; 
    return item; 
}

int main()
{
    printf("Enter the size of the queue \n");
    int p;
    scanf("%d",&p);
    Queue* queue =createQueue(p);
    printf("ENter the elements of the queue \n");
    for(int i=0;i<p;i++)
    {
        scnaf("%d",(queue->array)+i);
    }
      
    printf("Now reversing the elements of the queue \n");
      



}

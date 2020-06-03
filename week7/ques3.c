#include <stdio.h> 
#include <stdlib.h> 
 #include <stdbool.h>

  
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

bool elementfound(Queue* queue ,int x,int p)
{
    int k=0;
    for(int i=0;i<p;i++)
    {
         k=dequeue(queue);
        if(x==k)
        {
            return true;
        }
    }
}

int main()
{
    printf("Enter the size of the queue \n");
    int p;
    scanf("%d",&p);
    Queue* queue =createQueue(p);
    printf("Enter the elements you wish to enqueue \n");
    for(int i=0;i<p;i++)
    {
        scanf("%d",(queue->array)+i );
    }
    printf("Enter the element you wish to search \n");
    int k;
    scanf("%d",&k);

    //copying all the elements from the first queue to the next queue -- so that order is maintained
    Queue* queue1 =createQueue(p);
    for(int i=0;i<p;i++)
    {
        *((queue1->array)+i) = *((queue->array)+i) ;
    }
     bool x =elementfound(queue,k,p);
     if(x)
     {
         printf("Element found is true \n");
     }       
     else
     {
         
         printf("Element not found \n");
     }
     

}
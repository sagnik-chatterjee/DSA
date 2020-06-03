#include <stdio.h>
#include <stdlib.h>

typedef struct Queue
{ 
    int front, rear, size; 
    int  capacity; 
    int* array; 
}Queue; 
Queue* createQueue(int  capacity) 
{ 
    Queue* queue = ( Queue*) malloc(sizeof( Queue)); 
    queue->size =capacity;
    queue->capacity = capacity; 
    queue->front = queue->size = 0;
    queue->rear = capacity - 1;  
    queue->array = (int*) malloc(queue->capacity * sizeof(int)); 
    return queue; 
} 
void insertcq(Queue* queue, int item)
{
    if ((queue->front == 0 && queue->rear == queue->size - 1) || (queue->front == queue->rear + 1))
    {
        printf("queue is full");
        return;
    }
    else if (queue->rear ==  - 1)
    {
        queue->rear++;
        queue->front++;
    }
    else if (queue->rear == queue->size - 1 && queue->front > 0)
    {
        queue->rear = 0;
    }
    else
    {
        queue->rear++;
    }
    queue->array[queue->rear] = item;
}

void displaycq(Queue* queue)
{
    int i;
    printf("\n");
    if (queue->front > queue->rear)
    {
        for (i = queue->front; i < queue->size; i++)
        {
            printf("%d ", queue->array[i]);
        }
        for (i = 0; i <= queue->rear; i++)
            printf("%d ", queue->array[i]);
    }
    else
    {
        for (i = queue->front; i <= queue->rear; i++)
            printf("%d ", queue->array[i]);
    }
}

void deletecq(Queue* queue)
{
    if (queue->front ==  - 1)
    {
        printf("Queue is empty ");
    }
    else if (queue->front == queue->rear)
    {
        printf("\n %d deleted", queue->array[queue->front]);
        queue->front =  - 1;
        queue->rear =  - 1;
    }
    else
    {
        printf("\n %d deleted", queue->array[queue->front]);
        queue->front++;
    }
}
int main()
{
   printf("Enter the size of the queue \n");
   int p;
   scanf("%d",&p);

   Queue* q1 =createQueue(p/2);//because it will go from 0 to n/2 and the next from n/2+1 to n-1
    printf("Enter the items to be inserted in the queue \n ");
    int *arr =(int*)malloc(sizeof(int)*p);
    for(int i=0;i<p/2;i++)
    {
        scanf("%d",arr+i);
    }
    //now we have to realloc over here the elements 
    Queue* q2 =createQueue(p/2);
    q2 =realloc(q1,sizeof(int)*q/2);
    




}



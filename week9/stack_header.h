#include <stdlib.h>
typedef struct node
{
    int info;
    struct node* link;
}  NODE;

NODE *push(NODE *list ,int x)
{
    NODE *new,*temp;
    new =(NODE*)malloc(sizeof(NODE));
    new->link=list;
    new->info=x;
    return(new);
}

NODE *pop(NODE *list)
{
    NODE *prev,*temp;
    if(list==NULL)
    {
        printf("\nStack Underflow \n");
        return (list);
    }
    temp=list;
    printf("Deleted element is %d",temp->info);
    free(temp);
    list=list->link;
    return(list);
}

void display(NODE *list)
{
    NODE *temp;
    printf("\n\n Stack: ");
    if(list==NULL)
    {
        printf(" STack is empty");
        return;
    }
     temp=list;
     while(temp!=NULL)
     {
         printf("%d",temp->info);
         temp=temp->link;
     }
     printf("<-TOP");
}



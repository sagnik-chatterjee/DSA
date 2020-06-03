//header file for the POlynomial Addition using LInked lIst 
//Author : Sagnik Chatterjee
//@lorderikstark
#include <stdlib.h>

  struct node {
    int coeff; // the coeff of the element  
    int expo; // the exonent part of the element 
     struct node *llink;
     struct node *rlink;

 } ;

typedef struct node *Node;

Node add(Node head , int n , int e)
{
    Node temp,last;
    temp =(Node)malloc(sizeof(struct node));
    temp->info =n;
    temp->ex=e;
    last =head -> llink;
    temp->llink=last;
    temp->rlink =temp;
    temp->rlink =head;
    head->llink =temp;
    return head; 
}


Node sum(Node h1, Node h2 , node h3)
{
    Node one ,two;
    one = h1->rlink;
    two =h1->llink;
    while(one!=h1 && two!=h2)
    {
        if((one->ex)==(two->ex))
        {
           h3= add(h3,((one->info)+(two->info)),one->ex);
           one =one->rlink;
           two =two->llink;
        }
        else if(one->ex > two->ex)
        {
            h3 =add(h3, one->info ,one ->ex);
            one =one ->rlink;
        }
        else{
            h3 =add(h3,two->info,two->ex);
            two=two->rlink;
        }
    }

    while(two!=h2)
    {
        
    }
}
#include <stdio.h>
#include <stdlib.h>
#include "stack_header.h"
#include <stdbool.h>
int getchoice()
{
    int ch ;
    printf("\n####################################\n");
    printf("------------------Menu---------------\n");
    printf("1.Push \n 2.Pop \n 3.Display\n 4.Exit\n");
    printf("Enter your choice \n");
    scanf("%d",&ch);
    return(ch);
}

int main()
{
    NODE *list;
    int  x,ch;
    list=NULL;
    while(true)
    {
        ch=getchoice();
        switch (ch)
        {
        case 1: printf("Enter the element to be pushed \n");
                scanf("%d",&x);
                list=push(list,x);
                display(list);
                break;
        case 2: list=pop(list);
                display(list);
                break;
        case 3: display(list);
                getchar();
                break;        
        case 4: exit(0);
                break;
        default: printf("\n Invalid Choice \n");
                break;        
        }
        return 0;
    }
    




}
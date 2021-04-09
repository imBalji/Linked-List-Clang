//  CODED BY - BALU

#include<stdio.h>
#include<stdlib.h>

struct list
{
    int data;
    struct list *next;
};

typedef struct list node;

node *head=NULL;

node *getnode()
{
    node *nn=(node *)malloc(sizeof(node));
    printf("Enter Data:");
    scanf("%d",&nn->data);
    nn->next=NULL;
    return nn;
}

display()
{
    node *temp=NULL;
    if(head==NULL)
        printf("Empty List\n");
    else
    {
        for(temp=head;temp!=NULL;temp=temp->next)
            printf("%d ",temp->data);
    }
    return;
}

insert_end()
{
     node *temp=NULL;
     if(head==NULL)
            head=getnode();
     else
     {
        for(temp=head;temp->next!=NULL;temp=temp->next)
            ;
        temp->next=getnode();
     }
    return;
}

delete_end()
{
    node *temp;
    if(head==NULL)
        printf("Empty LIST\n");
    else
    {
        for(temp=head;temp->next->next!=NULL;temp=temp->next)
            ;
        free(temp->next);
        temp->next=NULL;
    }
}

insert_front()
{
    node *temp=head;
    if(head==NULL)
        printf("Empty List\n");
    else
    {
        temp=getnode();
        temp->next=head;
        head=temp;
    }
}

delete_front()
{
   node *temp=head;
   if(head==NULL)
    printf("Empty List\n");
   else
   {
       head=temp->next;
       free(temp);
   }
}

main()
{
    int ch;
    do
    {
        printf("\n\n1.INSERT AT END\n2.DISPLAY\n3.DELETE AT END\n4.INSERT AT FRONT\n5.DELETE AT FRONT\n6.EXIT\n\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert_end();
                    break;
            case 2:display();
                    break;
            case 3:delete_end();
                    break;
            case 4:insert_front();
                    break;
            case 5:delete_front();
                    break;
            case 6:return;
            default:printf("Wrong I/P\n");
        }
    }while(ch!=6);
    return;
}

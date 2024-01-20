#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
};
struct node* root =NULL;
int len =0;
void append();
void begin();
void aftre();
int length();
void display();
void delete();

void main()
{
    printf("Singlely linked list operation:\n");
    printf("1.Append \n");
    printf("2.Addatbegin \n");
    printf("3.Addatafter \n");
    printf("4.Length \n");
    printf("5.Display \n");
    printf("6.Delete\n");
    printf("7'.Quite \n");

    int ch;
    
    while(1)
    {
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                append();
                break;
            case 2:
                begin();
                break;
            case 3:
                aftre();
                break;
            case 4:
                len =length();
                printf("length of the linked list: %d",len);
                break;
            case 5:
                display();
                break;
            case 6:
                delete();
                break;
            case 7:
                exit(1);
            default:
                printf("Invalid input from the user");
                break;  
        }
    }
}
void append()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data : ");
    scanf("%d",&temp->data);
    temp->link = NULL;
    if(root == NULL)
    {
        root = temp;
    }
    else
    {
        struct node* p;
        p =root;
        while(p->link!= NULL)
        {
            p = p->link;
        }
        p->link = temp;

    }
}
int  length()
{
     int count = 0;
     struct node* temp;
     temp = root;
     while (temp != NULL)
     {
        count++;
        temp = temp->link;
        
     } 
     return count;
}
void display()
{
    struct node* temp;
    temp =root;
    if(temp==NULL)
    {
        printf("list is empty");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->link;
        }
        printf("\n\n");
    }
}
void begin()
{

}
void aftre()
{

}
void delete()
{
    
}

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
    struct node *lchild;
    int  info;
    struct node *rchild;
};
struct node *root = NULL;

void create();
void preorder(struct node *temp);
void inorder(struct node *temp);
void postorder(struct node *temp);


int main()
{
    int ch;
    clrscr();
    while(1)
    {
        printf("\n 1.CREATE");
        printf("\n 2.PRE-ORDER");
        printf("\n 3.IN-ORDER");
        printf("\n 4.POST-ORDER");
        printf("\n5.EXIT");
        printf("\n Enter your choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1 : create();break;
            case 2 : preorder(root);break;
            case 3 : inorder(root);break;
            case 4 : postorder(root);break;
            case 5 : exit(0);
        }
    }
    getch();
    return 0;
}

void create()
{
    struct node *newn, *temp=root,*parent;
    int ele;
    printf("\n Enter element to insert : ");
    scanf("%d",&ele);
    newn = (struct node *)malloc(sizeof(struct node));
    newn ->lchild=NULL;
    newn ->rchild=NULL;
    newn ->info=ele;

    if(root == NULL)
    root = newn;
    else
    {
        while(temp != NULL){
            parent=temp;
            if(newn -> info < temp->info){
                temp = temp->lchild;
            }
            else{
                temp = temp ->rchild;
            }
        }
        if(newn -> info < parent-> info)
        parent->lchild=newn;
        else
        parent->rchild=newn;
    }
}
void preorder(struct node *temp){
    if(temp!= NULL){
        printf("%d ",temp->info);
        preorder(temp->lchild);
        preorder(temp->rchild);

    }
}

void inorder(struct node *temp){
    if(temp != NULL){
        inorder(temp->lchild);
        printf("%d ",temp->info);
        inorder(temp->rchild);
    }
}

void postorder(struct node *temp)
{
    if(temp != NULL)
    {
        postorder(temp->lchild);
        postorder(temp->rchild);
        printf("%d ",temp->info);
    }
}
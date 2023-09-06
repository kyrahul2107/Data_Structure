// Online C compiler to run C program online
#include<stdio.h>
#include<stdlib.h>
typedef struct bst
{
    int data;
    struct bst *l, *r;
    
} BST;
BST * insert(BST *rt, int d)
{
    if(rt==NULL) 
    {
        rt=(BST *)malloc(sizeof(BST));
        rt->data=d;
        rt->l=rt->r=0;
        return rt;
    }
    if(d<rt->data)
    {
        rt->l=insert(rt->l, d);
        
    }
    else {
        rt->r=insert(rt->r, d);
    }
    return rt;
}
void inorder(BST *rt)
{
    if(rt==NULL)
    return;
    inorder(rt->l);
    printf ("%d\t",rt->data);
    inorder (rt->r);
       
    
}
void preorder(BST *rt)
{
    if(rt==NULL)
    return;
    printf("%d\t",rt->data);
    preorder(rt->l);
    preorder(rt->r);
}
void postorder(BST *rt)
{
    if(rt==NULL)
    return;
    postorder(rt->l);
    postorder(rt->r);
    printf("%d\t",rt->data);
    
}
int main() {
    BST *rt;
    int choice;
      int d;
 while (1)
  {
 
        printf("\n\t1 For Insertation\n");
        printf("\t2 For preorder traversal\n");
        printf("\t3 For inorder traversal\n");
        printf("\t4 For postorder traversal\n");
    
        printf("\t5 To exit\n");
        printf("\nEnter Choice :\n");
        scanf("%d", &choice);
 
        switch (choice) {
        case 1:
      
          printf("Enter the data which you want to insert\t");
          scanf("%d",&d);
            rt=insert(rt,d);
            break;
        case 2:
            preorder(rt);
            break;
        case 3:
            inorder(rt);
            break;
        case 4:
            postorder(rt);
            break;
        case 5:
            exit(1);
            break;
        default:
            printf("Incorrect Choice. Try Again \n");
            continue;
        }
    }
 return 0;
}
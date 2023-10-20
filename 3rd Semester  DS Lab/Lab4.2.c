#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *add;
};
//scanning nodes by user.
static void scannode(struct node *ptr, int size){
    struct node *newnode;
    
    struct node *nodebuffer;
    int val;
    printf("enter 1 node:");
    scanf("%d",&val);
    ptr->data=val;
    ptr->add=NULL;
    nodebuffer=ptr;
    for(int i=2;i<=size;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        if(newnode==NULL){
            printf("memory cant be allocated");
            break;
        }
        else{
            printf("enter %d node:",i);
            scanf("%d",&val);
            newnode->data=val;
            newnode->add=NULL;
            nodebuffer->add=newnode;
            nodebuffer=nodebuffer->add;
        }
    }
}
//insert a value in linked list.
void insertnode(struct node *ptr,int size){
    struct node *nodebuffer;
    nodebuffer=ptr;
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    int pos;
    printf("enter the position where you want to insert node:");
    scanf("%d",&pos);
    int val;
    printf("enter the value:");
    scanf("%d",&val);
    if(pos>0){
        for(int i=0;i<pos-2;i++){
            nodebuffer=nodebuffer->add;
        }
        temp->add=nodebuffer->add;
        temp->data=val;
        nodebuffer->add=temp;
        printf("insertion compleated");
    }
    else{
        temp->add=ptr;
        temp->data=val;
        nodebuffer=temp;
    }
}
//delete node from linked list.
void deletenode(struct node *ptr,int size){
    int pos;
    printf("\n enter the position of element which u wanna delete : ");
    scanf("%d",&pos);
    struct node *nodebuffer=ptr;
    struct node *q=ptr->add;
    if (pos == -1) {
        printf("invalid!!");
    }
    if(pos==0){
        ptr=ptr->add;
        free(nodebuffer);
    }
    else{
        for(int i=0;i<pos-2;i++){
            nodebuffer=nodebuffer->add;
            q=q->add;
        }
    }
    nodebuffer->add=q->add;
    free(q);
    printf("deletion compleated");
}
//count nodes
void count(struct node *ptr){
    int count=0;
    while(ptr!=NULL){
        count++;
        ptr = ptr -> add ;
    }
    printf("total no. of nodes are:%d",count);
}
//print nodes.
static void displaynode(struct node *start){
    struct node *nodebuffer;
    nodebuffer=start;
    if(nodebuffer==NULL){
        printf("node is empty");
    }
    else{
        while(nodebuffer!=NULL){
            printf("data %d\n",nodebuffer->data);
            nodebuffer=nodebuffer->add;
        }
    }
}
int main(){
    struct node *start;
    start=(struct node*)malloc(sizeof(struct node));
    int n;
    printf("enter the size of node");
    scanf("%d",&n);
    scannode(start,n);
    while(1){
        printf("\nMENU:\n1.Insert a node at a position.\n2.Delete a node from a specific position.\n3.Count\n4.Traversal.\n5.Exit.");
        int choice;
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        if(choice==1){
            insertnode(start,n);
        }
        if(choice==2){
            deletenode(start,n);
        }
        if(choice==3){
            count(start);
        }
        if(choice==4){
            displaynode(start);
        }
        if(choice==5){
            break;
        }
    }
    return 0;

}
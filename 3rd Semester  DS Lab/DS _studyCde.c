#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node **next;
}*head=NULL;
int main(){
	struct node *tmp,*ptr;
	int i;
	for(i=0;i<5;i++){
		tmp=malloc(sizeof(struct node));
		tmp->data=i+1;
		tmp->next=NULL;
		if(head==NULL){
			ptr=head=tmp;
		}else{
			ptr->next=malloc(sizeof(struct node*));
			ptr->next[0]=tmp;
			ptr=tmp;
		}
	}
	ptr=head;
	do{
		printf("%d ",ptr->data);
		if(ptr->next==NULL)
			break;
		else
			ptr=ptr->next[0];
	}while(1);
	ptr=head->next[0];
	ptr->next=realloc(ptr->next, 2 * sizeof(struct node*));
	tmp=malloc(sizeof(struct node));
	tmp->data=7;
	tmp->next=NULL;
	ptr->next[1]=tmp;
	
	printf("\n");
	ptr=head;
	printf("%d ",ptr->data);
	ptr=head->next[0];
	printf("%d ",ptr->data);
	ptr=ptr->next[1];
	printf("%d ",ptr->data);	
	
	printf("\n");
	ptr=head;
	printf("%d ",ptr->data);
	ptr=head->next[0];
	printf("%d ",ptr->data);
	ptr=ptr->next[0];
	printf("%d ",ptr->data);
		
}

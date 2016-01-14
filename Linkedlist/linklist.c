#include <stdio.h>
#include <stdlib.h>
typedef struct linknode {
	int val;
	struct linknode *next;
} Node;

void print_list(Node *head){
	Node *current=head;
	while(current!=NULL){
		printf("%d\n",current->val);
		current=current->next;
	}
}

void add(Node *head, int val){
	Node *current=head;
	while(current->next!=NULL){
		current=current->next;
	}
	current->next=malloc(sizeof(Node));
	current->next->val=val;
	current->next->next=NULL;
}

void push(Node **head, int val) {
    Node *new_node;
    new_node = malloc(sizeof(Node));

    new_node->val = val;
    new_node->next = *head;
    //printf("%d\n",new_node->next);
    *head = new_node;
    //printf("new hesd is %d\n",head->next->val);
}

int pop(Node **head){
	int retval=-1;
	Node *next_node=NULL;
	if(*head==NULL){
		return -1;
	}
	next_node=(*head)->next;
	retval=(*head)->val;
	free(*head);
	*head=next_node;
	return retval;
}

int remove_last(Node *head){
	int retval=0;
	if(head->next==NULL){
		retval=head->val;
		free(head);
		head=NULL;
		return retval;
	}
	Node *current=head;
	while(current->next->next!=NULL){
		current=current->next;
	}
	retval=current->next->val;
	free(current->next);
	current->next=NULL;
	return retval;
}

int remove_by_index(Node **head, int n){
	int i;
	int retval;
	Node *current=*head;
	Node *temp_node=NULL;
	if(n==0){
		return pop(head);
	}
	for (i=0;i<n-1;i++){
		if(current->next==NULL){
			return -1;
		}
		current=current->next;
	}
	temp_node=current->next;
	retval=temp_node->val;
	current->next=temp_node->next;
	free(temp_node);
	return retval;
}

int main(int argc, char const *argv[])
{
	Node *head=NULL;
	head = malloc(sizeof(Node));
	if (head==NULL){
		return 1;
	}

	head->val=1;
	head->next=NULL;

	head->next=malloc(sizeof(Node));
	head->next->val=2;
	head->next->next=NULL;

	/*printf("%d\n",head);
	printf("%d\n",&head);
	printf("%d\n",*head);
	printf("%d\n",&(*head));
	printf("%d\n",head->next);*/

	print_list(head);
	add(head, 3);
	print_list(head);
	push(&head, 0);
	print_list(head);
	//printf("%d\n",(*head).val);
	//pop(&head);
	//pop(&head);
	//print_list(head);
	//remove_last(head);
	//print_list(head);
	remove_by_index(&head,2);
	print_list(head);
	return 0;
}

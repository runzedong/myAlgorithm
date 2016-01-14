#include <stdio.h>
#include <stdlib.h>
struct ListNode{
	int val;
	struct ListNode *next;
};

void print_list(struct ListNode *head){
	struct ListNode *current=head;
	while(current!=NULL){
		printf("%d\n",current->val);
		current=current->next;
	}
}

int main(int argc, char const *argv[])
{
	struct ListNode *l1=NULL;
	struct ListNode *l2=NULL;
	l1=malloc(sizeof(struct ListNode));
	l1->val=2;
	l1->next=malloc(sizeof(struct ListNode));
	l1->next->val=4;
	l1->next->next=malloc(sizeof(struct ListNode));
	l1->next->next->val=3;
	l1->next->next->next=NULL;
	l2=malloc(sizeof(struct ListNode));
	l2->val=5;
	l2->next=malloc(sizeof(struct ListNode));
	l2->next->val=6;
	l2->next->next=malloc(sizeof(struct ListNode));
	l2->next->next->val=4;
	l2->next->next->next=NULL;
	print_list(l1);
	print_list(l2);
	return 0;
}
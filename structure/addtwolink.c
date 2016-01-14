#include <stdio.h>
#include <stdlib.h>
struct ListNode{
	int val;
	struct ListNode *next;
};

struct ListNode *addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
	int carry=0;
	struct ListNode* head1=l1;
	struct ListNode* head2=l2;
	struct ListNode* result=malloc(sizeof(struct ListNode));
	struct ListNode* head=result;
	result->val=0;
	result->next=NULL;
	int sum;
	if(head1==NULL)
		return l2;
	if(head2==NULL)
		return l1;
	while(head1&&head2){
		sum=head1->val+head2->val+carry;
		if(sum<10){
			result->val=sum;
			carry=0;
		}
		else{
			carry=1;
			sum%=10;
			result->val=sum;
		}
		head1=head1->next;
		head2=head2->next;
		if(head1||head2){
		result->next=malloc(sizeof(struct ListNode));
		result=result->next;
		result->val=0;
		}
	}
	while(head1){
		sum=head1->val+carry;
		if(sum<10){
			result->val=sum;
			carry=0;
		}
		else{
			carry=1;
			sum%=10;
			result->val=sum;
		}
		head1=head1->next;
		if(head1){
		result->next=malloc(sizeof(struct ListNode));
		result=result->next;
		result->val=0;
		}
	}
	while(head2){
		sum=head2->val+carry;
		if(sum<10){
			result->val=sum;
			carry=0;
		}
		else{
			carry=1;
			sum%=10;
			result->val=sum;
		}
		head2=head2->next;
		if(head2){
		result->next=malloc(sizeof(struct ListNode));
		result=result->next;
		result->val=0;
		}
	}
	if(carry==1){
		result->next=malloc(sizeof(struct ListNode));
		result=result->next;
		result->val=1;
	}
	result->next=NULL;
	return head;
}

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
	l1->next->next->val=9;
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
	print_list(addTwoNumbers(l1,l2));

	return 0;
}
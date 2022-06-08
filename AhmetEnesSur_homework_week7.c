#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct list{
	int data;
	struct list *reverse;
	struct list *next;
};
typedef struct list list;
list *head = NULL;
void insert(){
	int i, size;
	
	list *add,*prev,reverse =NULL;
	printf("enter list size:");
	scanf("%d",&size);
	for (i=0;i<size;i++){
		add = (list*)malloc(sizeof(list));
		scanf("%d",&add->data);
		add->next = NULL;
		if (head == NULL){
			head = add;
			prev = add;
		}
		else {
			prev->next = add;
			prev = prev->next;
			
		}
	}
	
}

void reverseprint(){
	list *rev = head;
	while(rev ->next){
		rev = rev->next;
	}
	while(rev){
		printf("%d",rev);
		rev = rev->reverse;
	}
}

int main (){
	
insert();
reverseprint();	
	
	
	return 0;
}










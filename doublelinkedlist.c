#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct doublelist{
	int data;
	struct doublelist *next;
	struct doublelist *prev;
};


typedef struct doublelist list;

list *head = NULL;
void addlist(){
	int i,size;
	list *add,*pre;
	printf("enter list size :");
	scanf("%d",&size);
	for (i=0;i<size;i++){
		add = (list*)malloc(sizeof(list));
		scanf("%d",& add->data);
		add->next = NULL;
		add->prev = NULL;
		
		
		if(head == NULL){
			head = add;
			pre = add;
			add->prev = NULL;
		}
		else{
			add ->prev = pre;
			pre ->next = add;
			pre = pre->next;
		
		}
	}
	}
void print(){
		
	list *prt = head;
	while(prt ->next != NULL){
	
		prt = prt ->next;
	}
	printf("reverse print : \n");
	while (prt){
		
		printf("%d\n",prt->data);
		prt = prt ->prev;
		
	}
	
}
	
void dlt(){
	printf("enter you want to delete :");
	list *del = head,*pre = NULL;
	int number;
	scanf("%d",&number);
	while(del->data != number){
		pre = del;
		del = del->next;
	}
	if(pre == NULL){
		head = del->next;
	}
	else{
		pre->next = del->next;
		del->next ->prev =del ->prev;
	
		
	}
	
}
	



int main(){
	addlist();
	print();
	dlt();
	print();
	return 0;
}

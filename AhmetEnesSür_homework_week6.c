#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct list{
	int data;
	struct list *next;
	struct list *reverse;
};


typedef struct list list;
list *head = NULL;
list *reverse = NULL;
void insert(){
	list *newdata,*prev;
	int size,i;
	printf("enter list size :");
	scanf("%d",&size);
	printf("\nEnter values\n");
	for (i=0;i<size;i++){
		newdata = (list*)malloc(sizeof(list));
		scanf("%d",&newdata->data);
		newdata->next = NULL;
		newdata->reverse = NULL;
		
	if(head == NULL){
		head = newdata;
		prev = newdata;
	}
	else{
		prev ->next = newdata;
		prev = prev->next;
	}
	}
}
	void updates(){
	list *update = head;
	int updatenum;
	printf("which number you want to add before ??\n");
	scanf("%d",&updatenum);
	
	while(update ->data != updatenum){
		update = update->next;
		if(update == NULL){
			printf("there isnt any number like %d",updatenum);
			exit;
		}
	}
	list *temp=(list*)malloc(sizeof(list));
	temp ->next = update->next;

	printf("enter new data\n");
	scanf("%d",&temp->data);
		update->next = temp;
	}

	void del(){
		list *deletenum=head,*prev = NULL;
		int dltnum;
		printf("which number you want to delete ?\n");
		scanf("%d",&dltnum);
		while (deletenum ->data !=dltnum){
		
			prev = deletenum;
			deletenum = deletenum->next;
		}
		if(prev == NULL){
			printf("you pick the first data\n");
			head = deletenum ->next;
		}
		else if(deletenum->next == NULL){
			printf("there isnt any number like %d\n",dltnum);
			exit;
		}
		else{
			prev->next = deletenum->next;
			free(deletenum);
		}
	}	
	void find(){
		list *find= head;
		int numbr,i=1;
		printf("which number you want to find ?\n");
		scanf("%d",&numbr);
		while(find ->data != numbr){
			find = find ->next;
			i++;
			if(find  == NULL){
			printf("there isnt any number like %d\n",numbr);
			exit;
		}
		}
		printf("your number is %d. place in the list\n",i);
	
		
	}
	
	void print(){
		printf("List is printing\n");
		list *prt= head;
		int i=1;
		while(prt != NULL){
		printf("%d .data = %d place in ram = %d\n",i,prt->data,prt->next);
		prt = prt ->next;
		i++;			
		}
	}
	void reverseprint(){
		printf("reverse print\n");
	list *rev = head;
	while(rev ->next){
		rev = rev->next;
	}
	while(rev){
	
		printf("%d\n",rev->data);
		rev = rev->reverse;
	}
}

int main(){
	insert();
	print();
	updates();
	print();
	del();
	print();
	find();
	print();
	reverseprint();
	return 0;
}

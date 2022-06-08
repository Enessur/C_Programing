#include<stdio.h>
#include<string.h>
#include<stdlib.h>





struct list{
	char meyve[100];
	
	struct list*next;
};

typedef struct list list;
	int main (){
		
		list*head;
		list*iter;
		
		head =(list*)malloc(sizeof(list));
		
		
		printf("enter your fruit name :");
		gets(head);
		
		printf("%s",head);
		
		head->next = head->next;
		
		head->next = (list*)malloc(sizeof(list));
		
		printf("enter your second fruit name :");
		gets(head->next);
		
		printf("%s %s",head->next, head);
		
	
	
		iter = (list*)malloc(sizeof(list));
		head->next->next = (list*)malloc(sizeof(list));
		strcpy(	head->next->next,head->next);
		
			iter = head->next;
			gets(iter);
			
			printf("%s %s %s", head,  head->next,head->next->next);
			
		return 0;
		
	}

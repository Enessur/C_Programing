#include <stdio.h>
#include <stdlib.h>

struct list{
	int pointhead;
	int node;

	struct list*next;
};
typedef struct list list;

//hocam print kýsmýnda sayýlarý bir türlü ayýramadým

list *head = NULL;
void graphs(){
	list *add,*prev;
	int i,size,j,a,b;
	list *print;
	list *graph;
	
	printf("how many head point in that list :");// programda kaç tane baþlangýç verisi var
	scanf("%d",&a);
	print=(list*)malloc(sizeof(list));
	graph=(list*)malloc(sizeof(list)*a);
	
		for (i=0;i<a;i++){
					
	printf(" data is %d ,how many connection %d have : ",i+1,i+1);//veri kaç tane bað a sahip
	scanf("%d",&b);

		for (j=0;j<b;j++){

	add =(list*)malloc(sizeof(list));
	printf("->");									// baðlar
	scanf("%d",&add->node);
		add ->next = NULL;
	if(head==NULL){
	
		head = add;
		prev = add;
	}	
	else{
		prev ->next = add;
		prev = prev->next;
		
	}
		graph[i] = *add;
		}
	}

	i = 0;
	printf("graph is printing :");
	for (i=0;i<a;i++){
		*print = graph[i];
		list *print = head;
		while(print->next != NULL){
			printf("%d  ",print->node);
			print = print->next;
			
		}
		
	}
	
}

int main(){
	list *graph;
	graphs(graph);
	
	return 0;
}





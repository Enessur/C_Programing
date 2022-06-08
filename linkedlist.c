#include<stdio.h>
#include<string.h>
#include<stdlib.h>
	
	int i=0 ,n=0;
typedef struct Student{
	char name[20];
	char number [20];
	int age;
	float gpa;
	
	struct student*next;
}student;
	student list[20];

	void addStudent( student *root ){
	
	
		

			printf("Enter student name :");
			scanf("%s",&root->name );
		
			printf("Enter student number :");
			scanf("%s",&root->number );
			
			printf("Enter student age :");
			scanf("%d",&root->age );
			
			printf("Enter student gpa :");
			scanf("%f",&root->gpa );	
			
		
		
		
	}
	
	int main (){
		
		student *root;
		root =(student*)malloc(sizeof(list[20]));
		int size;
	  
		printf("simdilik boyutu belirle :");
		scanf("%d",&size);
		 
			for (i=0;i<size ;i++){
				list[n];
			addStudent(n);
			n++;
				
		}

		
		
		
				return 0;
	}
	
	
	
	/*
	typedef	struct node {
		int x,y;
	 
	  struct node * next;	
	}node;
	

	
	
	int main (){
		
		node*root;
		root = ( node*)malloc(sizeof(node));
		
		root->x=1, root->y=21;
		
		
		 root->next=(node*)malloc(sizeof( node));
 		 root->next->x=20;
 		  node *iter;
 		 iter=root;
  	 	 printf("%d %d",iter->x ,iter->y);
 		 iter=iter->next;
 		 printf(" %d",iter->x);
		
		
		
		
				return 0;
	}
	*/
	

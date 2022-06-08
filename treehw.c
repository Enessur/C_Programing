#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct tree {
	
	int data;
	struct node * left;
	struct node * right;
};

struct node * allocate (int data){
	struct node *tmp = malloc(sizeof(struct node));
	tmp->data = data;
	tmp->left = NULL;
	tmp->right = NULL;
	
	return tmp;
}

struct node* find(int number ,struct node* n){
	if (!n) return 0;
	if(n->data > number){
		return find(number ,n->left);
	}
	else if (n->data < number ){
		return find (number , n->right);
	}
	else (){
		return n;
	}
}

struct node* insert(int number, struct node* n ){
	if (!n) return allocate (number);
	if (n->data > number){
		n->left = insert(number , n->left);
		
	}
	else if (n->data < number ){
		n->right = insert(number , n->right);
	}
	else(){
		return n;
	}
}

int main (){
	struct node * root = NULL;
	int numbers[] = {1,2,3,4,5,6,7,8,9}
	for (int i = 0; i < 9; i++){
		root = insert (numbers[i],root);
	}
	
	struct node * root = insert(10, NULL); 
	struct node * n = find(10,root);
	
	return 0;
}

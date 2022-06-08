#include<stdio.h>
#include<stdlib.h>

#define X 7

int matrix [X][X] ={
//   1,2,3,4,5,6,7
	{0,1,1,1,0,0,0},//1
	{0,0,0,1,1,0,0},//2
	{0,0,0,0,0,1,0},//3
	{0,0,1,0,1,1,1},//4
	{0,0,0,0,0,0,1},//5
	{0,0,0,0,0,0,0},//6
	{0,0,0,0,0,1,0}//7
};
int is_adjacent(int v, int c){
	return matrix[v][c];	
}
int main(){
	printf("connection between %d and %d -> %d\n",6,5,is_adjacent(6,5));
	printf("connection between %d and %d -> %d\n",3,2,is_adjacent(3,2));
	printf("connection between %d and %d -> %d\n",1,5,is_adjacent(1,5));
	printf("connection between %d and %d -> %d\n",3,4,is_adjacent(3,4));
	return 0;
}

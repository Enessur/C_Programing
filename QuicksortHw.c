#include<stdio.h>


int quick_sort(int *a, int low, int high);
int partition(int * a , int low , int high);

int count;


int quick_sort(int *a , int low , int high){
	
	int pivot = 0;
	
	if ( low < high){
		pivot = partition(a,low,high);
		quick_sort(a,low,pivot-1);
		quick_sort(a,pivot+1,high);
		
		count++;
	}
	return count++;
	
}
int partition (int *a,int low , int high){
	
	int pivot = a[high];
	int i , j;
	int tmp;
	
	j = low;
	
	for (i  = low ;i<high;i++){
		count++;
		
		if(a[i]<= pivot){
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			j++;
			
			
		}
		
	}
	tmp = a[j];
	a[j] = a[high];
	a[high] = tmp;
	
	return j ;
	
}


int main (){
	
	
		int a[10] = {50,2,532,5,8,67,345,32,98,14};
		
		int count = 0;
		int i;
		printf("Print Unsorted List : ");
		
		for(i = 0 ; i < 10; i ++){
			printf("%d ",a[i]);
			
		}
		printf("\n");
		count = quick_sort(a,0,9);
			
		printf("List is sorted : (%d, steps)",count);
		
		for(i = 0 ; i < 10; i ++){
			printf("%3d  ",a[i]);
			
		}
		
	
	return 0;
}

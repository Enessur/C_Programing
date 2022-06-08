#include<stdio.h>

int merge(int *a , int first, int mid ,int last);
int merge_sort(int *a , int first , int last);

int count =0 ;

int merge(int * a, int first , int mid , int last){
	
	int f1 = first ;
	int f2 = mid + 1;
	int l1 = mid ;
	int l2 = last;
	int i;
	
	int count = 0;
	
	int tmp[10];
	
	for (i = 0; (f1 <= l1) && (f2 <= l2); i++){
		
		if ( a[f1] < a[f2]){
			
			tmp[i]  = a[f1++];
		}
		else {
			tmp[i] = a[f2++];
		}
		count++;
		
	}
	for ( ; f1<=l1;f1++, i++){
		
		tmp[i] = a[f1];
		count++; 
		
	}
	for (; f2 <= l2;f2++,i++){
		
		tmp[i] = a[f2];
		count++;
	}
	for(i = 0; i <= last - first; i++){
		a[first + i] = tmp[i];
		count++;
		
	}
	
	return count;
}


int merge_sort(int* a, int first, int last)
{
	int mid;
	if(first < last)
	{
		mid = (first + last) / 2;

		merge_sort(a, first, mid);
		merge_sort(a, mid+1, last);

		return merge(a, first, mid, last);
	}

	return 1;
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
		count = merge_sort(a, 0 ,9);
		
		printf("List is sorted : (%d, steps)",count);
		
		for(i = 0 ; i < 10; i ++){
			printf("%3d  ",a[i]);
			
		}
		
		
		return 0;
		
	}

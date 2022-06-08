#include<stdio.h>

	//insertion sort
	int main (){
		
		int a[11] = {5,2,7,3,76,9,1,8,6,54,43};
		int step = 0;
		int i = 0;
		
		printf("Unsorted array : \n");
		

		
		for(i = 0; i<11; i++){
			printf("%d ",a[i]);	
		}
		
		printf("\nSorted array : \n");
		int j = 1 ;
		int key, size;

		
		for(j = 1 ; j<11; j++){
			
			key =a[j];
			i = j-1;
			
		while (i>=0 && a[i]>key){
			step++;
			
			a[i+1] = a [i];
			i--;
		}
			a[i+1] = key;
		}
		
		
	for(i = 0; i<11; i++){
			printf("%d ",a[i]);	
		}

		printf("\nTakes %d steps.",step);
		
	
		
		
		return 0;
	}

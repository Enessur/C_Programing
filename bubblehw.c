#include<stdio.h>

	//booble sort
	int main (){
		
		int a[11] = {5,2,7,3,76,9,1,8,6,54,43};
		int step = 0;
		int i = 0;
		int j;
		int tmp;
		int size = 11;	
		
		printf("Unsorted array : \n");

		for(i = 0; i<11; i++){
			printf("%d ",a[i]);	
		}
		printf("\nSorted array : \n");	


		for (i=0; i<size; i++){
			for (j=0; j<size; j++){
		step++;
		
			if (a[i] < a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
		for(i = 0; i<11; i++){
			printf("%d ",a[i]);	
		}
		printf("\nTakes %d steps.",step);

		return 0;
	}

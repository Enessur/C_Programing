#include<stdio.h>
#include<stdlib.h>

	int fibbo(int x,int y){
		int secondnum,i;
		secondnum = x;
		printf("%d\n%d\n",x,secondnum);
		
		for(i =1;i<= y;i++){
		int temp = secondnum;
		secondnum += x;
		x= temp;
		printf("%d\n",secondnum);	
			
		}

	}

	int main(){
	
		int base,limit;
		printf("for better calculation base values must be 1\n");
		scanf("%d",&base);
		printf("chose limit for fibbo loop\n");
		scanf("%d",&limit);
		fibbo(base,limit);
		
		
		return 0;
	}

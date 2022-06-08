#include<stdio.h>		

		int main(){			
		int number;
		
		printf("Enter your number MAX SIZE (999) : ");
		scanf("%d",&number);
			
			if (number > 999){
			
				printf("\n Your number is over sized pls try again\n");
				
						printf("Enter your number : ");
						scanf("%d",&number);
					
			 if (number > 999)	{
						printf("\nYou haven't entered number correctly.Program ends... ");
			return 0; 	//we must end this program so ı use return 0 ; 
						
						}
		
						printf("Your number digits are %d %d %d ",number/100,number/10 %10,number%10 %10 );
						 //ı thought if ı divide and take numbers percentage like this we can obtain numbers and it worked :D 
 		}

	  		else 
		{	
						printf("Your number digits are %d %d %d",number/100 ,number/10 %10 ,number%10 );	
		}
	
			return 0;
		}
		

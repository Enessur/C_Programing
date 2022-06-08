#include<stdio.h>
#include<string.h>



int stringlenght(char *p){
	
	int lenght = 0;
	int i = 0;
	
	for (; p[i] != '\0'; i++){
		
		
		lenght++;
	
	 }	 
	 
	 return lenght;
}


int main (){
	
	
	char string[] = "random stuff";
	
	printf("%d",stringlenght(string));
	
	
	return 0; 
}

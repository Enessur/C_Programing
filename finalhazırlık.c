#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char meyve[20];
	int kilo;
	float miktar;
	
}list;

void addlist(list *str){
		int a, i=0;
		printf("kac meyve turu var ?:");
		scanf("%d",&a);
		
		str =(list*)malloc(sizeof(list)*a);
	
	for (i =0; i<a ;i++){
		
		printf("\n%d. meyve turu :",i);
		scanf("%s",str[i]->meyve);
	
		printf("\n%d. meyve kilosu :",i);
		scanf("%d",str[i]->kilo);
	
		printf("\n%d. meyve miktari :",i);
		scanf("%f",str[i]->miktar);
		
	}	
		
	
}

int main() {

	
	
	addlist(manav);

	

	
	
	
	
	return 0;
}

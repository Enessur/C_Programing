#include <stdio.h>
#include <stdlib.h>


	int main (){
	char ch,text[100];
	int yn;	
	
	FILE*fp;
	
	fp = fopen("C:\\Users\\Msi\\Desktop\\newtext2.txt","r");
	
	printf("READ TEXT\n");
	printf("=========\n");
	
	while ((ch = getc(fp))!= EOF)
	{
		putc(ch,stdout);
	}
	
	if(fp == NULL)
	{
		printf("file doesnt exist wanna open new one ? 1 : y 2: no :");
		scanf("%d",&yn);
		if(yn == 1){
			fp = fopen("C:\\Users\\Msi\\Desktop\\newtext2.txt","w");
		}
		else
		exit(0);
		
	}
	while (fp != NULL){
		

		fp = fopen("C:\\Users\\Msi\\Desktop\\newtext2.txt","a");
		
		fprintf(fp,"enter your text\n",text);
		
		fgets(text,100,stdin);
		fputs(text,fp);	
			
		printf("%s",text,fp);
	
			fclose(fp);
		
			
			}
		return 0;
	}
	
	
		
	

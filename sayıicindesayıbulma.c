#include<stdio.h>
#include<stdlib.h>
		
	int main (){
		int sayi;
		int is;
		
		printf("hangi sayiyi bulmak istiyorsunuz 1 9 arasinda :");
		scanf("%d",&is);
		if (is > 10){
	
		printf("\n okuma bilmiyormusun ?");
		return 0;
			}
		printf("temel sayiyi giriniz (max: 9999)");
		scanf("%d",&sayi);
		
		if (sayi > 9999)
		{
		printf("bb");
		return 0;
		}
		
		printf("aradigin sayi : %d\n",is);
				
	printf(" senin sayin : %d ",sayi);

		if (sayi/1000 == is)
		printf("\naradigin sayi 1. digitde");
	    if (sayi/100 %10 == is)
	 	printf("\naradigin sayi 2. digitde");
	    if (sayi/10 %10 == is)
	    printf("\naradigin sayi 3. digitde");
	    if (sayi%10 == is)
	    printf("\naradigin sayi 4. digitde");
		else {
			printf("\naradigin sayi bulunamadi.");
		}

	
		return 0;
	}

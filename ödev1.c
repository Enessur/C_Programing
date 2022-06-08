#include <stdio.h>


int main()
{
	int odev;
    int number;
    int ucgen;
    int kare;
    int uzunlukf;
    
    printf("Odev seciniz : \n 1.tek cýft \n 2.ucgen kare alan farký  ");
    scanf("%d",&odev);
    
    switch(odev){
	
	
	 case 1 :
           printf("tam sayi giriniz :\n ");
         scanf("%d", &number);
    if(number % 2 == 0)
        printf("%d is even.", number);
    else
        printf("%d is odd.", number);
        
     case 2 : 
     	printf("Ucgenin kenarinin uzunlugunu giriniz :\n");
     	scanf("%d",&ucgen);
     	
     	printf("Karenin kenarinin uzunlugunu giriniz : \n");
     	scanf("%d",&kare);
     	
     	uzunlukf = (   (ucgen * 3) - (kare * 4 ));
        printf("uzunluk farki = %d",uzunlukf);
    }
    return 0;
}

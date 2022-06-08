#include<stdio.h>

	int main(){
		int islem;
		int bakiye =1000;
		int tutar;
		
		printf("Islemler\n1.Para Cekme:\n2.Para Yatirma:\n3.Havale Yapma:\n4.Bakiye Sorgulama:\n5.Kart Iade\n6.Yattiginiz Yerden Bugatti Kazanmak Istermisiniz?\n");
		
	don :	printf("\n\nIslem Seciniz :");
		 scanf("%d",&islem);
		
			switch(islem){
				
			case 1:
				printf("\nBakiyeniz : %d\n",bakiye);
				printf("Cekilecek Tutar :");
				scanf("%d",&tutar);
				if (bakiye < tutar){
					printf("Bakiye Yetersiz Fakir Ezik \n");
					goto  don;
				}
				bakiye -= tutar;
				printf("Yeni Bakiyeniz %d",bakiye);
				
			goto  don;
			
			case 2: 
				
				printf("\nBakiyeniz :%d\n",bakiye);
				printf("Yatiralacak Tutar :");
				scanf("%d",&tutar);
				bakiye += tutar;
				printf("Yeni Bakiyeniz %d",bakiye);
			goto  don;
			case 3:
				printf("\nBakiyeniz : %d\n",bakiye);
				printf("Havale Yapilacak Tutar :");
				scanf("%d",&tutar);
				if (tutar > bakiye){
					printf("Yok Canim Olmaz Oyle Yanina Ketcap Mayonezde Olsun mu ?");
				goto  don;
						
				}
			bakiye -=tutar;
			printf("\nYeni Bakiyeniz %d",bakiye);
				goto  don;
					
			case 4:
				printf("\nBakiyeniz : %d",bakiye);
		
				goto  don;
			goto  don;	
			case 5:
				printf("\nKart Giris Yerini Kontrol Ediniz.");
			break;
			
			default: 
			printf("Bilinmeyen Islem."); 
			break;
		
			case 6:
				printf("Doru Yoldasin Karsiiim Simdi Istedigim Bilgileri Yaziyorsun 4 Adimda Zengin Olcan\n");
				printf("1.Ananin Kredi Karti No'sunu Yaz Simdi :");
				scanf("%d");
				printf("2.Ananin Isim Soy Isiminide Arasinda Bosluk Olmadan Alayim Canim Benim  :");
				scanf("%s");
				printf("3.Kartin Son Kullanma Tarihi Ay / Yil Olarak Bosluksuz Yaz Bakim  :");
				scanf("%d");
				printf("4.Zengin Olmana Cok Az Kaldi Son Olarak Kartin Arkasindaki Son 3 Rakami Alayim  :");
				scanf("%d");
				printf(".Hadi Eyw Bugattini Yolladim Bekle Gelicek Kaarsim ");	
			
			break;
			}
		
	
		
		return ;
	}


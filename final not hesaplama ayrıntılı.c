#include<stdio.h>
	
	int main (){
		
		int vize1,vize2,final;
		
		float okulort;	
		
		float dersort;
		
		printf("1. vize notunuzu giriniz  :");
		scanf("%d",&vize1);
		
				
		printf("2. vize notunuzu giriniz  :");
		scanf("%d",&vize2);
		
	
				
		printf("Final notunuzu giriniz  :");
		scanf("%d",&final);
		
	
		printf("Okul ortalamanizi giriniz  :");
		scanf("%d",&okulort);
		
		dersort = (vize1*3/10.0 + vize2*3/10.0 + final*4/10.0);
		
		
		if (dersort >= 90){
			printf("Harf Notunuz - AA ve Ders Ortalmaniz : %2.f\n",dersort);
		}
		
	
		else if (dersort >= 85 && dersort < 90) {
			printf("Harf Notunuz - AB ve Ders Ortalmaniz : %2.f\n",dersort);
		}
		
	
		else if (dersort >= 80 && dersort < 85) {
			printf("Harf Notunuz - BB ve Ders Ortalmaniz : %2.f\n",dersort);
		}

	
		else if (dersort >= 75 && dersort < 80) {
			printf("Harf Notunuz - CB ve Ders Ortalmaniz : %2.f\n",dersort);
		}
		
	
		else if (dersort >= 70 && dersort < 75	) {
			printf("Harf Notunuz - CC ve Ders Ortalmaniz : %2.f\n",dersort);
	
		if (okulort < 2.5){
			printf("Dersi tekrar alsan iyi olur ezik");
		}
	}
	
		else if (dersort >= 65 && dersort < 70	) {
			printf("Harf Notunuz - DC ve Ders Ortalmaniz : %2.f\n",dersort);
	
		if (okulort < 2.5){
			printf("Dersi tekrar alsan iyi olur ezik");
		}
	}
	
		else if (dersort >= 60 && dersort < 65	) {
			printf("Harf Notunuz - DD ve Ders Ortalmaniz : %2.f\n",dersort);
	
		if (okulort < 2.5){
			printf("Dersi tekrar alsan iyi olur ezik");
		}
	}
	
	
		else if (dersort >= 0 && dersort <= 10	) {
			printf("Harf Notunuz - FF ve Ders Ortalmaniz : %2.f\n",dersort);
		
		printf("Bu ulkeye cumhurbaskani da lazim sikma canini	");
		
		}
	
		else {
	
			printf("Harf Notunuz - FF ve Ders Ortalmaniz : %2.f\n",dersort);
			printf("Dersten Kaldin Agla	ZaAa XD	Keriz");	
	
		}
		
		return 0;
		
	}

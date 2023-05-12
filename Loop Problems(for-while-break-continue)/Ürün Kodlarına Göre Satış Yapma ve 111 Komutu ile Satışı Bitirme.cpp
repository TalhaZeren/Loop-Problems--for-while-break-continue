#include <stdio.h>
/*

	KALEM RENGÝ    ÜRÜN KODU	BÝRÝM FÝYATI    
	Kýrmýzý 		11				1,5
	Lacivert		12				2,5
	Beyaz			13				3,0	
	Mavi			14				4,5	
	Sarý			15				5,0


*/
int main(){
	
int kod,sayi;	
float toplam;

printf("Urun kodlarini girin (Durdurmak Icin 111 Tuslayin) :");
scanf("%d",&kod);											
while(kod != 111){
	if(kod == 11){			// Kýrmýzý				
		toplam += 1.5;
	}
	else if(kod ==12){		// Lacivert
	toplam += 2.5;
	}	
	else if(kod ==13){		// Beyaz
	toplam += 3.0;
	}
	else if(kod ==14){		// Mavi
	toplam += 4.5;
	}
	else if(kod ==15){		// Sarý
	toplam += 5.0;
}
	else{
		printf("\nLutfen Gecerli Bir Deger Giriniz\n\n");
	}
	printf("Urun kodlarini girin (Durdurmak Icin 111 Tuslayin) :");
	scanf("%d",&kod);
}
printf("\nGun Sonu Satis Kazanci %.2f TL'dir.",toplam);

	return 0;
}


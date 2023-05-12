#include <stdio.h>

int main(){
int kisi,yas,i;
float toplam = 0;
	
printf("Kisi Sayisini giriniz :");
scanf("%d",&kisi);													// Yaþ Sýnýrý     TL Tutarý						
																	//	  1 - 10         1
for(i=0;i<kisi;i++){												//	 11 - 17 		1.5	
																	//   18 - 26 		4.75
printf("%d kisinin yaslarini giriniz",kisi);						//	 27 - 50 		 7		
scanf("%d",&yas);													//  51 ve Üstü		5.25	

	if(1<=yas && yas<=10){
		toplam += 1;
	}
	
	else if(11<=yas && yas<=17){
		toplam += 1.5;
	}
	
	else if(18<=yas && yas<=26){
		toplam += 4.75;
	}
	
	else if(27<=yas && yas<=50){
		toplam += 7;
	}
	
	else if(yas > 50){
		toplam += 5.25;
	}
	
}	
printf("Odenecek Toplam Ucret : %.2f TL",toplam);	
	return 0;
}

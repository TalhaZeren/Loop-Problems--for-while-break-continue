#include<stdio.h>
int main(){
					// Collatz Serisi : Collatz Varsayýmý her sayýdan 1'e ulaþýlabileceðini gösterir. Buna göre; eðer sayý çiftse 2'ye bölünür, tek ise 3 ile çarpýlýp 1 eklenir.
														// Bu iþlem sayý 1 olana kadar devam edilir.
int sayi;
int i,adet = 0;

printf("Sayiyi Giriniz :");
scanf("%d",&sayi);
	
	if(sayi >0)
	printf("Collatz Degeri : %d\t",sayi);
	adet++;

	while(sayi != 1){
	
		if(sayi %2 == 0){
			
			sayi = sayi / 2;
			adet++;
			printf("%d\t",sayi);
			
		}
		else if(sayi % 2 == 1){
			
			sayi = (sayi * 3) +1;
			adet++;
			printf("%d\t",sayi);
	
		}
		else if(sayi <=0){
			printf("\nSayi sifir veya negatif olamaz.Tekrar bir sayi girin. \n");
				printf("Sayiyi Giriniz :");
					scanf("%d",&sayi);
			continue;
		}	
	}
printf("\n\n Seri %d adet sayidan olusur.",adet);	
	return 0;
}
